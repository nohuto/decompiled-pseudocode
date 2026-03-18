/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00E7DBC
 * Callers:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C004EF74 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     NtGdiExtEscape @ 0x1C007CCD0 (NtGdiExtEscape.c)
 *     GreGetTextFaceW @ 0x1C00A83E0 (GreGetTextFaceW.c)
 *     FinishStockFontInit @ 0x1C00E6D90 (FinishStockFontInit.c)
 *     DereferenceW32Thread @ 0x1C00E7990 (DereferenceW32Thread.c)
 *     W32pProcessCallout @ 0x1C00E7A40 (W32pProcessCallout.c)
 *     W32pThreadCallout @ 0x1C00E7CC0 (W32pThreadCallout.c)
 *     GreTextInitialized @ 0x1C0165578 (GreTextInitialized.c)
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
