/*
 * XREFs of ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180386184
 * Callers:
 *     ?DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1803862C0 (-DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback.c)
 *     ?_AnimateDismissView@CMultitaskingViewControllerBase@@IEAAXPEAUISwitchItem@@@Z @ 0x180386E3C (-_AnimateDismissView@CMultitaskingViewControllerBase@@IEAAXPEAUISwitchItem@@@Z.c)
 *     ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x180386FFC (-_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ.c)
 * Callees:
 *     ?_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ @ 0x180386EB4 (-_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(
        CMultitaskingViewControllerBase **this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)*this + 24, 0xFFFFFFFF) == 1 )
    CMultitaskingViewControllerBase::_CommitDismissView(*this);
}
