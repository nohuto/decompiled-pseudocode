/*
 * XREFs of ?CurrentVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180380400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::CurrentVirtualDesktopChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification<IVirtualDesktop,IVirtualDesktop>(
           a1 - 8,
           (__int64) IVirtualDesktopNotification::`vcall'{64,{flat}},
           a2,
           a3);
}
