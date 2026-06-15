/*
 * XREFs of ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x180135D40
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180019B20 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x18001CF34 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18013AE24 (-ProcessSpatialAudioFormatElement@@YAJV-$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(HSTRING *string, PCWSTR sourceString)
{
  if ( WindowsCreateStringReference(sourceString, 5u, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
