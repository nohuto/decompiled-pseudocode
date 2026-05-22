/*
 * XREFs of ??1?$ComPtr@VMPCConstantManagerClient@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DAED4
 * Callers:
 *     _MPCManagerClient::MPCManagerClient_::_1_::dtor$8 @ 0x18013462A (_MPCManagerClient--MPCManagerClient_--_1_--dtor$8.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DED30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManag.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCConstantManagerClient>::~ComPtr<MPCConstantManagerClient>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(result);
  }
  return result;
}
