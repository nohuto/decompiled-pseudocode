/*
 * XREFs of ?Create@MPCManagerClient@@SAJPEAPEAV1@@Z @ 0x1800DA1F0
 * Callers:
 *     ?ActivateInstance@MPCManagerClientFactory@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800DAE20 (-ActivateInstance@MPCManagerClientFactory@@UEAAJPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPCManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x1800DA5B4 (--0MPCManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x1800DB264 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DF110 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCM_ea_1800DF110.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall MPCManagerClient::Create(struct MPCManagerClient **a1)
{
  const char *v2; // r9
  char v3; // si
  struct MPCManagerClient *v4; // rdi
  int v5; // eax
  __int64 v6; // r8
  const char *v7; // r9
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  MPCManagerClient *v10; // rax
  struct MPCManagerClientConnection *v11; // rbx
  void (__fastcall ***v12)(_QWORD); // rax
  MPCManagerClient *v14; // [rsp+40h] [rbp-18h] BYREF
  int v15; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  __int64 v17; // [rsp+98h] [rbp+40h] BYREF
  struct MPCManagerClientConnection *v18; // [rsp+A0h] [rbp+48h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+A8h] [rbp+50h]

  EnterCriticalSection(&MPCManagerClient::s_creationLock);
  v19 = &MPCManagerClient::s_creationLock;
  if ( !a1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v2);
    goto LABEL_18;
  }
  *a1 = 0LL;
  v3 = 0;
  v4 = MPCManagerClient::s_instance;
  if ( MPCManagerClient::s_instance )
    goto LABEL_12;
  v17 = 0LL;
  v5 = CoreUICreate(&v17);
  v8 = retaddr;
  if ( v5 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::FailFast_Hr(
      v8,
      (void *)0x27,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  if ( !v17 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x28,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v7);
    __debugbreak();
  }
  v3 = 1;
  v15 = 1;
  v14 = 0LL;
  v18 = 0LL;
  v9 = Microsoft::Bamo::BaseBamoConnection::CreateClient<MPCManagerClientConnection>(v17, &v14, v6, &v18, -2LL);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x1800DA3D5LL);
  }
  v10 = (MPCManagerClient *)operator new(0x498uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v18;
  if ( v10 )
  {
    v14 = v10;
    v4 = MPCManagerClient::MPCManagerClient(v10, v18);
  }
  MPCManagerClient::s_instance = v4;
  if ( v11 )
  {
    v12 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct MPCManagerClientConnection *))(*(_QWORD *)v11 + 24LL))(v11);
    (**v12)(v12);
    v4 = MPCManagerClient::s_instance;
  }
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v4 = MPCManagerClient::s_instance;
  }
LABEL_12:
  if ( !v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v2);
    __debugbreak();
  }
  *a1 = v4;
  if ( !v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::AddRef(v4);
  LeaveCriticalSection(&MPCManagerClient::s_creationLock);
  return 0LL;
}
