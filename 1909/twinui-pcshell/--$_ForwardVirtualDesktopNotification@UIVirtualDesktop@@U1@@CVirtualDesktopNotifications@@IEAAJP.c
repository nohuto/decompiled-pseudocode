/*
 * XREFs of ??$_ForwardVirtualDesktopNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@Z00@Z @ 0x18040530C
 * Callers:
 *     ?CurrentVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180405A70 (-CurrentVirtualDesktopChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifi.c)
 *     ?VirtualDesktopDestroyBegin@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180405D30 (-VirtualDesktopDestroyBegin@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifica.c)
 *     ?VirtualDesktopDestroyFailed@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180405D50 (-VirtualDesktopDestroyFailed@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotific.c)
 *     ?VirtualDesktopDestroyed@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180405D70 (-VirtualDesktopDestroyed@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotificatio.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@2@Z @ 0x180405468 (--$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktop.c)
 */

__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification<IVirtualDesktop,IVirtualDesktop>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
  v9 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  return CVirtualDesktopNotifications::_QueueNotification<IVirtualDesktop,IVirtualDesktop>(a1, a2, &v9, &v8);
}
