/*
 * XREFs of ?Unensure@CImmersiveApp@@UEAAXXZ @ 0x18016A0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::Unensure(CImmersiveApp *this)
{
  *((_BYTE *)this + 492) = 0;
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)((char *)this - 112));
}
