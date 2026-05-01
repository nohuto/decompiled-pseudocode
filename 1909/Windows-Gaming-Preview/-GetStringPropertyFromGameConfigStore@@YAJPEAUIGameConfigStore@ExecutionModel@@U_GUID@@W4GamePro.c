/*
 * XREFs of ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180015CBC
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000AA24 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800277B8 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027D64 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028078 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002837C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     _lambda_672229d4a162f24ea0e3de44dcc55a21_::operator() @ 0x180029450 (_lambda_672229d4a162f24ea0e3de44dcc55a21_--operator().c)
 *     ?get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x18002AF40 (-get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4Game.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002B0D0 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x1800377D4 (-GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038004 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1800187BC (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetStringPropertyFromGameConfigStore(__int64 a1, __int128 *a2, __int64 a3, HSTRING *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v10; // eax
  const char *v11; // r9
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64); // rax
  int v14; // eax
  WCHAR *v15; // rcx
  const struct std::nothrow_t *v16; // rdx
  HRESULT String; // eax
  WCHAR *v18; // rcx
  const struct std::nothrow_t *v19; // rdx
  WCHAR *v20; // rcx
  const struct std::nothrow_t *v21; // rdx
  unsigned int v22; // [rsp+30h] [rbp-58h]
  __int128 v23; // [rsp+40h] [rbp-48h] BYREF
  PCNZWCH sourceString[2]; // [rsp+50h] [rbp-38h]
  __int64 v25; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v27; // [rsp+90h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v7 = 203LL;
LABEL_3:
    v8 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !a4 )
  {
    v7 = 204LL;
    goto LABEL_3;
  }
  v27 = 0;
  v23 = *a2;
  v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, int *))(*(_QWORD *)a1 + 64LL))(
          a1,
          &v23,
          a3,
          0LL,
          &v27);
  v8 = v10;
  if ( (_WORD)v10 == 2 )
    return 0LL;
  if ( v10 < 0 )
  {
    v7 = 218LL;
    goto LABEL_4;
  }
  *(_OWORD *)sourceString = 0LL;
  v25 = 0LL;
  try
  {
    std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___();
    v23 = *a2;
    v11 = (const char *)sourceString[0];
    v12 = a1;
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  }
  catch ( ... )
  {
    v22 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0xE3,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            v11);
    v20 = (WCHAR *)sourceString[0];
    if ( sourceString[0] )
    {
      v21 = (const struct std::nothrow_t *)(v25 - (unsigned __int64)sourceString[0]);
      if ( v25 - (unsigned __int64)sourceString[0] >= 0x1000 )
      {
        v21 = (const struct std::nothrow_t *)((char *)v21 + 39);
        v20 = (WCHAR *)*((_QWORD *)sourceString[0] - 1);
        if ( (unsigned __int64)((char *)sourceString[0] - (char *)v20 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v20, v21);
          __debugbreak();
        }
      }
      operator delete(v20, v21);
    }
    return v22;
  }
  v14 = v13(v12);
  v8 = v14;
  if ( v14 >= 0 )
  {
    String = WindowsCreateString(sourceString[0], (unsigned int)v27 >> 1, a4);
    v8 = String;
    if ( String >= 0 )
    {
      v18 = (WCHAR *)sourceString[0];
      if ( sourceString[0] )
      {
        v19 = (const struct std::nothrow_t *)(v25 - (unsigned __int64)sourceString[0]);
        if ( v25 - (unsigned __int64)sourceString[0] >= 0x1000 )
        {
          v19 = (const struct std::nothrow_t *)((char *)v19 + 39);
          v18 = (WCHAR *)*((_QWORD *)sourceString[0] - 1);
          if ( (unsigned __int64)((char *)sourceString[0] - (char *)v18 - 8) > 0x1F )
          {
            _o__invalid_parameter_noinfo_noreturn(v18, v19);
            __debugbreak();
          }
        }
        operator delete(v18, v19);
      }
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)String);
    v15 = (WCHAR *)sourceString[0];
    if ( !sourceString[0] )
      return v8;
    v16 = (const struct std::nothrow_t *)(v25 - (unsigned __int64)sourceString[0]);
    if ( v25 - (unsigned __int64)sourceString[0] >= 0x1000 )
    {
      v16 = (const struct std::nothrow_t *)((char *)v16 + 39);
      v15 = (WCHAR *)*((_QWORD *)sourceString[0] - 1);
      if ( (unsigned __int64)((char *)sourceString[0] - (char *)v15 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v15, v16);
        __debugbreak();
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v14);
    v15 = (WCHAR *)sourceString[0];
    if ( !sourceString[0] )
      return v8;
    v16 = (const struct std::nothrow_t *)(v25 - (unsigned __int64)sourceString[0]);
    if ( v25 - (unsigned __int64)sourceString[0] >= 0x1000 )
    {
      v16 = (const struct std::nothrow_t *)((char *)v16 + 39);
      v15 = (WCHAR *)*((_QWORD *)sourceString[0] - 1);
      if ( (unsigned __int64)((char *)sourceString[0] - (char *)v15 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v15, v16);
        __debugbreak();
      }
    }
  }
  operator delete(v15, v16);
  return v8;
}
