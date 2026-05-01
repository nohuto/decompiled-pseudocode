/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopThumbnailWindowFilter@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18036BCE0
 * Callers:
 *     ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x18036BD10 (--0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180088EB0 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ??0?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@QEAA@XZ @ 0x1802E117C (--0-$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>(
        __int64 a1)
{
  __int64 result; // rax

  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  VirtualDesktopNotificationBase<IVirtualDesktopNotification>::VirtualDesktopNotificationBase<IVirtualDesktopNotification>((_QWORD *)(a1 + 8));
  result = a1;
  *(_DWORD *)(a1 + 20) = 1;
  return result;
}
