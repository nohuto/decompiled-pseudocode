/*
 * XREFs of ??$GetPtrAs@K@?$SP@EV?$SP_HLOCAL@E@@@@QEBAPEAKXZ @ 0x180019A84
 * Callers:
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180016B00 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180019B20 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SP<unsigned char,SP_HLOCAL<unsigned char>>::GetPtrAs<unsigned long>(__int64 a1)
{
  return *(_QWORD *)a1;
}
