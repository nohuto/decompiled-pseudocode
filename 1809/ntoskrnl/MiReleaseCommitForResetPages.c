/*
 * XREFs of MiReleaseCommitForResetPages @ 0x1402A4FB4
 * Callers:
 *     KiOutSwapProcesses @ 0x14010B4D0 (KiOutSwapProcesses.c)
 * Callees:
 *     KeForceAttachProcess @ 0x14001674C (KeForceAttachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeForceDetachProcess @ 0x140128044 (KeForceDetachProcess.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402A4120 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402A4470 (MiLogResetPagesCommitRelease.c)
 *     MiWalkResetCommitPages @ 0x1402A5550 (MiWalkResetCommitPages.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KEVENT *v16; // rbx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx

  KeForceAttachProcess(a1, 0LL);
  SharedVm = MiGetSharedVm(a1 + 1280);
  CurrentThread = KeGetCurrentThread();
  v4 = SharedVm;
  v5 = *((_QWORD *)SharedVm + 4);
  if ( (*(_DWORD *)(v5 + 48) & 1) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 872, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    v6 = *(_QWORD **)(a1 + 1576);
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
    MiReturnCommit(*(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 1454)), v11);
  v12 = MiGetSharedVm(a1 + 1280);
  v13 = ExAcquireSpinLockExclusive(v12);
  v12[1] = 0;
  v16 = *(struct _KEVENT **)(v5 + 40);
  *(_QWORD *)(v5 + 40) = 0LL;
  v17 = *(_QWORD *)(v5 + 32);
  if ( v17 <= v11 )
    v18 = 0LL;
  else
    v18 = v17 - v11;
  *(_QWORD *)(v5 + 32) = v18;
  *((_QWORD *)v4 + 1) += v11;
  MiUnlockWorkingSetExclusive(a1 + 1280, v13, v14, v15);
  MiLogResetPagesCommitRelease();
  KeForceDetachProcess(0LL, 0);
  return KeSetEvent(v16, 0, 0);
}
