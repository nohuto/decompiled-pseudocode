/*
 * XREFs of ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C004EA98
 * Callers:
 *     NtGdiAddInitialFonts @ 0x1C004EA40 (NtGdiAddInitialFonts.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0020FB8 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C004F8E4 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     UserOnGreTextReady @ 0x1C0050168 (UserOnGreTextReady.c)
 *     FinishStockFontInit @ 0x1C0055700 (FinishStockFontInit.c)
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
    LODWORD(HDEV) = *(_DWORD *)(HDEV + 2172);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v5);
    FinishStockFontInit(HDEV);
    if ( !gppfeMapperDefault )
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 13LL);
    UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 1;
    KeSetEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    v3 = (unsigned int)UserOnGreTextReady() != 0 && v1;
    KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    return v3;
  }
}
