/*
 * XREFs of ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180037D10
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800282D8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180028A00 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     _lambda_21b8fbba22a3d8e1beadf144030eed52_::operator() @ 0x18002B65C (_lambda_21b8fbba22a3d8e1beadf144030eed52_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180015C88 (-SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePrope.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3)
{
  __int64 *v3; // rdi
  __int64 *j; // rbx
  bool v8; // zf
  __int64 *v9; // rcx
  int v10; // esi
  __int64 v11; // rdx
  __int64 **v13; // rax
  __int64 *v14; // rcx
  __int64 *i; // rax
  __int128 v16[2]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(__int64 **)(a1 + 80);
  j = (__int64 *)*v3;
  while ( j != v3 )
  {
    v8 = *a3 == 0LL;
    v9 = *(__int64 **)(a1 + 64);
    v16[0] = *((_OWORD *)j + 2);
    if ( v8 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, const WCHAR *, int))(*v9 + 72))(
              v9,
              v16,
              a2,
              &word_18004F450,
              2);
      if ( v10 < 0 )
      {
        v11 = 301LL;
        goto LABEL_6;
      }
    }
    else
    {
      v10 = SetStringPropertyToGameConfigStore(v9, v16, a2, a3);
      if ( v10 < 0 )
      {
        v11 = 294LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
    }
    if ( !*((_BYTE *)j + 25) )
    {
      v13 = (__int64 **)j[2];
      if ( *((_BYTE *)v13 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v14 = *v13;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v14 + 25); v14 = (__int64 *)*v14 )
          j = v14;
      }
    }
  }
  return 0LL;
}
