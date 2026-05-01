/*
 * XREFs of ?SetApplicationView@CClassicWindow@@UEAAXPEAUIApplicationView@@@Z @ 0x1800675A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CClassicWindow::SetApplicationView(CClassicWindow *this, struct IApplicationView *a2)
{
  Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=((char *)this + 80, a2);
}
