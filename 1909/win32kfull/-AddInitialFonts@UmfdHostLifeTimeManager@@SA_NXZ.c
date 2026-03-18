/*
 * XREFs of ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011C740
 * Callers:
 *     NtGdiAddInitialFonts @ 0x1C011C6E0 (NtGdiAddInitialFonts.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0087E34 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C008B414 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     UserOnGreTextReady @ 0x1C011C848 (UserOnGreTextReady.c)
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C011C9D4 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     FinishStockFontInit @ 0x1C0140790 (FinishStockFontInit.c)
 */

char UmfdHostLifeTimeManager::AddInitialFonts(void)
{
  NTSTATUS v0; // eax
  bool v1; // di
  __int64 HDEV; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  bool v7; // bl
  __int64 v9; // [rsp+20h] [rbp-38h]
  char v10; // [rsp+60h] [rbp+8h] BYREF

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
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v10, ghsemDynamicModeChange);
    LODWORD(HDEV) = *(_DWORD *)(HDEV + 2180);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v10);
    FinishStockFontInit(HDEV);
    if ( !gppfeMapperDefault )
    {
      v9 = 0LL;
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 13LL);
    }
    UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 1;
    KeSetEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    v7 = (unsigned int)UserOnGreTextReady(v4, v3, v5, v6, v9) != 0 && v1;
    KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    return v7;
  }
}
