/*
 * XREFs of MiImportOptimizationVetosDriverRelocation @ 0x1409EFC14
 * Callers:
 *     MiHandleBootImage @ 0x1409EF61C (MiHandleBootImage.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x140154A88 (RtlIsImageFullyRetpolined.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x1409EFC90 (MiDoesDriverProvideImportsForDriver.c)
 */

__int64 __fastcall MiImportOptimizationVetosDriverRelocation(__int64 a1)
{
  unsigned int v2; // ebx

  if ( (KiSpeculationFeatures & 0x4000000) == 0 )
    return 0LL;
  v2 = 0;
  if ( (KiSpeculationFeatures & 0x2000000) != 0 && !(unsigned int)RtlIsImageFullyRetpolined(*(void **)(a1 + 48)) )
    return 0LL;
  if ( (unsigned int)MiDoesDriverProvideImportsForDriver(a1, qword_140A4F5B8) )
    return 1;
  else
    LOBYTE(v2) = (unsigned int)MiDoesDriverProvideImportsForDriver(a1, MxHalDataTableEntry) != 0;
  return v2;
}
