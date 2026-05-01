/*
 * XREFs of ?GetIids@CScreenClippingExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B5550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CScreenClippingExperienceManager::GetIids(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveMonitorNotification,ILightDismissNotification,IImmersiveSessionIdleNotification,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::GetIids(a1 - 16);
}
