/*
 * XREFs of MmQueryCommitReleaseState @ 0x140130A24
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     KeForceAttachProcess @ 0x14001674C (KeForceAttachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiPrepareAttachThread @ 0x1400EEABC (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1400EEB1C (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x140128044 (KeForceDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmQueryCommitReleaseState(ULONG_PTR a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rsi
  LONG *SharedVm; // rax
  _DWORD *v8; // rdx
  _QWORD *v9; // r8
  _QWORD *v10; // r9
  _QWORD *v11; // r10
  int v12; // ecx
  int v13; // ebx
  LONG *v14; // r15
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // r13
  char v18; // cl
  unsigned __int8 OldIrql; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v21; // al
  int v23; // [rsp+20h] [rbp-71h]
  int v24; // [rsp+24h] [rbp-6Dh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-41h] BYREF
  char v30[48]; // [rsp+68h] [rbp-29h] BYREF

  v5 = a1 + 1280;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm(a1 + 1280);
  v12 = *(_DWORD *)(v5 + 184);
  v13 = 0;
  v14 = SharedVm;
  HIBYTE(v23) = HIBYTE(v12);
  v15 = 0LL;
  v16 = *((_QWORD *)SharedVm + 1);
  v17 = 0LL;
  if ( dword_1405411D0 == 1 )
  {
    v18 = HIBYTE(v12);
    v16 = 0LL;
  }
  else
  {
    if ( (HIBYTE(v12) & 0x60) == 0x40 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
      v24 = MiPrepareAttachThread(a1, v5);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      if ( v24 )
      {
        KeForceAttachProcess(a1, (__int64)v30);
        v21 = MiLockWorkingSetShared(v5);
        v23 = *(_DWORD *)(v5 + 184);
        if ( (HIBYTE(v23) & 0x60) == 0x40 )
        {
          v17 = *((_QWORD *)v14 + 2);
          v15 = *(_QWORD *)(*((_QWORD *)v14 + 4) + 32LL);
        }
        MiUnlockWorkingSetShared(v5, v21);
        KeForceDetachProcess(v30, 0);
        MiAttachThreadDone(v5);
      }
      v11 = a5;
      v10 = a4;
      v9 = a3;
      v8 = a2;
    }
    v18 = HIBYTE(v23);
    LOBYTE(SharedVm) = HIBYTE(v23) & 0x60;
    if ( (HIBYTE(v23) & 0x60u) < 0x40 )
      v16 = 0LL;
  }
  LOBYTE(v13) = (v18 & 0x60u) >= 0x20;
  *v8 = v13;
  *v9 = v16;
  *v10 = v15;
  *v11 = v17;
  return (char)SharedVm;
}
