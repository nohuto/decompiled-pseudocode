/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C0051100
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C00220A0 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C0075BA0 (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( *(&P + 1) )
    ExFreePoolWithTag(*(&P + 1), 0x65546152u);
  if ( xmmword_1C0062438 )
    ExFreePoolWithTag(xmmword_1C0062438, 0x65546152u);
  if ( *(&xmmword_1C0062438 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C0062438 + 1), 0x65546152u);
  if ( qword_1C0062458 )
    ExFreePoolWithTag(qword_1C0062458, 0x65546152u);
  if ( qword_1C0062460 )
    ExFreePoolWithTag(qword_1C0062460, 0x65546152u);
  if ( qword_1C0062468 )
    ExFreePoolWithTag(qword_1C0062468, 0x65546152u);
  if ( qword_1C0062470 )
    ExFreePoolWithTag(qword_1C0062470, 0x65546152u);
}
