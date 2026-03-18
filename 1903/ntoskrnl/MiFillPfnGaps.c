/*
 * XREFs of MiFillPfnGaps @ 0x1409F4540
 * Callers:
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x140189088 (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x1409F4590 (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  __int64 v0; // rcx

  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_1404668A8) )
    return 0LL;
  MiFillGapAddresses(v0, 0xFFFFFD7FFFFFFFFFuLL, (int)&qword_1404668A8);
  return 1LL;
}
