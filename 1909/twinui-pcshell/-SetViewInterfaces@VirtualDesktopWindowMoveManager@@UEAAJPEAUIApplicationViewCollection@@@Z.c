/*
 * XREFs of ?SetViewInterfaces@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x18041B670
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall VirtualDesktopWindowMoveManager::SetViewInterfaces(
        VirtualDesktopWindowMoveManager *this,
        struct IApplicationViewCollection *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a2);
  return 0LL;
}
