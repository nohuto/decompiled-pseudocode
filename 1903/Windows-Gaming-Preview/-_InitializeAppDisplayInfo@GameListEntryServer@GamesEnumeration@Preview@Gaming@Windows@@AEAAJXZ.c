/*
 * XREFs of ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027F48
 * Callers:
 *     ?get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x1800290A0 (-get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180010714 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180015A3C (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18001832C (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ??$MakeAndInitialize@VGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UIAppDisplayInfo@ApplicationModel@5@PEAUHSTRING__@@PEAU8@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIAppDisplayInfo@ApplicationModel@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@1@Z @ 0x18002C148 (--$MakeAndInitialize@VGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UI.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037140 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180037140.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_180037280.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180038D78 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int Interface; // edi
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 FirstGameConfig; // rsi
  __int64 v14; // rdx
  HRESULT v15; // eax
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HSTRING string; // [rsp+70h] [rbp+30h] BYREF
  HSTRING v20; // [rsp+78h] [rbp+38h] BYREF
  HSTRING v21; // [rsp+80h] [rbp+40h] BYREF
  HSTRING v22; // [rsp+88h] [rbp+48h] BYREF

  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    v4 = (_QWORD *)((char *)this + 208);
    v5 = *((_QWORD *)this + 26);
    if ( v5 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    *v4 = 0LL;
    v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( !v6 )
    {
      Interface = -2147024882;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23D,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)Interface);
      return Interface;
    }
    v9 = v6 + 2;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 2));
    v7[7] = 1LL;
    *v7 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable';
    v7[1] = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v9 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *v7 = &Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::`vftable';
    v7[1] = &Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::`vftable'{for `IWeakReferenceSource'};
    *v9 = &Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v7[8] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v10 = v7[8];
    v7[8] = v3;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                  v7,
                  &GUID_1aeb1103_e4d4_41aa_a4f6_c4a276e79eac,
                  v4);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::Release(v7);
    if ( (Interface & 0x80000000) != 0 )
      goto LABEL_12;
    return 0LL;
  }
  v12 = *((_QWORD *)this + 35);
  if ( v12 && *((_QWORD *)this + 36) )
  {
    LOBYTE(a2) = 1;
    FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                        v12,
                        a2);
    v14 = *(_QWORD *)(FirstGameConfig + 16);
    if ( *(_DWORD *)(v14 + 20) == 1 )
    {
      v20 = 0LL;
      v15 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&v20, (const WCHAR **)(v14 + 24));
      Interface = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x246,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v15);
LABEL_21:
        WindowsDeleteString(v20);
        return Interface;
      }
      string = 0LL;
      v17 = *(_OWORD *)FirstGameConfig;
      WindowsDeleteString(0LL);
      string = 0LL;
      GetStringPropertyFromGameConfigStore(*((_QWORD *)this + 36), &v17, 23LL, &string);
      v21 = v20;
      v22 = string;
      v16 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer,Windows::ApplicationModel::IAppDisplayInfo,HSTRING__ *,HSTRING__ *>(
              (char *)this + 208,
              &v22,
              &v21);
      Interface = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x252,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v16);
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_21;
      }
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v20);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x257,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
