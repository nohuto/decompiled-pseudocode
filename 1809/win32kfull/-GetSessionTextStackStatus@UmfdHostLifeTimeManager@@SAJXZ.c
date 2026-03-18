/*
 * XREFs of ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C0024378
 * Callers:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C002431C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreEnableEUDC @ 0x1C00C3D7C (GreEnableEUDC.c)
 *     GreEudcLoadLinkW @ 0x1C027BD1C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C027BF94 (GreEudcUnloadLinkW.c)
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
