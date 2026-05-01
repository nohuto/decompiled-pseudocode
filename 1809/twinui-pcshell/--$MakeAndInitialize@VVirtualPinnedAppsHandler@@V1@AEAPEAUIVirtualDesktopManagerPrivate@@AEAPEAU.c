/*
 * XREFs of ??$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualPinnedAppsHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180391600
 * Callers:
 *     ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180395618 (-VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0VirtualPinnedAppsHandler@@QEAA@XZ @ 0x1803916F0 (--0VirtualPinnedAppsHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18039267C (-RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIV.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualPinnedAppsHandler,VirtualPinnedAppsHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopRegistryHelpers * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopGroupedViewsPolicy * &,IVirtualDesktopLock * &>(
        VirtualPinnedAppsHandler **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopRegistryHelpers **a3,
        struct IVirtualDesktopVisibilityPolicy **a4,
        struct IVirtualDesktopGroupedViewsPolicy **a5,
        struct IVirtualDesktopLock **a6)
{
  VirtualPinnedAppsHandler *v10; // rax
  int v11; // edi
  VirtualPinnedAppsHandler *v12; // rbx
  VirtualPinnedAppsHandler *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (VirtualPinnedAppsHandler *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = VirtualPinnedAppsHandler::VirtualPinnedAppsHandler(v10);
    v14 = v12;
    v11 = VirtualPinnedAppsHandler::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
