/*
 * XREFs of ?ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180028E20
 * Callers:
 *     _lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator() @ 0x18001C5F8 (_lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800107B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18001D414 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_del.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027520 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027C34 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::ExtractGameConfigsOwnership(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 *v11; // r15
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 **v15; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  volatile signed __int32 *v22; // rbx
  volatile signed __int64 *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  _OWORD v27[4]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v7 = *(_QWORD **)(a1 + 256);
  v8 = 0LL;
  if ( !v7 || !*(_QWORD *)(a1 + 264) )
  {
    v9 = -2147467259;
    v10 = 917LL;
    goto LABEL_34;
  }
  if ( *(_QWORD *)(a1 + 136) )
  {
    v9 = -2147024891;
    v10 = 920LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v9);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v9;
  }
  if ( !v7[11] )
  {
    v9 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)0x80004005LL);
    v10 = 924LL;
    goto LABEL_34;
  }
  v11 = v7 + 10;
  v12 = (__int64 *)v7[10];
  v13 = (__int64 *)*v12;
  while ( v13 != v12 )
  {
    v14 = v7[8];
    v27[0] = *((_OWORD *)v13 + 2);
    (*(void (__fastcall **)(__int64, _OWORD *, __int64, const WCHAR *, int))(*(_QWORD *)v14 + 72LL))(
      v14,
      v27,
      24LL,
      &word_18004F400,
      2);
    v15 = (__int64 **)v13[2];
    v8 = 0LL;
    if ( *((_BYTE *)v15 + 25) )
    {
      for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v13 = i;
      v13 = i;
    }
    else
    {
      v13 = (__int64 *)v13[2];
      for ( j = *v15; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v13 = j;
    }
  }
  if ( a2 != v11 )
  {
    std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::clear(a2);
    v18 = *a2;
    *a2 = *v11;
    *v11 = v18;
    v19 = a2[1];
    a2[1] = v7[11];
    v7[11] = v19;
  }
  v20 = v7[8];
  v21 = v7[9];
  v7[8] = 0LL;
  v7[9] = 0LL;
  *a3 = v20;
  v22 = (volatile signed __int32 *)a3[1];
  a3[1] = v21;
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v22)(v22, v8);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  v23 = *(volatile signed __int64 **)(a1 + 256);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 256) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v23);
  }
  v24 = *(_QWORD *)(a1 + 192);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 192) = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 16LL))(v24, v8);
  }
  if ( *(_QWORD *)(a1 + 232) && *(_QWORD *)(a1 + 216) )
  {
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory((Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24));
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeLaunchTarget(
      (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
      v25);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
