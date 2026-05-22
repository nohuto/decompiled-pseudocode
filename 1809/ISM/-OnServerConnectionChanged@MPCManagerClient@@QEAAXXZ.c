/*
 * XREFs of ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ @ 0x1800DAD04
 * Callers:
 *     ?OnPeerDisconnected@MPCManagerClientConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z @ 0x1800E9370 (-OnPeerDisconnected@MPCManagerClientConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z.c)
 *     ?SetBootstrapProxy@MPCManagerClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x1800E9390 (-SetBootstrapProxy@MPCManagerClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800215B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$Make@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@@12@$$QEA_N@Z @ 0x1800DB620 (--$Make@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@_N@Details@WRL@Microsoft@@YA-AV.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_c09d78f4139b35a9209e2630d13b6f9e__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient_____ptr64_Windows::Internal::Input::MPCManager::ServerConnectionArgs_____ptr64___ @ 0x1800DBA14 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_c09d78f4139b35a9209e2630d13b6f9e__Wind.c)
 */

void __fastcall MPCManagerClient::OnServerConnectionChanged(MPCManagerClient *this)
{
  const char *v2; // r9
  __int64 v3; // rdi
  volatile signed __int32 **v4; // r14
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rcx
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  int v9; // esi
  __int128 v10; // [rsp+20h] [rbp-20h]
  __int128 v11; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  bool v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF
  MPCManagerClient *v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v13 = *(_QWORD *)(*((_QWORD *)this + 133) + 152LL) != 0LL;
  Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::ServerConnectionArgs,bool>(&v14, &v13);
  v3 = v14;
  if ( !v14 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x196,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v2);
    JUMPOUT(0x1800DAE0DLL);
  }
  v4 = (volatile signed __int32 **)((char *)this + 1144);
  v15 = this;
  v16 = v14;
  *(_QWORD *)&v10 = &v15;
  v5 = (RTL_SRWLOCK *)((char *)this + 1152);
  v6 = (RTL_SRWLOCK *)((char *)this + 1152);
  *((_QWORD *)&v10 + 1) = &v16;
  v7 = 0LL;
  AcquireSRWLockExclusive(v6);
  if ( *v4 )
  {
    v7 = *v4;
    do
      v8 = *((_DWORD *)v7 + 3);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange(v7 + 3, v8 + 1, v8) );
    v3 = v14;
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v7 )
  {
    v11 = v10;
    v9 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_c09d78f4139b35a9209e2630d13b6f9e__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient_____ptr64_Windows::Internal::Input::MPCManager::ServerConnectionArgs_____ptr64___(
           &v11,
           v7,
           v4);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x198,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::Release(v3);
}
