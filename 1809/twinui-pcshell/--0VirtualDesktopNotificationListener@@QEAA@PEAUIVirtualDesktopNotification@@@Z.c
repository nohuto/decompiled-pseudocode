/*
 * XREFs of ??0VirtualDesktopNotificationListener@@QEAA@PEAUIVirtualDesktopNotification@@@Z @ 0x180269340
 * Callers:
 *     ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x1802EBA54 (--0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ.c)
 *     ??0CSnapAssistViewHost@@QEAA@XZ @ 0x1802EF230 (--0CSnapAssistViewHost@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1802F06B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAllU.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x1802F3970 (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ??0SwitchItemFilteredCollection@@QEAA@XZ @ 0x1802F4BE8 (--0SwitchItemFilteredCollection@@QEAA@XZ.c)
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
