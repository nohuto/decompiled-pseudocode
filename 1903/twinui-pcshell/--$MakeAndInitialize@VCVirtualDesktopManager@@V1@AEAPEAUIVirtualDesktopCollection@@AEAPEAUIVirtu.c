/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803EAB80
 * Callers:
 *     ?CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803EB3C4 (-CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVis.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ @ 0x180248CF8 (-InternalRelease@-$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVirtualDesktopManager@@QEAA@XZ @ 0x1803EAF34 (--0CVirtualDesktopManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1803ECEF8 (-RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopManager,CVirtualDesktopManager,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopNotification * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopPersistence * &,IVirtualDesktopGroupedViewsPolicy * &,IVirtualDesktopLock * &>(
        volatile signed __int64 **a1,
        struct IVirtualDesktopCollection **a2,
        struct IVirtualDesktopVisibilityPolicy **a3,
        struct IVirtualDesktopNotification **a4,
        struct IVirtualDesktopForegroundPolicy **a5,
        struct IVirtualDesktopPersistence **a6,
        struct IVirtualDesktopGroupedViewsPolicy **a7,
        struct IVirtualDesktopLock **a8)
{
  CVirtualDesktopManager *v12; // rax
  int v13; // edi
  volatile signed __int64 *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  volatile signed __int64 *v18; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (CVirtualDesktopManager *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v14 = (volatile signed __int64 *)CVirtualDesktopManager::CVirtualDesktopManager(v12);
    v18 = v14;
    v13 = CVirtualDesktopManager::RuntimeClassInitialize(
            (CVirtualDesktopManager *)v14,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8);
    if ( v13 >= 0 )
    {
      if ( v14 )
      {
        v15 = *((_QWORD *)v14 + 9);
        while ( v15 >= 0 )
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange64(v14 + 9, v15 + 1, v15);
          if ( v16 == v15 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v15 + 16));
      }
LABEL_10:
      *a1 = v14;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<TitleBarController>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
