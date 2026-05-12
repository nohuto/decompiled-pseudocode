/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C0051BB4
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C0020840 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C0075AA0 (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( qword_1C0061510 )
    ExFreePoolWithTag(qword_1C0061510, 0x65546152u);
  if ( qword_1C0061518 )
    ExFreePoolWithTag(qword_1C0061518, 0x65546152u);
  if ( qword_1C0061520 )
    ExFreePoolWithTag(qword_1C0061520, 0x65546152u);
  if ( qword_1C0061538 )
    ExFreePoolWithTag(qword_1C0061538, 0x65546152u);
  if ( qword_1C0061540 )
    ExFreePoolWithTag(qword_1C0061540, 0x65546152u);
  if ( qword_1C0061548 )
    ExFreePoolWithTag(qword_1C0061548, 0x65546152u);
  if ( qword_1C0061550 )
    ExFreePoolWithTag(qword_1C0061550, 0x65546152u);
}
