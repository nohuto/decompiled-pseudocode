/*
 * XREFs of ?RuntimeClassInitialize@CachedWindowArrangementViewLifetime@TabletModeViewManager@@QEAAJPEAV2@PEAUIWindowArrangementView@@@Z @ 0x180351708
 * Callers:
 *     ??$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV2@PEAUIWindowArrangementView@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVTabletModeViewManager@@$$QEAPEAUIWindowArrangementView@@@Z @ 0x180350684 (--$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::CachedWindowArrangementViewLifetime::RuntimeClassInitialize(
        TabletModeViewManager::CachedWindowArrangementViewLifetime *this,
        struct TabletModeViewManager *a2,
        struct IWindowArrangementView *a3)
{
  struct TabletModeViewManager *v5; // rcx
  struct IWindowArrangementView *v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = (struct TabletModeViewManager *)*((_QWORD *)this + 2);
  if ( v5 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct TabletModeViewManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = (struct TabletModeViewManager *)*((_QWORD *)this + 2);
    }
    *((_QWORD *)this + 2) = a2;
    if ( v5 )
      (*(void (__fastcall **)(struct TabletModeViewManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( *((struct IWindowArrangementView **)this + 3) != a3 )
  {
    v8 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v8 = (struct IWindowArrangementView *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  return 0LL;
}
