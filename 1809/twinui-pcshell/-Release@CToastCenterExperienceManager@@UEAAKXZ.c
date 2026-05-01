/*
 * XREFs of ?Release@CToastCenterExperienceManager@@UEAAKXZ @ 0x180075940
 * Callers:
 *     ?Release@VirtualDesktopDataSource@@W7EAAKXZ @ 0x18009EB50 (-Release@VirtualDesktopDataSource@@W7EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WBA@EAAKXZ @ 0x18009EB60 (-Release@CToastCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WBI@EAAKXZ @ 0x18009EB70 (-Release@CToastCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WCA@EAAKXZ @ 0x18009EB80 (-Release@CToastCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WCI@EAAKXZ @ 0x18009EB90 (-Release@CToastCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WDA@EAAKXZ @ 0x18009EBA0 (-Release@CToastCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WDI@EAAKXZ @ 0x18009EBB0 (-Release@CToastCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WEA@EAAKXZ @ 0x18009EBC0 (-Release@CToastCenterExperienceManager@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CToastCenterExperienceManager::Release(CToastCenterExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(this);
}
