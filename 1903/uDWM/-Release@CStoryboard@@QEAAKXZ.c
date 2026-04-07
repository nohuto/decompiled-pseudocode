/*
 * XREFs of ?Release@CStoryboard@@QEAAKXZ @ 0x1800091E0
 * Callers:
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x180005A00 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180005BF0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180005F30 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18000610C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180006C4C (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x180006F38 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180006F78 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000B580 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x18002FF04 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180031BF0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x18003D8A0 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A70AC (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800A7990 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800A79D0 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000B580 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

unsigned int __fastcall CStoryboard::Release(CStoryboard *this)
{
  if ( *((_DWORD *)this + 2) == 1 )
    CStoryboard::_Cleanup(this);
  return CBaseObject::Release(this);
}
