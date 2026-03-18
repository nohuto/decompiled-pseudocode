/*
 * XREFs of ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00814D8
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C004EBF0 (xxxLW_LoadFonts.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C007DA90 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C007EA60 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetCharSet @ 0x1C008138C (GreGetCharSet.c)
 *     NtGdiAddFontResourceW @ 0x1C00F0900 (NtGdiAddFontResourceW.c)
 *     GreWaitForTextReady @ 0x1C0113CB0 (GreWaitForTextReady.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C025BDB0 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C027E360 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0081584 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013D1C8 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
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
    else
    {
      if ( (unsigned int)UserIsUserCritSecIn() )
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
