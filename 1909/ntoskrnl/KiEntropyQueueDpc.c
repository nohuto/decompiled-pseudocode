/*
 * XREFs of KiEntropyQueueDpc @ 0x140131990
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401C5BB0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401C5D90 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401C5EE0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401C6030 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x1401C9FF0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401CA150 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 25576, 0LL, 0LL, 0LL, 0);
  return result;
}
