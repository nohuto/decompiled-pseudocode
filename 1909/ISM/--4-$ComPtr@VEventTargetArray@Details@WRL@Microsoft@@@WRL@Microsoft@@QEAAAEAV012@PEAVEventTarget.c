/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18010FD24
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____ @ 0x18010EEEC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Wind.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_68c34cd287e5a2a74578b99ce0d07767__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCConstantManagerClient___Windows::Internal::Input::MPCManager::ConstantChangedEventArgs_____ @ 0x180116E6C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_68c34cd287e5a2a74578b99ce0d07767__Wind.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationCompletedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180066F9C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        __int64 *a1,
        volatile int *a2)
{
  volatile int *v3; // r10
  __int64 v4; // rcx

  v3 = a2;
  v4 = *a1;
  if ( (volatile int *)v4 != a2 )
  {
    if ( a2 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs *>>::InternalAddRef(
        (__int64)a2,
        a2);
      v4 = *a1;
    }
    *a1 = (__int64)v3;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4, a2);
  }
  return a1;
}
