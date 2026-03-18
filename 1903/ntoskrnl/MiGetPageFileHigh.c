/*
 * XREFs of MiGetPageFileHigh @ 0x1400DE0E8
 * Callers:
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiFreeReservationRun @ 0x14062FE68 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140465B00 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140465B00;
  return HIDWORD(a1);
}
