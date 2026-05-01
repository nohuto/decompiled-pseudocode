/*
 * XREFs of ?Ensure@CImmersiveApp@@UEAAXXZ @ 0x18011B510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::Ensure(CImmersiveApp *this)
{
  *((_BYTE *)this + 460) = 1;
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)((char *)this - 112));
}
