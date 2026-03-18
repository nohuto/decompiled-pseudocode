/*
 * XREFs of ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C004EF74
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0052A58 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetCharSet @ 0x1C005EB60 (GreGetCharSet.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C007CB9C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     xxxLW_LoadFonts @ 0x1C00E8A00 (xxxLW_LoadFonts.c)
 *     NtGdiAddFontResourceW @ 0x1C0114C70 (NtGdiAddFontResourceW.c)
 *     GreWaitForTextReady @ 0x1C0141C80 (GreWaitForTextReady.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C0287F14 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C02A71A0 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C004F048 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00E7DBC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

NTSTATUS UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(void)
{
  NTSTATUS result; // eax
  bool v1; // bl

  result = UmfdHostLifeTimeManager::GetSessionTextStackStatus();
  if ( result == 259 )
  {
    v1 = KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) != 0;
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
    {
      return !v1 ? 0x103 : 0;
    }
    else
    {
      if ( !v1 && (unsigned int)UserIsUserCritSecIn() )
        return -1073741595;
      result = KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL);
      if ( result >= 0 )
      {
        if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
          return -1073741595;
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        return 0;
      }
    }
  }
  return result;
}
