/*
 * XREFs of ?get_MPCConstantManagerClient@MPCManagerClient@@UEAAJPEAPEAUIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x1800DAA60
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VMPCConstantManagerClient@@PEAVMPCManagerClientConnection@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCConstantManagerClient@@@12@$$QEAPEAVMPCManagerClientConnection@@@Z @ 0x1800DB538 (--$Make@VMPCConstantManagerClient@@PEAVMPCManagerClientConnection@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DED30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManag.c)
 */

__int64 __fastcall MPCManagerClient::get_MPCConstantManagerClient(
        MPCManagerClient *this,
        struct Windows::Internal::Input::MPCManager::IMPCConstantManagerClient **a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 143);
  if ( !v4 )
  {
    v13 = *((_QWORD *)this + 130);
    v5 = (__int64 *)Microsoft::WRL::Details::Make<MPCConstantManagerClient,MPCManagerClientConnection *>(&v12, &v13);
    v7 = 0LL;
    if ( &v13 != v5 )
    {
      v7 = *v5;
      *v5 = 0LL;
    }
    v8 = *((_QWORD *)this + 143);
    *((_QWORD *)this + 143) = v7;
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(v8);
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(v9);
    }
    v4 = *((_QWORD *)this + 143);
    if ( !v4 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x149,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
        v6);
      JUMPOUT(0x1800DAB11LL);
    }
  }
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::QueryInterface(
           v4,
           &GUID_4e663a2d_1db5_4a2f_98d7_4ba9bf42d201,
           a2);
}
