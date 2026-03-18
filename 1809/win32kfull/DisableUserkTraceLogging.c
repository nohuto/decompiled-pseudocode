/*
 * XREFs of DisableUserkTraceLogging @ 0x1C0133770
 * Callers:
 *     <none>
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C035572C (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  NTSTATUS result; // eax

  EtwUnregister(qword_1C030C4E0);
  qword_1C030C4E0 = 0LL;
  hProvider = 0;
  TlgUnregisterAggregateProvider();
  result = EtwUnregister(qword_1C030D360);
  qword_1C030D360 = 0LL;
  dword_1C030D340 = 0;
  return result;
}
