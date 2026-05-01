/*
 * XREFs of ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180015D28
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000AAA4 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027720 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027CC0 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027FD4 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800282D8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     _lambda_672229d4a162f24ea0e3de44dcc55a21_::operator() @ 0x180029384 (_lambda_672229d4a162f24ea0e3de44dcc55a21_--operator().c)
 *     ?get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x18002AE90 (-get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4Game.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002B020 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x180037614 (-GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037E30 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18001880C (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetStringPropertyFromGameConfigStore(__int64 a1, __int128 *a2, __int64 a3, HSTRING *a4)
{
  __int64 v7; // rdx
  unsigned int String; // ebx
  int v10; // eax
  const char *v11; // r9
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rdx
  WCHAR *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned int v17; // [rsp+30h] [rbp-58h]
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF
  PCNZWCH sourceString[2]; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v22; // [rsp+90h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v7 = 203LL;
LABEL_3:
    String = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)String);
    return String;
  }
  if ( !a4 )
  {
    v7 = 204LL;
    goto LABEL_3;
  }
  v22 = 0;
  v18 = *a2;
  v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, int *))(*(_QWORD *)a1 + 64LL))(
          a1,
          &v18,
          a3,
          0LL,
          &v22);
  String = v10;
  if ( (_WORD)v10 == 2 )
    return 0LL;
  if ( v10 < 0 )
  {
    v7 = 218LL;
    goto LABEL_4;
  }
  *(_OWORD *)sourceString = 0LL;
  v20 = 0LL;
  try
  {
    std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___();
    v18 = *a2;
    v11 = (const char *)sourceString[0];
    v12 = a1;
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  }
  catch ( ... )
  {
    v17 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0xE3,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            v11);
    v15 = (WCHAR *)sourceString[0];
    if ( sourceString[0] )
    {
      v16 = v20 - (unsigned __int64)sourceString[0];
      if ( v20 - (unsigned __int64)sourceString[0] >= 0x1000 )
      {
        v16 += 39LL;
        v15 = (WCHAR *)*((_QWORD *)sourceString[0] - 1);
        if ( (unsigned __int64)((char *)sourceString[0] - (char *)v15 - 8) > 0x1F )
          goto LABEL_28;
      }
      operator delete(v15, v16);
    }
    return v17;
  }
  String = v13(v12);
  if ( (String & 0x80000000) == 0 )
  {
    String = WindowsCreateString(sourceString[0], (unsigned int)v22 >> 1, a4);
    if ( (String & 0x80000000) == 0 )
    {
      v15 = (WCHAR *)sourceString[0];
      if ( sourceString[0] )
      {
        v16 = v20 - (unsigned __int64)sourceString[0];
        if ( v20 - (unsigned __int64)sourceString[0] >= 0x1000 )
        {
          v16 += 39LL;
          v15 = (WCHAR *)*((_QWORD *)sourceString[0] - 1);
          if ( (unsigned __int64)((char *)sourceString[0] - (char *)v15 - 8) > 0x1F )
            goto LABEL_28;
        }
        operator delete(v15, v16);
      }
      return 0LL;
    }
    v14 = 232LL;
  }
  else
  {
    v14 = 229LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)String);
  v15 = (WCHAR *)sourceString[0];
  if ( !sourceString[0] )
    return String;
  v16 = v20 - (unsigned __int64)sourceString[0];
  if ( v20 - (unsigned __int64)sourceString[0] < 0x1000
    || (v16 += 39LL,
        v15 = (WCHAR *)*((_QWORD *)sourceString[0] - 1),
        (unsigned __int64)((char *)sourceString[0] - (char *)v15 - 8) <= 0x1F) )
  {
    operator delete(v15, v16);
    return String;
  }
LABEL_28:
  _o__invalid_parameter_noinfo_noreturn(v15, v16);
  __debugbreak();
}
