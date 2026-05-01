/*
 * XREFs of ??4ThumbnailData@MultitaskingViewAnimationCoordinatorBase@@QEAAAEAU01@AEBU01@@Z @ 0x180311844
 * Callers:
 *     ?GetVisualForWindow@MultitaskingViewAnimationCoordinatorBase@@UEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x180312910 (-GetVisualForWindow@MultitaskingViewAnimationCoordinatorBase@@UEAAJPEAUHWND__@@PEAPEAUIDCompThum.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 *__fastcall MultitaskingViewAnimationCoordinatorBase::ThumbnailData::operator=(__int64 *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(a1, a2);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(a1 + 1, a2 + 1);
  return a1;
}
