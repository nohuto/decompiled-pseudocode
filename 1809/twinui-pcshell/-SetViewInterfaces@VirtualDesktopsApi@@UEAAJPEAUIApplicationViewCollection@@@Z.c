/*
 * XREFs of ?SetViewInterfaces@VirtualDesktopsApi@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1803965C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall VirtualDesktopsApi::SetViewInterfaces(
        VirtualDesktopsApi *this,
        struct IApplicationViewCollection *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 11, (__int64)a2);
  return 0LL;
}
