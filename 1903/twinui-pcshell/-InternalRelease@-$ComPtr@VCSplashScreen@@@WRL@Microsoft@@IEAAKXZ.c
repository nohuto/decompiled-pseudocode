/*
 * XREFs of ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180146510
 * Callers:
 *     ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180015A3C (-OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ??1?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ @ 0x1801412D4 (--1-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ @ 0x18014163C (--1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::_scalar_deleting_destructor_ @ 0x180152950 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___--_scala.c)
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180152F70 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Act.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(volatile signed __int64 **a1)
{
  volatile signed __int64 *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
