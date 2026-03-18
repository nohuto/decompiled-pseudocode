/*
 * XREFs of ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00E8764
 * Callers:
 *     NtGdiAddInitialFonts @ 0x1C00E9C70 (NtGdiAddInitialFonts.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0046A44 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     FinishStockFontInit @ 0x1C00E6D90 (FinishStockFontInit.c)
 *     UserOnGreTextReady @ 0x1C00E886C (UserOnGreTextReady.c)
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00E9374 (-bInitializeEUDCInternal@@YAHXZ.c)
 */

char UmfdHostLifeTimeManager::AddInitialFonts(void)
{
  NTSTATUS v0; // eax
  bool v1; // di
  __int64 HDEV; // rbx
  bool v3; // bl
  char v5; // [rsp+60h] [rbp+8h] BYREF

  if ( KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
    return 1;
  v0 = KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent, Executive, 1, 0, 0LL);
  if ( v0 < 0 || v0 == 192 )
  {
    KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    return 0;
  }
  else
  {
    v1 = (unsigned int)bInitializeEUDCInternal() != 0;
    HDEV = UserGetHDEV();
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v5, ghsemDynamicModeChange);
    LODWORD(HDEV) = *(_DWORD *)(HDEV + 2180);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v5);
    FinishStockFontInit(HDEV);
    if ( !gppfeMapperDefault )
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 13LL);
    UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 1;
    KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    v3 = (unsigned int)UserOnGreTextReady() != 0 && v1;
    KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    return v3;
  }
}
