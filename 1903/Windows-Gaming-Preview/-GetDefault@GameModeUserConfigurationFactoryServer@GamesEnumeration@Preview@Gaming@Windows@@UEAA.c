/*
 * XREFs of ?GetDefault@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeUserConfiguration@2345@@Z @ 0x18003A860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180010714 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002E9C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003AF90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_18003AF90.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GetDefault(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // r14
  char *v5; // rax
  char *v6; // rdi
  int Interface; // ebx
  _QWORD *v8; // rbx
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v18 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v3 = (_QWORD *)((char *)this + 104);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( !*v3 )
  {
    *v3 = 0LL;
    v5 = (char *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( !v5 )
    {
      Interface = -2147024882;
LABEL_14:
      v12 = (unsigned int)Interface;
      v13 = 107LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)v12);
      if ( v2 )
        LeaveCriticalSection(v2);
      v15 = v18;
      goto LABEL_25;
    }
    v8 = v5 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 16));
    v9 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v6 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v6 + 7) = 1LL;
    if ( !v9 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v6 = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable';
    *((_QWORD *)v6 + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v6 + 64), 0, 0);
    *((_QWORD *)v6 + 13) = 0LL;
    *((_QWORD *)v6 + 14) = 0LL;
    v19 = 0LL;
    v10 = CreateGameConfigStoreClient(&v19);
    Interface = v10;
    if ( v10 >= 0 )
    {
      v11 = *((_QWORD *)v6 + 14);
      *((_QWORD *)v6 + 14) = v19;
      if ( v11 )
        FreeGameConfigStoreClient(v11);
      Interface = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::QueryInterface(
                    v6,
                    &GUID_72d34af4_756b_470f_a0c2_ba62a90795db,
                    v3);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v6);
    if ( Interface < 0 )
      goto LABEL_14;
  }
  if ( v18 )
    (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *))(*(_QWORD *)v18 + 16LL))(v18);
  v14 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **))*v3)(
          *v3,
          &GUID_72d34af4_756b_470f_a0c2_ba62a90795db,
          &v18);
  Interface = v14;
  if ( v14 < 0 )
  {
    v12 = (unsigned int)v14;
    v13 = 110LL;
    goto LABEL_19;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v15 = 0LL;
  *a2 = v18;
  Interface = 0;
LABEL_25:
  if ( v15 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)Interface;
}
