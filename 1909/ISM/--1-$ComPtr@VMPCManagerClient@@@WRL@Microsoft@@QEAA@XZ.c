/*
 * XREFs of ??1?$ComPtr@VMPCManagerClient@@@WRL@Microsoft@@QEAA@XZ @ 0x18010FAE4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCManagerClient_Windows::Internal::Input::MPCManager::IMPCManagerClient__::_1_::dtor$2 @ 0x18010F44D (_Microsoft--WRL--Details--MakeAndInitialize_MPCManagerClient_Windows--Internal--Inp_ea_18010F44D.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801138F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPC_ea_1801138F0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCManagerClient>::~ComPtr<MPCManagerClient>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(result);
  }
  return result;
}
