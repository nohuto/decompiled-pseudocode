/*
 * XREFs of ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C002431C
 * Callers:
 *     GreGetCharSet @ 0x1C00241A4 (GreGetCharSet.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0082F1C (GreGetOutlineTextMetricsInternalW.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008FE00 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     xxxLW_LoadFonts @ 0x1C00C2CF0 (xxxLW_LoadFonts.c)
 *     NtGdiAddFontResourceW @ 0x1C010C100 (NtGdiAddFontResourceW.c)
 *     GreWaitForTextReady @ 0x1C01373B0 (GreWaitForTextReady.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C026F614 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C02915F0 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C0024378 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008CC74 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

NTSTATUS UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(void)
{
  NTSTATUS result; // eax

  result = UmfdHostLifeTimeManager::GetSessionTextStackStatus();
  if ( result == 259 )
  {
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
    {
      return KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) == 0 ? 0x103 : 0;
    }
    if ( !(unsigned int)UserIsUserCritSecIn() )
    {
      result = KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL);
      if ( result < 0 )
        return result;
      if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
      {
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        return 0;
      }
    }
    return -1073741595;
  }
  return result;
}
