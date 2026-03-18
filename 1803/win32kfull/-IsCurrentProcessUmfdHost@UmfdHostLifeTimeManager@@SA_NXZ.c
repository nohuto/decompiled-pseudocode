/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0081584
 * Callers:
 *     FinishStockFontInit @ 0x1C0055700 (FinishStockFontInit.c)
 *     GreIsCurrentProcessSystemCritical @ 0x1C007F300 (GreIsCurrentProcessSystemCritical.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00814D8 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     NtGdiExtEscape @ 0x1C0081E90 (NtGdiExtEscape.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00815C8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

bool UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(void)
{
  bool IsCurrentProcessUmfdHostNoLock; // bl

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  IsCurrentProcessUmfdHostNoLock = UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock();
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return IsCurrentProcessUmfdHostNoLock;
}
