/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRemoveAnimationCoordinator@@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x180385A0C
 * Callers:
 *     ?VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVirtualDesktopMetrics@@HAEBU_GUID@@PEAPEAX@Z @ 0x180385F50 (-VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVi.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x18037B85C (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0VirtualDesktopRemoveAnimationCoordinator@@QEAA@XZ @ 0x180385AA8 (--0VirtualDesktopRemoveAnimationCoordinator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopRemoveAnimationCoordinator@@QEAAJAEBUVirtualDesktopMetrics@@HPEAUISwitchThumbnailFactory@@@Z @ 0x180385E3C (-RuntimeClassInitialize@VirtualDesktopRemoveAnimationCoordinator@@QEAAJAEBUVirtualDesktopMetrics.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopRemoveAnimationCoordinator,VirtualDesktopRemoveAnimationCoordinator,VirtualDesktopMetrics const &,int &,ISwitchThumbnailFactory * &>(
        VirtualDesktopRemoveAnimationCoordinator **a1,
        const struct VirtualDesktopMetrics *a2,
        int *a3,
        struct ISwitchThumbnailFactory **a4)
{
  VirtualDesktopRemoveAnimationCoordinator *v8; // rax
  int v9; // edi
  VirtualDesktopRemoveAnimationCoordinator *v10; // rax
  struct ISwitchThumbnailFactory *v11; // r9
  int v12; // r8d
  VirtualDesktopRemoveAnimationCoordinator *v13; // rbx
  VirtualDesktopRemoveAnimationCoordinator *v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (VirtualDesktopRemoveAnimationCoordinator *)operator new(0x2F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = VirtualDesktopRemoveAnimationCoordinator::VirtualDesktopRemoveAnimationCoordinator(v8);
    v11 = *a4;
    v12 = *a3;
    v13 = v10;
    v15 = v10;
    v9 = VirtualDesktopRemoveAnimationCoordinator::RuntimeClassInitialize(v10, a2, v12, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)v13 + 61);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
