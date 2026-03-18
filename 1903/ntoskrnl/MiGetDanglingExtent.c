/*
 * XREFs of MiGetDanglingExtent @ 0x1402CC1E8
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140888F00 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetDanglingExtent(_QWORD *a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // r14
  volatile signed __int32 *v14; // rbx
  unsigned __int64 v15; // rdi
  struct _KPRCB *v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  v3 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140469460, &LockHandle);
  do
  {
    v4 = qword_1404646E8;
    v5 = v3;
    v6 = v2;
    if ( !qword_1404646E8 )
      break;
    v7 = *(_QWORD *)qword_1404646E8;
    ++v2;
    qword_1404646E8 = *(_QWORD *)qword_1404646E8;
    v3 = v4;
    if ( v6 )
      v3 = v5;
  }
  while ( v7 == v4 - 48 );
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( !v2 )
    return -1LL;
  v11 = v3 - 48 * v2;
  v12 = v11 + 48;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( v12 <= v3 )
  {
    v14 = (volatile signed __int32 *)(v11 + 72);
    v15 = (v3 - v12) / 0x30 + 1;
    do
    {
      v18 = 0;
      while ( _interlockedbittestandset64(v14, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( *(__int64 *)v14 < 0 );
      }
      _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
      v14 += 12;
      --v15;
    }
    while ( v15 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v16);
  }
  __writecr8(CurrentIrql);
  *a1 = v2;
  return (__int64)(v11 + 0x58000000030LL) / 48;
}
