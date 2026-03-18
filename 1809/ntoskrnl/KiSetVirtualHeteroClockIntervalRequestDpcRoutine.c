/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x140299640
 * Callers:
 *     <none>
 * Callees:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140299568 (KiSetVirtualHeteroClockIntervalRequest.c)
 */

__int64 KiSetVirtualHeteroClockIntervalRequestDpcRoutine()
{
  return KiSetVirtualHeteroClockIntervalRequest(KiPendingVirtualHeteroRequest == 0);
}
