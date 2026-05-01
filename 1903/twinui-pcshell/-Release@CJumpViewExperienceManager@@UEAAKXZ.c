/*
 * XREFs of ?Release@CJumpViewExperienceManager@@UEAAKXZ @ 0x180080730
 * Callers:
 *     ?Release@CJumpViewExperienceManager@@W7EAAKXZ @ 0x1800B52F0 (-Release@CJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WBA@EAAKXZ @ 0x1800B5300 (-Release@CJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WBI@EAAKXZ @ 0x1800B5310 (-Release@CJumpViewExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WCA@EAAKXZ @ 0x1800B5320 (-Release@CJumpViewExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WCI@EAAKXZ @ 0x1800B5330 (-Release@CJumpViewExperienceManager@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CJumpViewExperienceManager::Release(CJumpViewExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::Release(this);
}
