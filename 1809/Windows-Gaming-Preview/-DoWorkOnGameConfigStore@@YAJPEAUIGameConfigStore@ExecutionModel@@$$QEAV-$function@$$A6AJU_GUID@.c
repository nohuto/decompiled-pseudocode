/*
 * XREFs of ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180015980
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180009A4C (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011B98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180015898 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@$$.c)
 *     ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x180017A28 (-_Reallocate_exactly@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     wprintf @ 0x18004371C (wprintf.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DoWorkOnGameConfigStore(__int64 *a1, __int64 a2)
{
  void *v4; // rbx
  int v5; // eax
  unsigned int GameFromGameConfigStore; // esi
  const char *v7; // r9
  int v8; // eax
  unsigned __int64 v9; // rdx
  void *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v13; // r14d
  void *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  void *v17[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+30h] [rbp-68h]
  __int128 v19; // [rsp+40h] [rbp-58h] BYREF
  void *v20[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v23; // [rsp+A0h] [rbp+8h] BYREF
  int v24; // [rsp+B0h] [rbp+18h] BYREF
  void *v25; // [rsp+B8h] [rbp+20h] BYREF

  v18 = -2LL;
  v23 = 0;
  v4 = 0LL;
  v25 = 0LL;
  v24 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, 0LL, &v23);
  GameFromGameConfigStore = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v5);
    return GameFromGameConfigStore;
  }
  if ( !v23 )
  {
    wprintf(L"GameConfigStore is empty\n");
    return 0;
  }
  *(_OWORD *)v20 = 0LL;
  v21 = 0LL;
  try
  {
    std::vector<_GUID>::_Reallocate_exactly(v20);
  }
  catch ( ... )
  {
    LODWORD(v25) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x79,
                     (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                     v7);
    v10 = v20[0];
    if ( v20[0] )
    {
      v11 = (v21 - (unsigned __int64)v20[0]) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v11 >= 0x1000 )
      {
        v11 += 39LL;
        v10 = (void *)*((_QWORD *)v20[0] - 1);
        if ( (unsigned __int64)((char *)v20[0] - (char *)v10 - 8) > 0x1F )
          goto LABEL_32;
      }
      operator delete(v10, v11);
    }
    return (unsigned int)v25;
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, void *, unsigned int *))(*a1 + 48))(a1, v20[0], &v23);
  GameFromGameConfigStore = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v8);
    v10 = v20[0];
    if ( !v20[0] )
      return GameFromGameConfigStore;
    v11 = (v21 - (unsigned __int64)v20[0]) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v11 < 0x1000
      || (v11 += 39LL,
          v10 = (void *)*((_QWORD *)v20[0] - 1),
          (unsigned __int64)((char *)v20[0] - (char *)v10 - 8) <= 0x1F) )
    {
      operator delete(v10, v11);
      return GameFromGameConfigStore;
    }
LABEL_32:
    _o__invalid_parameter_noinfo_noreturn(v10, v11);
    __debugbreak();
  }
  GameFromGameConfigStore = 0;
  v13 = 0;
  if ( v23 )
  {
    while ( 1 )
    {
      *(_OWORD *)v17 = *((_OWORD *)v20[0] + v13);
      GameFromGameConfigStore = GetGameFromGameConfigStore(a1, (__int128 *)v17, &v25, &v24);
      if ( (GameFromGameConfigStore & 0x80000000) != 0 )
        break;
      v14 = v25;
      v4 = 0LL;
      v25 = 0LL;
      v17[0] = v14;
      v19 = *((_OWORD *)v20[0] + v13);
      v15 = *(_QWORD *)(a2 + 56);
      if ( !v15 )
      {
        std::_Xbad_function_call();
        break;
      }
      v16 = (*(__int64 (__fastcall **)(__int64, __int128 *, void **))(*(_QWORD *)v15 + 16LL))(v15, &v19, v17);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8F,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v16);
      if ( v17[0] )
        operator delete(v17[0], v9);
      if ( ++v13 >= v23 )
        goto LABEL_23;
    }
    v4 = v25;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)GameFromGameConfigStore);
  }
LABEL_23:
  v10 = v20[0];
  if ( v20[0] )
  {
    v11 = (v21 - (unsigned __int64)v20[0]) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v11 >= 0x1000 )
    {
      v11 += 39LL;
      v10 = (void *)*((_QWORD *)v20[0] - 1);
      if ( (unsigned __int64)((char *)v20[0] - (char *)v10 - 8) > 0x1F )
        goto LABEL_32;
    }
    operator delete(v10, v11);
    *(_OWORD *)v20 = 0LL;
    v21 = 0LL;
  }
  if ( v4 )
    operator delete(v4, v9);
  return GameFromGameConfigStore;
}
