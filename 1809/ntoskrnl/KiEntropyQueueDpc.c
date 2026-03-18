/*
 * XREFs of KiEntropyQueueDpc @ 0x14012F480
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401BD5C0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401BD7A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BD8F0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401BDA40 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x1401C27C0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C2920 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 25576, 0LL, 0LL, 0LL, 0);
  return result;
}
