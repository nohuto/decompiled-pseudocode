/*
 * XREFs of RtlLCIDToCultureName @ 0x140896610
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1401827A0 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x1405869C8 (PnpGetDevicePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x1407071F8 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14070A418 (PnpSetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14073E4D0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14073EB20 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14082864C (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140906A38 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1409071B0 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140907D58 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1409081A8 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x1401262B0 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x140161010 (DownLevelLangIDToLanguageName.c)
 */

char __fastcall RtlLCIDToCultureName(int a1, UNICODE_STRING *a2)
{
  char v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, word_1404DEAF0, 64, 2) > 0 )
        {
          RtlInitUnicodeString(a2, word_1404DEAF0);
          return 1;
        }
      }
    }
  }
  return v2;
}
