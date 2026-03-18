/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x1402B04B0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1402B03BC (KiSetVirtualHeteroClockIntervalRequest.c)
 */

__int64 KiSetVirtualHeteroClockIntervalRequestDpcRoutine()
{
  return KiSetVirtualHeteroClockIntervalRequest(KiPendingVirtualHeteroRequest == 0);
}
