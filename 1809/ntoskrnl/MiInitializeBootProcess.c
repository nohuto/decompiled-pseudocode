/*
 * XREFs of MiInitializeBootProcess @ 0x1409DD13C
 * Callers:
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     MiSetPageTablePfnBuddy @ 0x14013D988 (MiSetPageTablePfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     MmInitializeProcessAddressSpace @ 0x1406798D8 (MmInitializeProcessAddressSpace.c)
 */

__int64 MiInitializeBootProcess()
{
  _KPROCESS *Process; // rdi
  _QWORD *v1; // rcx
  unsigned __int64 **v2; // rcx
  unsigned __int64 *v3; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !qword_1405401B8 )
    qword_1405401B8 = 0x100000LL;
  if ( !qword_1405401B0 )
    qword_1405401B0 = 0x2000LL;
  if ( !qword_1405401A8 )
    qword_1405401A8 = 0x10000LL;
  if ( !qword_1405401A0 )
    qword_1405401A0 = 4096LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)&Process[1].Spare2[23] = 50LL;
  *(_QWORD *)&Process[1].Spare2[63] = 450LL;
  v1 = (_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  *v1 = 0LL;
  MiSetPageTablePfnBuddy((__int64)v1, (__int64)Process, 0);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x40000u);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
  KeAcquireInStackQueuedSpinLock(&qword_14043AE80, &LockHandle);
  v2 = (unsigned __int64 **)qword_140439FF0;
  v3 = &Process[2].Affinity.Bitmap[1];
  if ( *(__int64 **)qword_140439FF0 != &qword_140439FE8 )
    __fastfail(3u);
  Process[2].Affinity.Bitmap[2] = qword_140439FF0;
  *v3 = (unsigned __int64)&qword_140439FE8;
  *v2 = v3;
  qword_140439FF0 = (__int64)&Process[2].Affinity.Bitmap[1];
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  v8 = 0;
  return MmInitializeProcessAddressSpace((ULONG_PTR)Process, 0LL, 0LL, &v8, 0);
}
