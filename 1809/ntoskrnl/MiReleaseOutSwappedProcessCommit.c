/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x1402A4E74
 * Callers:
 *     KiOutSwapProcesses @ 0x14010B430 (KiOutSwapProcesses.c)
 * Callees:
 *     SmStoreExistsForProcess @ 0x140011FA4 (SmStoreExistsForProcess.c)
 *     KeForceAttachProcess @ 0x14001674C (KeForceAttachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D30 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078294 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400784B0 (MiUnlockVad.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     KeForceDetachProcess @ 0x140127F54 (KeForceDetachProcess.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A38CC (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402A3E30 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402A4090 (MiLogOutswappedProcessCommitRelease.c)
 *     SmQueryStoreCommitUsage @ 0x140306410 (SmQueryStoreCommitUsage.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(ULONG_PTR a1)
{
  LONG *SharedVm; // rax
  __int64 v3; // r8
  LONG *v4; // r13
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // r14
  LONG *v8; // rbx
  KIRQL v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  BOOL v14; // r12d
  unsigned __int64 v15; // r13
  _QWORD *v16; // rax
  _QWORD *i; // rdi
  __int64 v18; // rbx
  _QWORD **v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rdx
  LONG *v23; // rbx
  KIRQL v24; // al
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  char v28; // cl
  __int64 v29; // [rsp+70h] [rbp+8h]
  unsigned __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  LONG *v31; // [rsp+80h] [rbp+18h]

  KeForceAttachProcess(a1, 0LL);
  SharedVm = MiGetSharedVm(a1 + 1280);
  v3 = *(unsigned __int16 *)(a1 + 1454);
  v4 = SharedVm;
  CurrentThread = KeGetCurrentThread();
  v31 = SharedVm;
  v29 = *(_QWORD *)(qword_14043A748 + 8 * v3);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7243694Du);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v8 = MiGetSharedVm(a1 + 1280);
    v9 = ExAcquireSpinLockExclusive(v8);
    v8[1] = 0;
    *(_BYTE *)(a1 + 1467) = HIBYTE(*(_DWORD *)(a1 + 1464)) | 0x60;
    MiUnlockWorkingSetExclusive(a1 + 1280, v9, v10, v11);
    v12 = 1LL;
    if ( dword_1405401D0 != 1 )
    {
      v13 = v29;
      v14 = 0;
      v15 = 0LL;
      if ( *(_DWORD *)(v29 + 1144) )
        v14 = SmStoreExistsForProcess();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 872, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 1u;
      v16 = *(_QWORD **)(a1 + 1576);
      i = 0LL;
      while ( v16 )
      {
        i = v16;
        v16 = (_QWORD *)*v16;
      }
      while ( i )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 5), 0LL);
        LOBYTE(CurrentThread[1].Queue) |= 0x80u;
        if ( MiIsVadEligibleForCommitRelease((__int64)i) )
        {
          v18 = MiCheckCommitReleaseFromVad(v13, a1, a1 + 1280, (__int64)i, v14, v7 + 4);
          MiUnlockVad((__int64)CurrentThread, (__int64)i);
          v15 += v18;
          v13 = v29;
        }
        else
        {
          MiUnlockVad((__int64)CurrentThread, (__int64)i);
        }
        v19 = (_QWORD **)i[1];
        v20 = i;
        if ( v19 )
        {
          v21 = *v19;
          for ( i = (_QWORD *)i[1]; v21; v21 = (_QWORD *)*v21 )
            i = v21;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v20 )
              break;
            v20 = i;
          }
        }
      }
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
      v12 = v15;
      _InterlockedExchange64((volatile __int64 *)(a1 + 1488), 0LL);
      if ( v14 )
      {
        SmQueryStoreCommitUsage(a1, &v30);
        v22 = ((v30 & 0xFFF) != 0) + (v30 >> 12);
        v30 = v22;
        if ( v15 <= v22 )
          v12 = 0LL;
        else
          v12 = v15 - v22;
      }
      if ( v12 )
        MiReturnCommit(v13, v12);
      v4 = v31;
    }
    v23 = MiGetSharedVm(a1 + 1280);
    v24 = ExAcquireSpinLockExclusive(v23);
    v23[1] = 0;
    v27 = HIBYTE(*(_DWORD *)(a1 + 1464));
    if ( v12 )
    {
      *((_QWORD *)v4 + 4) = v7;
      v28 = v27 & 0x9F | 0x40;
      *((_QWORD *)v4 + 1) = v12;
      v7 = 0LL;
    }
    else
    {
      v28 = v27 & 0x9F;
    }
    *(_BYTE *)(a1 + 1467) = v28;
    MiUnlockWorkingSetExclusive(a1 + 1280, v24, v25, v26);
    MiLogOutswappedProcessCommitRelease(a1, v12);
  }
  KeForceDetachProcess(0LL, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
