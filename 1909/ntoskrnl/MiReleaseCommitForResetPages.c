/*
 * XREFs of MiReleaseCommitForResetPages @ 0x1402BBEB4
 * Callers:
 *     MmOutSwapProcess @ 0x1400746E0 (MmOutSwapProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140074010 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     KeForceDetachProcess @ 0x1400CBE04 (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x1400CBE6C (KeForceAttachProcess.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402BB080 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402BB3C0 (MiLogResetPagesCommitRelease.c)
 *     MiWalkResetCommitPages @ 0x1402BC454 (MiWalkResetCommitPages.c)
 */

LONG __fastcall MiReleaseCommitForResetPages(ULONG_PTR a1)
{
  LONG *SharedVm; // rax
  struct _KTHREAD *CurrentThread; // rdi
  LONG *v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // rax
  _QWORD *i; // rbx
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdi
  LONG *v12; // rbx
  KIRQL v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KEVENT *v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx

  KeForceAttachProcess(a1, 0LL);
  SharedVm = MiGetSharedVm(a1 + 1280);
  CurrentThread = KeGetCurrentThread();
  v4 = SharedVm;
  v5 = *((_QWORD *)SharedVm + 4);
  if ( (*(_DWORD *)(v5 + 48) & 1) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 880, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    v6 = *(_QWORD **)(a1 + 1624);
    i = 0LL;
    while ( v6 )
    {
      i = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( i )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 5), 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      if ( MiIsVadEligibleForCommitRelease((__int64)i) )
        MiWalkResetCommitPages(i);
      MiUnlockVad((__int64)CurrentThread, (__int64)i);
      v8 = (_QWORD **)i[1];
      v9 = i;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v9 )
            break;
          v9 = i;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  }
  v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 1488), 0LL);
  if ( v11 )
    MiReturnCommit(*(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 1454)), v11);
  v12 = MiGetSharedVm(a1 + 1280);
  v13 = ExAcquireSpinLockExclusive(v12);
  v12[1] = 0;
  v17 = *(struct _KEVENT **)(v5 + 40);
  *(_QWORD *)(v5 + 40) = 0LL;
  v18 = *(_QWORD *)(v5 + 32);
  if ( v18 <= v11 )
    v19 = 0LL;
  else
    v19 = v18 - v11;
  *(_QWORD *)(v5 + 32) = v19;
  LOBYTE(v14) = v13;
  *((_QWORD *)v4 + 1) += v11;
  MiUnlockWorkingSetExclusive(a1 + 1280, v14, v15, v16);
  MiLogResetPagesCommitRelease();
  KeForceDetachProcess(0LL, 0);
  return KeSetEvent(v17, 0, 0);
}
