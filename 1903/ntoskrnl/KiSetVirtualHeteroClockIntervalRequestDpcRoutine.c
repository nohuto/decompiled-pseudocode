/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x1402B0750
 * Callers:
 *     <none>
 * Callees:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1402B065C (KiSetVirtualHeteroClockIntervalRequest.c)
 */

__int64 KiSetVirtualHeteroClockIntervalRequestDpcRoutine()
{
  return KiSetVirtualHeteroClockIntervalRequest(KiPendingVirtualHeteroRequest == 0);
}
