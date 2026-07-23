/*
 * XREFs of MiGetPageFileHigh @ 0x1400396F0
 * Callers:
 *     MiFreeReservationRun @ 0x1406BA134 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_14043B180 && (a1 & 0x10) == 0 )
    a1 &= ~qword_14043B180;
  return HIDWORD(a1);
}
