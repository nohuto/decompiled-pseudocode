/*
 * XREFs of MiDeleteZeroThreadContext @ 0x14018FB94
 * Callers:
 *     MiZeroPageThread @ 0x140185720 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x1401886D0 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x14018FB20 (MiZeroLargePageThread.c)
 *     MiInitializePartitionThreads @ 0x14088B0E4 (MiInitializePartitionThreads.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeleteUltraThreadContext @ 0x1400F92EC (MiDeleteUltraThreadContext.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     MiDecrementHugeContext @ 0x14018F900 (MiDecrementHugeContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteZeroThreadContext(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 210) )
  {
    v2 = *(_QWORD *)(a1 + 216);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( v2 )
    {
      KeAcquireInStackQueuedSpinLock(
        (PKSPIN_LOCK)(qword_1404681D0 + 1984LL * *(unsigned int *)(v2 + 184) + 1928),
        &LockHandle);
      MiDecrementHugeContext((_QWORD *)v2, a1);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
  }
  result = MiDeleteUltraThreadContext(a1 + 80);
  v4 = *(_QWORD *)(a1 + 224);
  if ( v4 )
  {
    result = *(unsigned int *)(v4 + 52);
    if ( (_DWORD)result )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 52), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return KeSignalGate(v4, 1u);
    }
  }
  return result;
}
