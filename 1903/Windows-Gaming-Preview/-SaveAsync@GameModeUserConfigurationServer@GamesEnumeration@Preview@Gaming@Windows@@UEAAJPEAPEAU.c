/*
 * XREFs of ?SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18003A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002E9C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18002FF58 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800431E4 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::SaveAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  volatile signed __int64 *v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rsi
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer **v12; // rax
  int v13; // esi
  _DWORD v15[6]; // [rsp+30h] [rbp-20h] BYREF
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer *v16; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( this )
  {
    v4 = *((_QWORD *)this + 7);
    while ( v4 >= 0 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v4 + 1, v4);
      if ( v5 == v4 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v4 + 16));
  }
LABEL_6:
  v16 = this;
  v6 = (volatile signed __int64 *)this;
  if ( this )
  {
    v7 = *((_QWORD *)this + 7);
    while ( v7 >= 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
LABEL_11:
    v6 = (volatile signed __int64 *)v16;
  }
  v15[2] = 0;
  v15[0] = 3;
  v15[1] = 128;
  v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v9;
  if ( v9 )
  {
    v9[1] = this;
    v12 = (Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer **)(v9 + 2);
    *v12 = 0LL;
    if ( v12 != &v16 )
    {
      *v12 = this;
      v6 = 0LL;
    }
    *((_DWORD *)v11 + 6) = 0;
    *v11 = &off_18004B770;
    `eh vector constructor iterator'(
      v11 + 4,
      8uLL,
      1uLL,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
    *((_DWORD *)v11 + 6) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  v13 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
          (__int64)v15,
          a2,
          v10,
          (void (__fastcall ***)(_QWORD, __int64))v11);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release(v6);
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v13);
  if ( this )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)this);
  return (unsigned int)v13;
}
