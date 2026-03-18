/*
 * XREFs of KiEntropyQueueDpc @ 0x140130E00
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401C5030 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401C5210 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401C5360 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401C54B0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x1401C9470 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C95D0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 25576, 0LL, 0LL, 0LL, 0);
  return result;
}
