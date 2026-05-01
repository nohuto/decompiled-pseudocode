/*
 * XREFs of ?Shutdown@TabletModeInputHandler@@UEAAXXZ @ 0x1803E7500
 * Callers:
 *     ?RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@@Z @ 0x1803E73A8 (-RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall TabletModeInputHandler::Shutdown(TabletModeInputHandler *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  DestroyWindow(*((HWND *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
}
