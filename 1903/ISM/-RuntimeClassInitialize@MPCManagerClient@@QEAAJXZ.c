/*
 * XREFs of ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x180113E80
 * Callers:
 *     ??$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x18010F5E0 (--$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180022244 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180022274 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x18010EDD4 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180113A10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPC_ea_180113A10.c)
 *     ??0MPCManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCManagerClient@@@Z @ 0x180115204 (--0MPCManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCManagerClient@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCManagerClient::RuntimeClassInitialize(MPCManagerClient *this)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 *v4; // rcx
  struct MPCManagerClientConnection **v5; // rdi
  Microsoft::Bamo::BaseBamoConnection *v6; // rax
  int v7; // eax
  MPCManagerClientPrincipal *v8; // rax
  __int64 v9; // rsi
  volatile signed __int64 *v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v16; // [rsp+58h] [rbp+10h] BYREF
  MPCManagerClientPrincipal *v17; // [rsp+60h] [rbp+18h]

  v16 = 0LL;
  v2 = CoreUICreate(&v16);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      26LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v4 = v16;
  if ( !v16 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      27LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)retaddr);
    __debugbreak();
  }
  DWORD2(v14) = 1;
  *(_QWORD *)&v14 = 0LL;
  v5 = (struct MPCManagerClientConnection **)((char *)this + 1648);
  v6 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 206);
  *((_QWORD *)this + 206) = 0LL;
  if ( v6 )
  {
    Microsoft::Bamo::BaseBamoConnection::Release(v6);
    v4 = v16;
  }
  v7 = Microsoft::Bamo::BaseBamoConnection::CreateClient<MPCManagerClientConnection>(v4, &v14, v3, (_QWORD *)this + 206);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v17 = (MPCManagerClientPrincipal *)operator new(0x40uLL);
  v8 = MPCManagerClientPrincipal::MPCManagerClientPrincipal(v17, *v5, this);
  v9 = *((_QWORD *)this + 205);
  *((_QWORD *)this + 205) = v8;
  if ( v8 )
    (**(void (__fastcall ***)(MPCManagerClientPrincipal *))v8)(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = (volatile signed __int64 *)*((_QWORD *)*v5 + 20);
  *((_QWORD *)*v5 + 20) = this;
  v11 = *((_QWORD *)this + 6);
  while ( v11 >= 0 )
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v11 + 1, v11);
    if ( v12 == v11 )
      goto LABEL_18;
  }
  _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_18:
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(v10);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v16);
  return 0LL;
}
