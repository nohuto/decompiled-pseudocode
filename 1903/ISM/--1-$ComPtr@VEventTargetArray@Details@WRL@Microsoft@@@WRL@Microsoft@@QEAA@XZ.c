/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18010FCD0
 * Callers:
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureEventArgs______::_1_::dtor$0 @ 0x18010F288 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_68c34cd287e5a2a74578b99ce0d07767__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCConstantManagerClient___Windows::Internal::Input::MPCManager::ConstantChangedEventArgs______::_1_::dtor$0 @ 0x1801170A8 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_68c34cd287e5a2a74578b99ce0d07767__Win.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(result);
  }
  return result;
}
