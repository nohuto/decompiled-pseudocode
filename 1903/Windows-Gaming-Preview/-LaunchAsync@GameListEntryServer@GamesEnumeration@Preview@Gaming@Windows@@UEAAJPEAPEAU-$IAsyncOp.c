/*
 * XREFs of ?LaunchAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x180029170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800116A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800116A0.c)
 *     ??0?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x180035C50 (--0-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800431E4 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::LaunchAsync(
        volatile signed __int64 *a1,
        __int64 *a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  volatile signed __int64 *v6; // r14
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  volatile signed __int64 **v11; // rax
  void *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // edi
  _DWORD v17[6]; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int64 *v18; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  if ( a1 )
  {
    v4 = *((_QWORD *)a1 + 17);
    while ( v4 >= 0 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(a1 + 17, v4 + 1, v4);
      if ( v5 == v4 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v4 + 16));
  }
LABEL_6:
  v18 = a1;
  v6 = a1;
  if ( a1 )
  {
    v7 = *((_QWORD *)a1 + 17);
    while ( v7 >= 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(a1 + 17, v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
LABEL_11:
    v6 = v18;
  }
  v17[2] = 0;
  v17[0] = 3;
  v17[1] = 128;
  v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    v9[1] = a1;
    v11 = (volatile signed __int64 **)(v9 + 2);
    *v11 = 0LL;
    if ( v11 != &v18 )
    {
      *v11 = a1;
      v6 = 0LL;
    }
    *((_DWORD *)v10 + 6) = 0;
    *v10 = &off_18004B198;
    `eh vector constructor iterator'(
      v10 + 4,
      8uLL,
      1uLL,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
    *((_DWORD *)v10 + 6) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  *a2 = 0LL;
  if ( !v10 )
    goto LABEL_25;
  v12 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v12
    || (v13 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
                v12,
                v17,
                L"Windows.Foundation.IAsyncOperation`1<Boolean>",
                0LL),
        (v14 = v13) == 0) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v10)(v10, 1LL);
LABEL_25:
    v15 = -2147024882;
    goto LABEL_26;
  }
  *(_QWORD *)(v13 + 256) = v10;
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 104LL))(v13 + 8);
  if ( v15 >= 0 )
  {
    *a2 = (v14 + 176) & -(__int64)(v14 != 0);
    v14 = 0LL;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 16LL))(v14 + 8);
LABEL_26:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v6);
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v15);
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(a1);
  return (unsigned int)v15;
}
