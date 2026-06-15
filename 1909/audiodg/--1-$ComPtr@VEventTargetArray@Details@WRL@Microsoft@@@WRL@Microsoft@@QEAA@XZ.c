/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x140045760
 * Callers:
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_a85bab6ed30f25d4a586828200a843fd__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs______::_1_::dtor$0 @ 0x1400447F7 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_a85bab6ed30f25d4a586828200a843fd__Win.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140013CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(result);
  }
  return result;
}
