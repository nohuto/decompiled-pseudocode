/*
 * XREFs of MiImportOptimizationVetosDriverRelocation @ 0x1409ABEA0
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1401B6140 (RtlIsImageFullyRetpolined.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x1409F8100 (MiDoesDriverProvideImportsForDriver.c)
 */

__int64 __fastcall MiImportOptimizationVetosDriverRelocation(__int64 a1)
{
  unsigned int v2; // ebx

  if ( (KiSpeculationFeatures & 0x40000000000LL) == 0 )
    return 0LL;
  v2 = 0;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 && !(unsigned int)RtlIsImageFullyRetpolined(*(void **)(a1 + 48)) )
    return 0LL;
  if ( (unsigned int)MiDoesDriverProvideImportsForDriver(a1, qword_140A0B5B8) )
    return 1;
  else
    LOBYTE(v2) = (unsigned int)MiDoesDriverProvideImportsForDriver(a1, MxHalDataTableEntry) != 0;
  return v2;
}
