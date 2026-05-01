/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804122D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopAcessibility::CurrentVirtualDesktopChanged(
        VirtualDesktopAcessibility *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  return VirtualDesktopAcessibility::RecalculateDesktopName(this);
}
