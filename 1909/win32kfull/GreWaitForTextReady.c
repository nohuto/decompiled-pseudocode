/*
 * XREFs of GreWaitForTextReady @ 0x1C011C430
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01233D4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

__int64 GreWaitForTextReady()
{
  return UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization();
}
