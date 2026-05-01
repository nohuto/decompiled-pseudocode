/*
 * XREFs of ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002837C
 * Callers:
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180028B90 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180028E10 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010910 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011B38 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180015C1C (-SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePrope.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180015CBC (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z @ 0x180015F4C (-GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z.c)
 *     ?_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@Wrappers@WRL@Microsoft@@0_N@Z @ 0x180028310 (-_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@W.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x180029904 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJPEBGPEAPEAUIStorageFile@Storage@5@@Z @ 0x180029A0C (-_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJP.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002B0D0 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002BDE4 (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18002BF68 (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 *     ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x180037708 (-GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGame.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x180037BE0 (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180037EF0 (-_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Win.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038004 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ??$_Buynode@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@1@@Z @ 0x180039BB4 (--$_Buynode@AEAU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@-$_T.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@@Z @ 0x180039C04 (--$_Insert_nohint@AEAU-$pair@$$CBU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_d.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct _GUID *a2,
        const struct ExecutionModel::GameConfig **a3,
        __int64 a4)
{
  const struct ExecutionModel::GameConfig *v6; // r15
  HSTRING *v7; // rbx
  __int64 v8; // rdx
  int PackageFamilyName; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **v12; // r13
  __int64 **v13; // r15
  _QWORD *v15; // rbx
  int v16; // eax
  char v17; // r12
  HSTRING v18; // rbx
  int LaunchParameters; // eax
  struct Windows::Storage::IStorageFile **v20; // r12
  int StringPropertyFromGameConfigStore; // eax
  int GamesListProperties; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  HSTRING v28; // rcx
  struct Windows::Storage::IStorageFile *v29; // rdx
  const unsigned __int16 *StringRawBuffer; // rax
  int StorageFileForFilePath; // eax
  int v32; // eax
  int v33; // eax
  wil::details::in1diag3 *v34; // rcx
  __int64 v35; // rdx
  __int64 *v36; // rcx
  struct Windows::Storage::IStorageFile *v37; // rcx
  int v38; // eax
  wil::details::in1diag3 *v39; // rcx
  __int64 v40; // rdx
  HSTRING v41; // rdi
  HSTRING v42; // rcx
  int v43; // eax
  wil::details::in1diag3 *v44; // rcx
  __int64 v45; // rdx
  __int64 *v46; // rcx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v47; // r15
  __int64 v48; // rax
  __int64 v49; // r8
  int PropertyValues; // eax
  __int64 v51; // r9
  __int64 v52; // rdx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v53; // rcx
  int v54; // eax
  char v55; // [rsp+30h] [rbp-50h]
  HSTRING string; // [rsp+38h] [rbp-48h] BYREF
  HSTRING v57[2]; // [rsp+40h] [rbp-40h] BYREF
  struct _GUID v58; // [rsp+50h] [rbp-30h] BYREF
  __int64 v59; // [rsp+60h] [rbp-20h]
  struct _GUID v60; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v64; // [rsp+D8h] [rbp+58h]

  v64 = a4;
  v59 = -2LL;
  v6 = *a3;
  v55 = 1;
  if ( *((_DWORD *)*a3 + 5) != 2 )
  {
    if ( *((_QWORD *)this + 20) )
    {
      v8 = 645LL;
      goto LABEL_18;
    }
    goto LABEL_12;
  }
  v7 = (HSTRING *)((char *)this + 160);
  if ( !*((_QWORD *)this + 20) )
  {
    v8 = 629LL;
LABEL_18:
    v10 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    goto LABEL_19;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  PackageFamilyName = GetPackageFamilyName(v6, &string);
  if ( PackageFamilyName < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x27A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)PackageFamilyName);
  if ( string )
  {
    if ( !Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AreStringsEqual(v7, &string, 1u) )
    {
      v10 = -2147024891;
      v11 = 641LL;
      goto LABEL_8;
    }
    WindowsDeleteString(string);
    a4 = v64;
LABEL_12:
    v12 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)((char *)this + 280);
    v13 = (__int64 **)((char *)this + 288);
    if ( *((_QWORD *)this + 35) && *v13 )
    {
      v58 = *a2;
      if ( Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(*v12, &v58) )
        return 0LL;
    }
    else
    {
      v55 = 0;
      std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=((char *)this + 288, a4);
    }
    v15 = (_QWORD *)((char *)this + 152);
    v58 = *a2;
    if ( *((_QWORD *)this + 19) )
    {
      v16 = SetStringPropertyToGameConfigStore(*v13, (__int128 *)&v58, 0xFu, (HSTRING *)this + 19);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2A7,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v16);
      goto LABEL_24;
    }
    WindowsDeleteString(0LL);
    *v15 = 0LL;
    if ( (int)GetStringPropertyFromGameConfigStore((__int64)*v13, (__int128 *)&v58, 15LL, (HSTRING *)this + 19) < 0
      || !*v15 )
    {
LABEL_24:
      v17 = v55;
      goto LABEL_25;
    }
    if ( !*((_QWORD *)this + 32) || !*((_QWORD *)this + 30) )
    {
LABEL_45:
      v17 = v55;
      if ( v55 )
      {
        v26 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
                *v12,
                15LL,
                (char *)this + 152);
        if ( v26 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2BE,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v26);
      }
LABEL_25:
      v18 = 0LL;
      *(_QWORD *)&v58.Data1 = 0LL;
      if ( v17 )
      {
        WindowsDeleteString(0LL);
        *(_QWORD *)&v58.Data1 = 0LL;
        LaunchParameters = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
                             (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)((char *)this + 16),
                             (HSTRING *)&v58);
        if ( LaunchParameters < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2C6,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)LaunchParameters);
        v18 = *(HSTRING *)&v58.Data1;
      }
      v20 = (struct Windows::Storage::IStorageFile **)((char *)this + 304);
      if ( *((_QWORD *)this + 38) )
      {
        if ( !v18 )
        {
          v36 = *v13;
          v60 = *a2;
          v33 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, const WCHAR *, int))(*v36 + 72))(
                  v36,
                  &v60,
                  26LL,
                  &word_18004F470,
                  2);
          v34 = retaddr;
          if ( v33 >= 0 )
            goto LABEL_67;
          v35 = 729LL;
LABEL_66:
          wil::details::in1diag3::_Log_Hr(
            v34,
            (void *)v35,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v33);
LABEL_67:
          v57[0] = 0LL;
          v37 = *v20;
          if ( !*v20 )
            goto LABEL_78;
          string = 0LL;
          v38 = (**(__int64 (__fastcall ***)(struct Windows::Storage::IStorageFile *, GUID *, HSTRING *))v37)(
                  v37,
                  &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30,
                  &string);
          v39 = retaddr;
          if ( v38 >= 0 )
          {
            v41 = string;
            WindowsDeleteString(v57[0]);
            v57[0] = 0LL;
            v38 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v41 + 96LL))(v41, v57);
            v39 = retaddr;
            if ( v38 >= 0 )
              goto LABEL_73;
            v40 = 738LL;
          }
          else
          {
            v40 = 736LL;
          }
          wil::details::in1diag3::_Log_Hr(
            v39,
            (void *)v40,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v38);
LABEL_73:
          v42 = string;
          if ( string )
          {
            string = 0LL;
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v42 + 16LL))(v42);
          }
          if ( v57[0] )
          {
            v60 = *a2;
            v43 = SetStringPropertyToGameConfigStore(*v13, (__int128 *)&v60, 0x19u, v57);
            v44 = retaddr;
            if ( v43 >= 0 )
              goto LABEL_81;
            v45 = 748LL;
LABEL_80:
            wil::details::in1diag3::_Log_Hr(
              v44,
              (void *)v45,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v43);
            goto LABEL_81;
          }
LABEL_78:
          v46 = *v13;
          v60 = *a2;
          v43 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, const WCHAR *, int))(*v46 + 72))(
                  v46,
                  &v60,
                  25LL,
                  &word_18004F470,
                  2);
          v44 = retaddr;
          if ( v43 >= 0 )
            goto LABEL_81;
          v45 = 756LL;
          goto LABEL_80;
        }
      }
      else if ( !v18 )
      {
        if ( !v55 )
          goto LABEL_92;
        v57[0] = 0LL;
        v60 = *a2;
        WindowsDeleteString(0LL);
        v57[0] = 0LL;
        StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                              (__int64)*v13,
                                              (__int128 *)&v60,
                                              25LL,
                                              v57);
        v10 = StringPropertyFromGameConfigStore;
        if ( StringPropertyFromGameConfigStore < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2FF,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)StringPropertyFromGameConfigStore);
LABEL_50:
          WindowsDeleteString(v57[0]);
LABEL_89:
          WindowsDeleteString(v18);
          return v10;
        }
        string = 0LL;
        v60 = *a2;
        WindowsDeleteString(0LL);
        string = 0LL;
        v27 = GetStringPropertyFromGameConfigStore((__int64)*v13, (__int128 *)&v60, 26LL, &string);
        v10 = v27;
        if ( v27 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x306,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v27);
          WindowsDeleteString(string);
          string = 0LL;
          goto LABEL_50;
        }
        v28 = v57[0];
        if ( v57[0] || string )
        {
          v29 = *v20;
          if ( *v20 )
          {
            *v20 = 0LL;
            (*(void (__fastcall **)(struct Windows::Storage::IStorageFile *))(*(_QWORD *)v29 + 16LL))(v29);
            v28 = v57[0];
          }
          if ( v28 )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(v28, 0LL);
            StorageFileForFilePath = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath(
                                       StringRawBuffer,
                                       v20);
            if ( StorageFileForFilePath < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x30E,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)(unsigned int)StorageFileForFilePath);
          }
          v32 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
                  *v12,
                  (const struct Microsoft::WRL::Wrappers::HString *)v57,
                  (const struct Microsoft::WRL::Wrappers::HString *)&string);
          if ( v32 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x311,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v32);
        }
        WindowsDeleteString(string);
        string = 0LL;
LABEL_81:
        WindowsDeleteString(v57[0]);
        if ( v55 )
        {
          *(struct _GUID *)v57 = *a2;
          v47 = *v12;
          if ( (v57[0] || v57[1]) && *a3 && *((_QWORD *)v47 + 11) )
          {
            v48 = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Buynode<_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>(
                    (char *)v47 + 80,
                    v57);
            std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Insert_nohint<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>> &,std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *> *>(
              (char *)v47 + 80,
              &v60,
              v49,
              v48 + 32,
              v48);
            PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(v47);
            if ( PropertyValues < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x52,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
                (const char *)(unsigned int)PropertyValues);
LABEL_88:
            v10 = 0;
            goto LABEL_89;
          }
          v10 = -2147024809;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4E,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
            (const char *)0x80070057LL);
          v51 = 2147942487LL;
          v52 = 793LL;
LABEL_96:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v52,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)v51);
          goto LABEL_89;
        }
LABEL_92:
        v53 = *v12;
        if ( *v12 )
        {
          *v12 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v53);
        }
        v54 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,std::shared_ptr<ExecutionModel::IGameConfigStore> const &>(
                v12,
                a2,
                a3,
                v64);
        v10 = v54;
        if ( v54 >= 0 )
          goto LABEL_88;
        v51 = (unsigned int)v54;
        v52 = 801LL;
        goto LABEL_96;
      }
      v60 = *a2;
      v33 = SetStringPropertyToGameConfigStore(*v13, (__int128 *)&v60, 0x1Au, (HSTRING *)&v58);
      v34 = retaddr;
      if ( v33 >= 0 )
        goto LABEL_67;
      v35 = 722LL;
      goto LABEL_66;
    }
    *(_QWORD *)&v58.Data1 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            this,
                            (struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **)&v58);
    v23 = retaddr;
    if ( GamesListProperties >= 0 )
    {
      GamesListProperties = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v58.Data1 + 72LL))(
                              *(_QWORD *)&v58.Data1,
                              *v15);
      v23 = retaddr;
      if ( GamesListProperties >= 0 )
        goto LABEL_43;
      v24 = 696LL;
    }
    else
    {
      v24 = 694LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v23,
      (void *)v24,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
LABEL_43:
    v25 = *(_QWORD *)&v58.Data1;
    if ( *(_QWORD *)&v58.Data1 )
    {
      *(_QWORD *)&v58.Data1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_45;
  }
  v10 = -2147024809;
  v11 = 636LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v10);
  WindowsDeleteString(string);
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x290,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v10);
  return v10;
}
