/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x1402BC304
 * Callers:
 *     MmOutSwapProcess @ 0x140074470 (MmOutSwapProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140073DA0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140073FB0 (MiUnlockVad.c)
 *     SmStoreExistsForProcess @ 0x14008AF04 (SmStoreExistsForProcess.c)
 *     KeForceDetachProcess @ 0x14008E81C (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x14008E884 (KeForceAttachProcess.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAD8C (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402BB320 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402BB570 (MiLogOutswappedProcessCommitRelease.c)
 *     SmQueryStoreCommitUsage @ 0x140323EE0 (SmQueryStoreCommitUsage.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  BOOL v15; // r12d
  unsigned __int64 v16; // r13
  _QWORD *v17; // rax
  _QWORD *i; // rdi
  __int64 v19; // rbx
  _QWORD **v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rdx
  LONG *v24; // rbx
  KIRQL v25; // al
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // ecx
  char v30; // cl
  __int64 v31; // [rsp+70h] [rbp+8h]
  unsigned __int64 v32; // [rsp+78h] [rbp+10h] BYREF
  LONG *v33; // [rsp+80h] [rbp+18h]

  KeForceAttachProcess(a1, 0LL);
  SharedVm = MiGetSharedVm(a1 + 1280);
  v3 = *(unsigned __int16 *)(a1 + 1454);
  v4 = SharedVm;
  CurrentThread = KeGetCurrentThread();
  v33 = SharedVm;
  v31 = *(_QWORD *)(qword_140466188 + 8 * v3);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7243694Du);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v8 = MiGetSharedVm(a1 + 1280);
    v9 = ExAcquireSpinLockExclusive(v8);
    v8[1] = 0;
    LOBYTE(v10) = v9;
    *(_BYTE *)(a1 + 1467) |= 0x60u;
    MiUnlockWorkingSetExclusive(a1 + 1280, v10, v11, v12);
    v13 = 1LL;
    if ( dword_1405711E0 != 1 )
    {
      v14 = v31;
      v15 = 0;
      v16 = 0LL;
      if ( *(_DWORD *)(v31 + 1144) )
        v15 = SmStoreExistsForProcess();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 880, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 1u;
      v17 = *(_QWORD **)(a1 + 1624);
      i = 0LL;
      while ( v17 )
      {
        i = v17;
        v17 = (_QWORD *)*v17;
      }
      while ( i )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 5), 0LL);
        LOBYTE(CurrentThread[1].Queue) |= 0x80u;
        if ( MiIsVadEligibleForCommitRelease((__int64)i) )
        {
          v19 = MiCheckCommitReleaseFromVad(v14, a1, a1 + 1280, (__int64)i, v15, v7 + 4);
          MiUnlockVad((__int64)CurrentThread, (__int64)i);
          v16 += v19;
          v14 = v31;
        }
        else
        {
          MiUnlockVad((__int64)CurrentThread, (__int64)i);
        }
        v20 = (_QWORD **)i[1];
        v21 = i;
        if ( v20 )
        {
          v22 = *v20;
          for ( i = (_QWORD *)i[1]; v22; v22 = (_QWORD *)*v22 )
            i = v22;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v21 )
              break;
            v21 = i;
          }
        }
      }
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
      v13 = v16;
      _InterlockedExchange64((volatile __int64 *)(a1 + 1488), 0LL);
      if ( v15 )
      {
        SmQueryStoreCommitUsage(a1, &v32);
        v23 = ((v32 & 0xFFF) != 0) + (v32 >> 12);
        v32 = v23;
        if ( v16 <= v23 )
          v13 = 0LL;
        else
          v13 = v16 - v23;
      }
      if ( v13 )
        MiReturnCommit(v14, v13);
      v4 = v33;
    }
    v24 = MiGetSharedVm(a1 + 1280);
    v25 = ExAcquireSpinLockExclusive(v24);
    v24[1] = 0;
    LOBYTE(v28) = v25;
    v29 = *(_DWORD *)(a1 + 1464);
    if ( v13 )
    {
      *((_QWORD *)v4 + 4) = v7;
      v30 = HIBYTE(v29) & 0x9F | 0x40;
      *((_QWORD *)v4 + 1) = v13;
      v7 = 0LL;
    }
    else
    {
      v30 = HIBYTE(v29) & 0x9F;
    }
    *(_BYTE *)(a1 + 1467) = v30;
    MiUnlockWorkingSetExclusive(a1 + 1280, v28, v26, v27);
    MiLogOutswappedProcessCommitRelease(a1, v13);
  }
  KeForceDetachProcess(0LL, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
