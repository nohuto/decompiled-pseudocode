/*
 * XREFs of ?SetViewInterfaces@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1803FBFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall VirtualDesktopWindowMoveManager::SetViewInterfaces(
        VirtualDesktopWindowMoveManager *this,
        struct IApplicationViewCollection *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a2);
  return 0LL;
}
