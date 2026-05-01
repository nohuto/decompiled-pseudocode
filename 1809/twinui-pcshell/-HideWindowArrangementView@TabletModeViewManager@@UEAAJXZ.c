/*
 * XREFs of ?HideWindowArrangementView@TabletModeViewManager@@UEAAJXZ @ 0x180351370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::HideWindowArrangementView(TabletModeViewManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  IUnknown *v4; // rcx

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  }
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  }
  v4 = (IUnknown *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    IUnknown_SetSite(v4, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  }
  return 0LL;
}
