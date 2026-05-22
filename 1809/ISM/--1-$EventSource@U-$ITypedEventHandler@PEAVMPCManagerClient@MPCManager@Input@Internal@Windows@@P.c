/*
 * XREFs of ??1?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DA590
 * Callers:
 *     _MPCManagerClient::MPCManagerClient_::_1_::dtor$4 @ 0x1801345C6 (_MPCManagerClient--MPCManagerClient_--_1_--dtor$4.c)
 *     _MPCManagerClient::MPCManagerClient_::_1_::dtor$5 @ 0x1801345DF (_MPCManagerClient--MPCManagerClient_--_1_--dtor$5.c)
 *     _MPCManagerClient::MPCManagerClient_::_1_::dtor$6 @ 0x1801345F8 (_MPCManagerClient--MPCManagerClient_--_1_--dtor$6.c)
 *     _MPCManagerClient::MPCManagerClient_::_1_::dtor$7 @ 0x180134611 (_MPCManagerClient--MPCManagerClient_--_1_--dtor$7.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_c09d78f4139b35a9209e2630d13b6f9e__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient_____ptr64_Windows::Internal::Input::MPCManager::ServerConnectionArgs_____ptr64____::_1_::dtor$0 @ 0x180134678 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_c09d78f4139b35a9209e2630d13b6f9e__Win.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800215B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::ServerConnectionArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::ServerConnectionArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>(
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
