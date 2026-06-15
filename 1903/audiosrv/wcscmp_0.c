/*
 * XREFs of wcscmp_0 @ 0x18006B8DF
 * Callers:
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180047790 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800504C0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18014414C (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     ?ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180144724 (-ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180144CBC (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *String1, const wchar_t *String2)
{
  return wcscmp(String1, String2);
}
