/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C004FF80
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C001D680 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C0074CD0 (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( *(&P + 1) )
    ExFreePoolWithTag(*(&P + 1), 0x65546152u);
  if ( xmmword_1C0061438 )
    ExFreePoolWithTag(xmmword_1C0061438, 0x65546152u);
  if ( *(&xmmword_1C0061438 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C0061438 + 1), 0x65546152u);
  if ( qword_1C0061458 )
    ExFreePoolWithTag(qword_1C0061458, 0x65546152u);
  if ( qword_1C0061460 )
    ExFreePoolWithTag(qword_1C0061460, 0x65546152u);
  if ( qword_1C0061468 )
    ExFreePoolWithTag(qword_1C0061468, 0x65546152u);
  if ( qword_1C0061470 )
    ExFreePoolWithTag(qword_1C0061470, 0x65546152u);
}
