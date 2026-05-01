/*
 * XREFs of ?Release@CJumpViewExperienceManager@@UEAAKXZ @ 0x18007D9C0
 * Callers:
 *     ?Release@CJumpViewExperienceManager@@W7EAAKXZ @ 0x18009F040 (-Release@CJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WBA@EAAKXZ @ 0x18009F050 (-Release@CJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WBI@EAAKXZ @ 0x18009F060 (-Release@CJumpViewExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WCA@EAAKXZ @ 0x18009F070 (-Release@CJumpViewExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WCI@EAAKXZ @ 0x18009F080 (-Release@CJumpViewExperienceManager@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CJumpViewExperienceManager::Release(CJumpViewExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::Release(this);
}
