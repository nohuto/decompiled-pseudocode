/*
 * XREFs of ?IsViewFullScreen@TabletModeViewManager@@AEAA_NPEAUIApplicationView@@@Z @ 0x180351538
 * Callers:
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1803515D0 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall TabletModeViewManager::IsViewFullScreen(IUnknown **this, struct IApplicationView *a2)
{
  bool v3; // di
  int v6; // [rsp+30h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         this[2],
         (const GUID *const)&SID_FullScreenManager,
         &GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d,
         &ppvOut) >= 0
    && (*(int (__fastcall **)(void *, struct IApplicationView *, int *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, a2, &v6) >= 0 )
  {
    v3 = v6 != 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v3;
}
