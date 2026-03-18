/*
 * XREFs of MmQueryCommitReleaseState @ 0x140131454
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiPrepareAttachThread @ 0x1400C212C (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1400C76B0 (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x1400CBE04 (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x1400CBE6C (KeForceAttachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

_QWORD *__fastcall MmQueryCommitReleaseState(ULONG_PTR a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v6; // rsi
  LONG *SharedVm; // rax
  int v8; // ecx
  int v9; // ebx
  LONG *v10; // r15
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // r13
  char v14; // cl
  _QWORD *result; // rax
  unsigned __int8 OldIrql; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v18; // al
  int v19; // [rsp+20h] [rbp-71h]
  int v20; // [rsp+24h] [rbp-6Dh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v26[48]; // [rsp+68h] [rbp-29h] BYREF

  memset(v26, 0, sizeof(v26));
  v6 = a1 + 1280;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm(a1 + 1280);
  v8 = *(_DWORD *)(a1 + 1464);
  v9 = 0;
  v10 = SharedVm;
  HIBYTE(v19) = HIBYTE(v8);
  v11 = 0LL;
  v12 = *((_QWORD *)SharedVm + 1);
  v13 = 0LL;
  if ( dword_1405711E0 == 1 )
  {
    v14 = HIBYTE(v8);
    v12 = 0LL;
  }
  else
  {
    if ( (HIBYTE(v8) & 0x60) == 0x40 )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v20 = MiPrepareAttachThread(a1, a1 + 1280);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      if ( v20 )
      {
        KeForceAttachProcess(a1, (__int64)v26);
        v18 = MiLockWorkingSetShared(v6);
        v19 = *(_DWORD *)(v6 + 184);
        if ( (HIBYTE(v19) & 0x60) == 0x40 )
        {
          v13 = *((_QWORD *)v10 + 2);
          v11 = *(_QWORD *)(*((_QWORD *)v10 + 4) + 32LL);
        }
        MiUnlockWorkingSetShared(v6, v18);
        KeForceDetachProcess(v26, 0);
        MiAttachThreadDone(v6);
      }
    }
    v14 = HIBYTE(v19);
    if ( (HIBYTE(v19) & 0x60u) < 0x40 )
      v12 = 0LL;
  }
  LOBYTE(v9) = (v14 & 0x60u) >= 0x20;
  *a2 = v9;
  *a3 = v12;
  *a4 = v11;
  result = a5;
  *a5 = v13;
  return result;
}
