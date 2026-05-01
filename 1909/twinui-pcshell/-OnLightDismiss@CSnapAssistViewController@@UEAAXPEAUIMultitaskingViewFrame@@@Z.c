/*
 * XREFs of ?OnLightDismiss@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x18037E3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSnapAssistViewController::OnLightDismiss(
        CSnapAssistViewController *this,
        struct IMultitaskingViewFrame *a2)
{
  CMultitaskingViewControllerBase::_AnimateDismissView((CSnapAssistViewController *)((char *)this - 8), 0LL);
}
