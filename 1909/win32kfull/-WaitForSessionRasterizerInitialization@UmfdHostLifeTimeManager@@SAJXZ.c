/*
 * XREFs of ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01233D4
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C009C2B8 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetCharSet @ 0x1C00A8858 (GreGetCharSet.c)
 *     GreWaitForTextReady @ 0x1C011C430 (GreWaitForTextReady.c)
 *     xxxLW_LoadFonts @ 0x1C011D370 (xxxLW_LoadFonts.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C01219EC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     NtGdiAddFontResourceW @ 0x1C0125C30 (NtGdiAddFontResourceW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C0287884 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C02A6CF0 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01234A8 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012397C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
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
