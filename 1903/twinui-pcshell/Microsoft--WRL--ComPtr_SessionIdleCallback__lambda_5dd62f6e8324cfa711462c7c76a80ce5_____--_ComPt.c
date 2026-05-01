/*
 * XREFs of Microsoft::WRL::ComPtr_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____::_ComPtr_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____ @ 0x1804134C4
 * Callers:
 *     _DesktopSingleViewShellExperiencePersonality::RegisterSessionIdleDetector_::_1_::dtor$1 @ 0x18041390B (_DesktopSingleViewShellExperiencePersonality--RegisterSessionIdleDetector_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180121960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonito.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____::_ComPtr_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(result);
  }
  return result;
}
