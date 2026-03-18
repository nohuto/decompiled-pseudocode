/*
 * XREFs of MiGetPageFileHigh @ 0x1400BDF68
 * Callers:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiFreeReservationRun @ 0x140633CE8 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140465800 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140465800;
  return HIDWORD(a1);
}
