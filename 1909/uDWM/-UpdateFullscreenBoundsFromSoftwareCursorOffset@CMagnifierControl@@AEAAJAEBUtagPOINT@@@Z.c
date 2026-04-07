/*
 * XREFs of ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@@Z @ 0x180085174
 * Callers:
 *     ?OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z @ 0x180084E70 (-OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x18008066C (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800B52E4 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN@Z.c)
 */

__int64 __fastcall CMagnifierControl::UpdateFullscreenBoundsFromSoftwareCursorOffset(
        CMagnifierControl *this,
        const struct tagPOINT *a2)
{
  struct tagPOINT v5; // [rsp+40h] [rbp+18h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService();
  MagnifierExperienceHelper::GetFullScreenMagnifierOffset(
    *((MagnifierExperienceHelper **)this + 22),
    &v5,
    (const double *)a2);
  CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
    *((CFullScreenMagnifier **)this + 8),
    *((double *)this + 21),
    -v5.x,
    -v5.y);
  return 0LL;
}
