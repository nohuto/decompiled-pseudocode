/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveMonitorNotification@@UILightDismissNotification@@UIImmersiveSessionIdleNotification@@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801CB360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveMonitorNotification@@UILightDismissNotification@@UIImmersiveSessionIdleNotification@@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801CAEA8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingExperien.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveMonitorNotification,ILightDismissNotification,IImmersiveSessionIdleNotification,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::`scalar deleting destructor'(
        void *a1,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveMonitorNotification,ILightDismissNotification,IImmersiveSessionIdleNotification,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveMonitorNotification,ILightDismissNotification,IImmersiveSessionIdleNotification,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
