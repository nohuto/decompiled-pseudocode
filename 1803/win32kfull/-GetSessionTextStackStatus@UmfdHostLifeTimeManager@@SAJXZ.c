/*
 * XREFs of ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013D1C8
 * Callers:
 *     GreEnableEUDC @ 0x1C004FB8C (GreEnableEUDC.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00814D8 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreGetTextFaceW @ 0x1C00834B0 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreEudcLoadLinkW @ 0x1C0267E84 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C02680CC (GreEudcUnloadLinkW.c)
 * Callees:
 *     <none>
 */

__int64 UmfdHostLifeTimeManager::GetSessionTextStackStatus(void)
{
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
    || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    return 3221225701LL;
  }
  if ( KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    && KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    return 0LL;
  }
  return 259LL;
}
