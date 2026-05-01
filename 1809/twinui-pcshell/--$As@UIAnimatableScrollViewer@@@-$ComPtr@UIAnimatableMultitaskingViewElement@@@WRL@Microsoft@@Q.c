/*
 * XREFs of ??$As@UIAnimatableScrollViewer@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x18031ACAC
 * Callers:
 *     ?AnimatePositionChanged@SwitchItemCloseAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x18031B160 (-AnimatePositionChanged@SwitchItemCloseAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAn.c)
 *     ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x180324F20 (-AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@Item.c)
 *     ?AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1803256D0 (-AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IAnimatableScrollViewer>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_c9465035_5fb8_4b34_818f_fcfe7bd7b95c,
           a2);
}
