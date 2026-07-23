/*
 * XREFs of KiEntropyQueueDpc @ 0x14012F570
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401BD740 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401BD920 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BDA70 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401BDBC0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x1401C2940 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C2AA0 (KiVmbusInterruptSubDispatch.c)
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
