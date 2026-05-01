/*
 * XREFs of ?Ensure@CImmersiveApp@@UEAAXXZ @ 0x180143650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::Ensure(CImmersiveApp *this)
{
  *((_BYTE *)this + 492) = 1;
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)((char *)this - 112));
}
