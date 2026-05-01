/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopWindowMoveManager@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x180395768
 * Callers:
 *     ?VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x180395DBC (-VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0VirtualDesktopWindowMoveManager@@QEAA@XZ @ 0x18039581C (--0VirtualDesktopWindowMoveManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopWindowMoveManager@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x180395CA8 (-RuntimeClassInitialize@VirtualDesktopWindowMoveManager@@QEAAJPEAUIVirtualDesktopManagerPrivate@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopWindowMoveManager,VirtualDesktopWindowMoveManager,IVirtualDesktopManagerPrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopPinnedAppsPrivate * &>(
        VirtualDesktopWindowMoveManager **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopCollection **a3,
        struct IVirtualDesktopVisibilityPolicy **a4,
        struct IVirtualDesktopPinnedAppsPrivate **a5)
{
  VirtualDesktopWindowMoveManager *v9; // rax
  int v10; // edi
  VirtualDesktopWindowMoveManager *v11; // rbx
  struct IVirtualDesktopVisibilityPolicy *v12; // r9
  struct IVirtualDesktopCollection *v13; // r8
  VirtualDesktopWindowMoveManager *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (VirtualDesktopWindowMoveManager *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = VirtualDesktopWindowMoveManager::VirtualDesktopWindowMoveManager(v9);
    v12 = *a4;
    v13 = *a3;
    v15 = v11;
    v10 = VirtualDesktopWindowMoveManager::RuntimeClassInitialize(v11, *a2, v13, v12, *a5);
    if ( v10 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(VirtualDesktopWindowMoveManager *))(*(_QWORD *)v11 + 8LL))(v11);
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
