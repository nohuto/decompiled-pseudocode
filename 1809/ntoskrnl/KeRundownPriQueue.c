/*
 * XREFs of KeRundownPriQueue @ 0x14029C2F0
 * Callers:
 *     ExpWorkQueueDestroy @ 0x1408D77D8 (ExpWorkQueueDestroy.c)
 * Callees:
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KeRundownQueueCommon @ 0x1400FAB20 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400FAD30 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeRundownPriQueue(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3);
  KeRundownQueueCommon(a1, (__int64 **)(a1 + 672), a1 + 536, 0x20u, 1);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(a1);
  return KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0, CurrentIrql);
}
