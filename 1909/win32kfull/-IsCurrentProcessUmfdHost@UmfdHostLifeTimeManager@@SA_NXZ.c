/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012397C
 * Callers:
 *     GreGetTextFaceW @ 0x1C00491C0 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     NtGdiExtEscape @ 0x1C0121B20 (NtGdiExtEscape.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01233D4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     DereferenceW32Thread @ 0x1C0123550 (DereferenceW32Thread.c)
 *     W32pProcessCallout @ 0x1C0123600 (W32pProcessCallout.c)
 *     W32pThreadCallout @ 0x1C0123880 (W32pThreadCallout.c)
 *     FinishStockFontInit @ 0x1C0140790 (FinishStockFontInit.c)
 *     GreTextInitialized @ 0x1C0166B18 (GreTextInitialized.c)
 * Callees:
 *     <none>
 */

bool UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  bool v4; // bl

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v4 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess(v1, v0, v2, v3);
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v4;
}
