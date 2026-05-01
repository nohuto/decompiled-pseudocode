/*
 * XREFs of ??0VirtualDesktopNotificationListener@@QEAA@PEAUIVirtualDesktopNotification@@@Z @ 0x1802C2428
 * Callers:
 *     ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x18034C540 (--0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ.c)
 *     ??0CSnapAssistViewHost@@QEAA@XZ @ 0x18034FD20 (--0CSnapAssistViewHost@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1803511A0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAllU.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x180354490 (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ??0SwitchItemFilteredCollection@@QEAA@XZ @ 0x1803556E8 (--0SwitchItemFilteredCollection@@QEAA@XZ.c)
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
