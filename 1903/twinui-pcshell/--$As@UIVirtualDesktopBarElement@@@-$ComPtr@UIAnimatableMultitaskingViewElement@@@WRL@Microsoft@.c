/*
 * XREFs of ??$As@UIVirtualDesktopBarElement@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopBarElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18035A5DC
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x18035B210 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ @ 0x18035D3E4 (-_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1803854A0 (-AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@Item.c)
 *     ?AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x180385C50 (-AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IVirtualDesktopBarElement>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_85b9f1f8_fde5_4c2f_852f_d7b23f7d3a96,
           a2);
}
