/*
 * XREFs of MiFillPfnGaps @ 0x1409D1FD0
 * Callers:
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x140186B0C (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x1409D2020 (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  __int64 v0; // rcx

  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_14043AE28) )
    return 0LL;
  MiFillGapAddresses(v0, 0xFFFFFD7FFFFFFFFFuLL, (int)&qword_14043AE28);
  return 1LL;
}
