/*
 * XREFs of MiInsertChildVads @ 0x14089B5B0
 * Callers:
 *     MiAllocateChildVads @ 0x14089A8C0 (MiAllocateChildVads.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     MiGetWsAndInsertVad @ 0x1400729C0 (MiGetWsAndInsertVad.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiUpControlAreaRefs @ 0x1402BA800 (MiUpControlAreaRefs.c)
 *     MiCommitPageTableRangesForVad @ 0x1402D036C (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MiDeletePartialCloneVads @ 0x14089B3A0 (MiDeletePartialCloneVads.c)
 */

__int64 __fastcall MiInsertChildVads(ULONG_PTR BugCheckParameter1, _DWORD *P)
{
  int v4; // edi
  _QWORD *v5; // rbp
  int *v6; // rsi
  int inserted; // eax
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  void *v12; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v14; // rcx
  bool v15; // zf
  _BYTE v17[48]; // [rsp+20h] [rbp-68h] BYREF

  memset(v17, 0, sizeof(v17));
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v17);
  v5 = P;
  if ( P )
  {
    while ( 1 )
    {
      v6 = P + 12;
      if ( (P[12] & 0x100000) == 0 )
      {
        v4 = MiUpControlAreaRefs((__int64)P, 1);
        if ( v4 < 0 )
          break;
      }
      v4 = MiCommitPageTableRangesForVad((__int64)P);
      if ( v4 < 0 )
      {
        v15 = (*v6 & 0x100000) == 0;
LABEL_22:
        if ( v15 )
          MiUpControlAreaRefs((__int64)P, 0);
        break;
      }
      inserted = MiInsertVadCharges((__int64)P, (struct _KPROCESS *)BugCheckParameter1);
      v9 = *v6;
      v4 = inserted;
      if ( inserted < 0 )
      {
        v15 = (v9 & 0x100000) == 0;
        goto LABEL_22;
      }
      P = *(_DWORD **)P;
      if ( (v9 & 0xC0000) == 0x40000 )
      {
        v10 = *(_QWORD *)(BugCheckParameter1 + 1296);
        if ( (v9 & 0x100000) != 0 )
          ++*(_QWORD *)(v10 + 424);
        else
          ++*(_QWORD *)(v10 + 432);
      }
      v11 = *v6;
      if ( (*v6 & 0x100000) == 0 )
      {
        v12 = (void *)v5[16];
        if ( v12 )
        {
          ObfReferenceObject(v12);
          v11 = *v6;
        }
        if ( (v11 & 0x100000) == 0 && (__int64)v5[15] < 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140464590, 0LL);
          v14 = *(_QWORD *)(**(_QWORD **)v5[9] + 32LL);
          ++*(_DWORD *)(v14 + 8);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140464590, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140464590);
          KeAbPostRelease((ULONG_PTR)&qword_140464590);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
      }
      v5[2] = -2LL;
      MiGetWsAndInsertVad((unsigned __int64)v5, v8);
      v5 = P;
      if ( !P )
        goto LABEL_25;
    }
    MiDeletePartialCloneVads(P);
  }
LABEL_25:
  KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
  return (unsigned int)v4;
}
