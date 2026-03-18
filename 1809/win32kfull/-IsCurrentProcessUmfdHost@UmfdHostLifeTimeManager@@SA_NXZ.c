/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008CC74
 * Callers:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C002431C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreGetTextFaceW @ 0x1C0026ED0 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreIsCurrentProcessSystemCritical @ 0x1C008BD30 (GreIsCurrentProcessSystemCritical.c)
 *     NtGdiExtEscape @ 0x1C008BDD0 (NtGdiExtEscape.c)
 *     FinishStockFontInit @ 0x1C00C1820 (FinishStockFontInit.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C008CCC4 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008CD28 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

bool UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(void)
{
  bool IsCurrentProcessUmfdHostNoLock; // bl
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v2,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  IsCurrentProcessUmfdHostNoLock = UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock();
  if ( v2 )
  {
    GreReleasePushLockShared(v2);
    KeLeaveCriticalRegion();
  }
  return IsCurrentProcessUmfdHostNoLock;
}
