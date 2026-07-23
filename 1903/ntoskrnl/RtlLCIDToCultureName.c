/*
 * XREFs of RtlLCIDToCultureName @ 0x1408D4D20
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x14018E078 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x1406230F8 (PnpGetDevicePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x14072DF98 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140735FE8 (PnpSetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140765F14 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14076675C (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140862B14 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14094507C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140945820 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1409463EC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x140946844 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x1401264E0 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x1401778C4 (DownLevelLangIDToLanguageName.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = Lcid;
  if ( Lcid )
  {
    if ( String )
    {
      if ( Lcid != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, word_14050C1B0, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_14050C1B0);
          return 1;
        }
      }
    }
  }
  return v2;
}
