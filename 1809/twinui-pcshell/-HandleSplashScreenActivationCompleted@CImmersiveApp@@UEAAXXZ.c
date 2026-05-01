/*
 * XREFs of ?HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ @ 0x18011D000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::HandleSplashScreenActivationCompleted(CImmersiveApp *this)
{
  CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)((char *)this - 112));
}
