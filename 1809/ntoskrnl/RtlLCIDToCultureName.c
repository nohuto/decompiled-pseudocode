/*
 * XREFs of RtlLCIDToCultureName @ 0x140897850
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x140182900 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x1405879C8 (PnpGetDevicePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x140708478 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14070B698 (PnpSetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14073F6A0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14073FCF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14082982C (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140907CD8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140908450 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140908FF8 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x140909448 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x140161130 (DownLevelLangIDToLanguageName.c)
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
        if ( (int)DownLevelLangIDToLanguageName(v4, word_1404DFBB0, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_1404DFBB0);
          return 1;
        }
      }
    }
  }
  return v2;
}
