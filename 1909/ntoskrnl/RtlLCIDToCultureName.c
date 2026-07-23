/*
 * XREFs of RtlLCIDToCultureName @ 0x1408D4620
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x14018E988 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x140626FA8 (PnpGetDevicePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x14072FE68 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140738248 (PnpSetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14076AA14 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14076B25C (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140862214 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140944AEC (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140945290 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140945E5C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1409462B4 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x140177FB4 (DownLevelLangIDToLanguageName.c)
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
        if ( (int)DownLevelLangIDToLanguageName(v4, word_14050BEF0, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_14050BEF0);
          return 1;
        }
      }
    }
  }
  return v2;
}
