/*
 * XREFs of ??0VirtualDesktopNotificationListener@@QEAA@PEAUIVirtualDesktopNotification@@@Z @ 0x1802E1958
 * Callers:
 *     ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x18036BD10 (--0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ.c)
 *     ??0CSnapAssistViewHost@@QEAA@XZ @ 0x18036F4F0 (--0CSnapAssistViewHost@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@QEAA@XZ @ 0x180370970 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAllU.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x180373C80 (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ??0SwitchItemFilteredCollection@@QEAA@XZ @ 0x180374ED8 (--0SwitchItemFilteredCollection@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

VirtualDesktopNotificationListener *__fastcall VirtualDesktopNotificationListener::VirtualDesktopNotificationListener(
        VirtualDesktopNotificationListener *this,
        struct IVirtualDesktopNotification *a2)
{
  VirtualDesktopNotificationListener *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  result = this;
  *(_QWORD *)this = a2;
  return result;
}
