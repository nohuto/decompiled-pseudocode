/*
 * XREFs of ?OnChannelSever@ViewPresentationMediator@@UEAAXXZ @ 0x1802AA220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewPresentationMediator::OnChannelSever(ViewPresentationMediator *this, __int64 a2, __int64 a3)
{
  ViewPresentationMediator::EnableShellWindowManagementBehavior(
    (ViewPresentationMediator *)((char *)this - 128),
    a2,
    a3);
}
