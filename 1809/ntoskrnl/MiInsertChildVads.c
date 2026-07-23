/*
 * XREFs of MiInsertChildVads @ 0x14085F950
 * Callers:
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiGetWsAndInsertVad @ 0x140063E10 (MiGetWsAndInsertVad.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiUpControlAreaRefs @ 0x1402A3640 (MiUpControlAreaRefs.c)
 *     MiCommitPageTableRangesForVad @ 0x1402BA34C (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     MiDeletePartialCloneVads @ 0x14085F728 (MiDeletePartialCloneVads.c)
 */

__int64 __fastcall MiInsertChildVads(__int64 a1, __int64 a2)
{
  int v4; // edi
  unsigned __int64 v5; // rbp
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

  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v17);
  v5 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v6 = (int *)(a2 + 48);
      if ( (*(_DWORD *)(a2 + 48) & 0x4000) == 0 )
      {
        v4 = MiUpControlAreaRefs(a2, 1);
        if ( v4 < 0 )
          break;
      }
      v4 = MiCommitPageTableRangesForVad(a2);
      if ( v4 < 0 )
      {
        v15 = (*v6 & 0x4000) == 0;
LABEL_22:
        if ( v15 )
          MiUpControlAreaRefs(a2, 0);
        break;
      }
      inserted = MiInsertVadCharges(a2, (struct _KPROCESS *)a1);
      v9 = *v6;
      v4 = inserted;
      if ( inserted < 0 )
      {
        v15 = (*v6 & 0x4000) == 0;
        goto LABEL_22;
      }
      a2 = *(_QWORD *)a2;
      if ( (v9 & 0x40000) != 0 )
      {
        v10 = *(_QWORD *)(a1 + 1296);
        if ( (v9 & 0x4000) != 0 )
          ++*(_QWORD *)(v10 + 376);
        else
          ++*(_QWORD *)(v10 + 384);
      }
      v11 = *v6;
      if ( (*v6 & 0x4000) == 0 )
      {
        v12 = *(void **)(v5 + 128);
        if ( v12 )
        {
          ObfReferenceObject(v12);
          v11 = *v6;
        }
        if ( (v11 & 0x4000) == 0 && *(__int64 *)(v5 + 120) < 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140439C90, 0LL);
          v14 = *(_QWORD *)(***(_QWORD ***)(v5 + 72) + 32LL);
          ++*(_DWORD *)(v14 + 8);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439C90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439C90);
          KeAbPostRelease((ULONG_PTR)&qword_140439C90);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
      }
      *(_QWORD *)(v5 + 16) = -2LL;
      MiGetWsAndInsertVad(v5, v8);
      v5 = a2;
      if ( !a2 )
        goto LABEL_25;
    }
    MiDeletePartialCloneVads((_QWORD *)a2);
  }
LABEL_25:
  KiUnstackDetachProcess((__int64)v17, 0LL);
  return (unsigned int)v4;
}
