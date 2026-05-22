/*
 * XREFs of ?ActivateInstance@MPCManagerClientFactory@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800DAE20
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@MPCManagerClient@@SAJPEAPEAV1@@Z @ 0x1800DA1F0 (-Create@MPCManagerClient@@SAJPEAPEAV1@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE070 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800DE070.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DF050 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPC_ea_1800DF050.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCManagerClientFactory::ActivateInstance(MPCManagerClientFactory *this, struct IInspectable **a2)
{
  int v3; // eax
  struct IInspectable **v4; // r8
  struct MPCManagerClient *v5; // rbx
  int Interface; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct MPCManagerClient *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = MPCManagerClient::Create(&v9);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800DAEA9LL);
  }
  v4 = a2;
  v5 = v9;
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::QueryInterface(
                v9,
                &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                v4);
  if ( Interface < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)Interface);
    __debugbreak();
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(v5);
  return 0LL;
}
