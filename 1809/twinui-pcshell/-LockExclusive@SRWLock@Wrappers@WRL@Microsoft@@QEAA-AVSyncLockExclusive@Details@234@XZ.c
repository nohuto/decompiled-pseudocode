/*
 * XREFs of ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800FCAC8
 * Callers:
 *     _lambda_0b76205be84400ecfc27954a2135cf03_::operator() @ 0x1800928A8 (_lambda_0b76205be84400ecfc27954a2135cf03_--operator().c)
 *     _lambda_ab0326ecea74eabee98d06838221c40f_::operator() @ 0x18009358C (_lambda_ab0326ecea74eabee98d06838221c40f_--operator().c)
 *     ?UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z @ 0x1802E39D0 (-UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z.c)
 *     ?SetGestureState@MultitaskingViewGestureState@@UEAAXW4GestureState@@@Z @ 0x1802E4F40 (-SetGestureState@MultitaskingViewGestureState@@UEAAXW4GestureState@@@Z.c)
 *     ?AppLayoutChanged@TabletModeCoverWindow@@UEAAJPEAUIAppLayout@@@Z @ 0x180362520 (-AppLayoutChanged@TabletModeCoverWindow@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180362B00 (-DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x180363084 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z @ 0x180363328 (-RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z.c)
 *     ?ShellTargetChanged@TabletModeCoverWindow@@UEAAJPEAUIApplicationView@@@Z @ 0x1803635A0 (-ShellTargetChanged@TabletModeCoverWindow@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180363600 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 */

RTL_SRWLOCK **__fastcall Microsoft::WRL::Wrappers::SRWLock::LockExclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a2, a1);
  return a2;
}
