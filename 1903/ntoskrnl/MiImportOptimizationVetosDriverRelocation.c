/*
 * XREFs of MiImportOptimizationVetosDriverRelocation @ 0x1409EFCFC
 * Callers:
 *     MiHandleBootImage @ 0x1409EF704 (MiHandleBootImage.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1401543E8 (RtlIsImageFullyRetpolined.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x1409EFD78 (MiDoesDriverProvideImportsForDriver.c)
 */

__int64 __fastcall MiImportOptimizationVetosDriverRelocation(__int64 a1)
{
  unsigned int v2; // ebx

  if ( (KiSpeculationFeatures & 0x4000000) == 0 )
    return 0LL;
  v2 = 0;
  if ( (KiSpeculationFeatures & 0x2000000) != 0 && !(unsigned int)RtlIsImageFullyRetpolined(*(void **)(a1 + 48)) )
    return 0LL;
  if ( (unsigned int)MiDoesDriverProvideImportsForDriver(a1, qword_140A505C0) )
    return 1;
  else
    LOBYTE(v2) = (unsigned int)MiDoesDriverProvideImportsForDriver(a1, MxHalDataTableEntry) != 0;
  return v2;
}
