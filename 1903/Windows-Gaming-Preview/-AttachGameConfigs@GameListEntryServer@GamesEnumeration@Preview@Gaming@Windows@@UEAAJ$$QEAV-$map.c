/*
 * XREFs of ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180028A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800107B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18001D414 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_del.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002824C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180028990 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002BD64 (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18002D7D0 (--0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037FCC (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfigs(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // r15
  __int64 v10; // rdx
  volatile signed __int64 *v11; // rcx
  char v12; // r13
  __int64 *v13; // rdi
  __int64 *v14; // rbx
  int v15; // eax
  int v16; // esi
  __int64 **v17; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v22; // rax
  __int64 v23; // rax
  volatile signed __int64 *v24; // rbx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int PropertyValues; // eax
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  struct _GUID v31; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !a2[1] )
  {
    v6 = -2147024809;
    v7 = 835LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !*a3 )
  {
    v6 = -2147467261;
    v7 = 836LL;
    goto LABEL_3;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v11 = *(volatile signed __int64 **)(a1 + 256);
  if ( v11 && *(_QWORD *)(a1 + 264) )
  {
    v12 = 1;
    v13 = (__int64 *)*a2;
    v14 = (__int64 *)*v13;
    while ( v14 != v13 )
    {
      v31 = (struct _GUID)*((_OWORD *)v14 + 2);
      v15 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(
              (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
              &v31,
              (const struct ExecutionModel::GameConfig **)v14 + 6,
              (__int64)a3);
      v16 = v15;
      v10 = 0LL;
      if ( v15 < 0 )
      {
        v20 = (unsigned int)v15;
        v21 = 862LL;
        goto LABEL_43;
      }
      v17 = (__int64 **)v14[2];
      if ( *((_BYTE *)v17 + 25) )
      {
        for ( i = (__int64 *)v14[1]; !*((_BYTE *)i + 25) && v14 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v14 = i;
        v14 = i;
      }
      else
      {
        v14 = (__int64 *)v14[2];
        for ( j = *v17; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v14 = j;
      }
    }
    goto LABEL_45;
  }
  v12 = 0;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 256) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v11);
  }
  *(_QWORD *)(a1 + 256) = 0LL;
  v22 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)operator new(
                                                                                     0xD0uLL,
                                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( !v22 )
  {
    v16 = -2147024882;
LABEL_42:
    v20 = (unsigned int)v16;
    v21 = 850LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v20);
    goto LABEL_46;
  }
  v23 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer(v22);
  v24 = (volatile signed __int64 *)v23;
  v25 = (__int64 *)(v23 + 80);
  if ( (__int64 *)(v23 + 80) != a2 )
  {
    std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::clear((_QWORD *)(v23 + 80));
    v26 = *v25;
    *v25 = *a2;
    *a2 = v26;
    v27 = v25[1];
    v25[1] = a2[1];
    a2[1] = v27;
  }
  std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=(v24 + 8, a3);
  PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues((Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)v24);
  v16 = PropertyValues;
  if ( PropertyValues >= 0 )
    v16 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)PropertyValues);
  if ( v16 >= 0 )
  {
    if ( v24 )
    {
      v29 = *((_QWORD *)v24 + 7);
      while ( v29 >= 0 )
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange64(v24 + 7, v29 + 1, v29);
        if ( v30 == v29 )
          goto LABEL_38;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v29 + 16));
    }
LABEL_38:
    *(_QWORD *)(a1 + 256) = v24;
    if ( v24 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v24);
    v16 = 0;
  }
  else if ( v24 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v24);
  }
  if ( v16 < 0 )
    goto LABEL_42;
  std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=(a1 + 264, a3);
LABEL_45:
  LOBYTE(v10) = v12;
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_ReinitializeAfterAttachingGameConfig(
    (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
    v10);
  v16 = 0;
LABEL_46:
  if ( v9 )
    LeaveCriticalSection(v9);
  return (unsigned int)v16;
}
