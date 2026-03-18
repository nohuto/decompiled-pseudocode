/*
 * XREFs of KeRundownPriQueue @ 0x1402B33A0
 * Callers:
 *     ExpWorkQueueDestroy @ 0x140913868 (ExpWorkQueueDestroy.c)
 * Callees:
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KeRundownQueueCommon @ 0x1400E35B0 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400E39A4 (KiAcquireReleaseObjectRundownLockExclusive.c)
 */

__int64 __fastcall KeRundownPriQueue(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // di

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  KeRundownQueueCommon(a1, (_QWORD **)(a1 + 672), (_DWORD *)(a1 + 536), 0x20u, 1);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(a1);
  return KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
}
