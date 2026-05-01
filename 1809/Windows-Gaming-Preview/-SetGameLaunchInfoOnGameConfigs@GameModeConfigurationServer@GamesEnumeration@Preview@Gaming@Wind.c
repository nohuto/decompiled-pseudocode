/*
 * XREFs of ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x1800379F8
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800282D8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_9afbe6e87994f6867231074aca7528f3____Windows::Internal::CNoResult_::Run @ 0x1800301C0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_9afbe6e87994f68.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180015C88 (-SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePrope.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        HSTRING *a2,
        HSTRING *a3)
{
  __int64 *v3; // rdi
  __int64 *j; // rbx
  bool v8; // zf
  __int64 *v9; // rcx
  int v10; // esi
  __int64 v11; // rdx
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 *v15; // rcx
  __int64 *i; // rax
  __int128 v17[2]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (__int64 *)*((_QWORD *)this + 10);
  j = (__int64 *)*v3;
  while ( j != v3 )
  {
    v8 = *a3 == 0LL;
    v9 = (__int64 *)*((_QWORD *)this + 8);
    v17[0] = *((_OWORD *)j + 2);
    if ( v8 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(*v9 + 72))(
              v9,
              v17,
              26LL,
              &word_18004F450,
              2);
      if ( v10 < 0 )
      {
        v11 = 240LL;
        goto LABEL_6;
      }
    }
    else
    {
      v10 = SetStringPropertyToGameConfigStore(v9, v17, 0x1Au, a3);
      if ( v10 < 0 )
      {
        v11 = 233LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
    }
    v8 = *a2 == 0LL;
    v13 = (__int64 *)*((_QWORD *)this + 8);
    v17[0] = *((_OWORD *)j + 2);
    if ( v8 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(*v13 + 72))(
              v13,
              v17,
              25LL,
              &word_18004F450,
              2);
      if ( v10 < 0 )
      {
        v11 = 257LL;
        goto LABEL_6;
      }
    }
    else
    {
      v10 = SetStringPropertyToGameConfigStore(v13, v17, 0x19u, a2);
      if ( v10 < 0 )
      {
        v11 = 249LL;
        goto LABEL_6;
      }
    }
    if ( !*((_BYTE *)j + 25) )
    {
      v14 = (__int64 **)j[2];
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v15 = *v14;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v15 + 25); v15 = (__int64 *)*v15 )
          j = v15;
      }
    }
  }
  return 0LL;
}
