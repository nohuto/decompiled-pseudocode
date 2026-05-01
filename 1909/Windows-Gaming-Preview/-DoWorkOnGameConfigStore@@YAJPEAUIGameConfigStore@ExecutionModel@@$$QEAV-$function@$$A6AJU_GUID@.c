/*
 * XREFs of ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x18001590C
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800099D4 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011B38 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180015824 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@$$.c)
 *     ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x1800179F8 (-_Reallocate_exactly@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     wprintf @ 0x180043BAC (wprintf.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DoWorkOnGameConfigStore(__int64 *a1, __int64 a2)
{
  void *v4; // rbx
  int v5; // eax
  int GameFromGameConfigStore; // esi
  const char *v7; // r9
  int v8; // eax
  const struct std::nothrow_t *v9; // rdx
  void *v10; // rcx
  const struct std::nothrow_t *v11; // rdx
  unsigned int v13; // r14d
  void *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  void *v17; // rcx
  const struct std::nothrow_t *v18; // rdx
  void *v19; // rcx
  const struct std::nothrow_t *v20; // rdx
  void *v21[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v22; // [rsp+30h] [rbp-68h]
  __int128 v23; // [rsp+40h] [rbp-58h] BYREF
  void *v24[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v27; // [rsp+A0h] [rbp+8h] BYREF
  int v28; // [rsp+B0h] [rbp+18h] BYREF
  void *v29; // [rsp+B8h] [rbp+20h] BYREF

  v22 = -2LL;
  v27 = 0;
  v4 = 0LL;
  v29 = 0LL;
  v28 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, 0LL, &v27);
  GameFromGameConfigStore = v5;
  if ( v5 >= 0 )
  {
    if ( v27 )
    {
      *(_OWORD *)v24 = 0LL;
      v25 = 0LL;
      try
      {
        std::vector<_GUID>::_Reallocate_exactly(v24);
      }
      catch ( ... )
      {
        LODWORD(v29) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x79,
                         (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                         v7);
        v19 = v24[0];
        if ( v24[0] )
        {
          v20 = (const struct std::nothrow_t *)((v25 - (unsigned __int64)v24[0]) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( (unsigned __int64)v20 >= 0x1000 )
          {
            v20 = (const struct std::nothrow_t *)((char *)v20 + 39);
            v19 = (void *)*((_QWORD *)v24[0] - 1);
            if ( (unsigned __int64)((char *)v24[0] - (char *)v19 - 8) > 0x1F )
            {
              _o__invalid_parameter_noinfo_noreturn(v19, v20);
              __debugbreak();
            }
          }
          operator delete(v19, v20);
        }
        return (unsigned int)v29;
      }
      v8 = (*(__int64 (__fastcall **)(__int64 *, void *, unsigned int *))(*a1 + 48))(a1, v24[0], &v27);
      GameFromGameConfigStore = v8;
      if ( v8 >= 0 )
      {
        GameFromGameConfigStore = 0;
        v13 = 0;
        if ( v27 )
        {
          while ( 1 )
          {
            *(_OWORD *)v21 = *((_OWORD *)v24[0] + v13);
            GameFromGameConfigStore = GetGameFromGameConfigStore(a1, (__int128 *)v21, &v29, &v28);
            if ( GameFromGameConfigStore < 0 )
              break;
            v14 = v29;
            v4 = 0LL;
            v29 = 0LL;
            v21[0] = v14;
            v23 = *((_OWORD *)v24[0] + v13);
            v15 = *(_QWORD *)(a2 + 56);
            if ( !v15 )
            {
              std::_Xbad_function_call();
              break;
            }
            v16 = (*(__int64 (__fastcall **)(__int64, __int128 *, void **))(*(_QWORD *)v15 + 16LL))(v15, &v23, v21);
            if ( v16 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x8F,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                (const char *)(unsigned int)v16);
            if ( v21[0] )
              operator delete(v21[0], v9);
            if ( ++v13 >= v27 )
              goto LABEL_24;
          }
          v4 = v29;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x92,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            (const char *)(unsigned int)GameFromGameConfigStore);
        }
LABEL_24:
        v17 = v24[0];
        if ( v24[0] )
        {
          v18 = (const struct std::nothrow_t *)((v25 - (unsigned __int64)v24[0]) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( (unsigned __int64)v18 >= 0x1000 )
          {
            v18 = (const struct std::nothrow_t *)((char *)v18 + 39);
            v17 = (void *)*((_QWORD *)v24[0] - 1);
            if ( (unsigned __int64)((char *)v24[0] - (char *)v17 - 8) > 0x1F )
            {
              _o__invalid_parameter_noinfo_noreturn(v17, v18);
              __debugbreak();
            }
          }
          operator delete(v17, v18);
          *(_OWORD *)v24 = 0LL;
          v25 = 0LL;
        }
        if ( v4 )
          operator delete(v4, v9);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7B,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v8);
        v10 = v24[0];
        if ( v24[0] )
        {
          v11 = (const struct std::nothrow_t *)((v25 - (unsigned __int64)v24[0]) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( (unsigned __int64)v11 >= 0x1000 )
          {
            v11 = (const struct std::nothrow_t *)((char *)v11 + 39);
            v10 = (void *)*((_QWORD *)v24[0] - 1);
            if ( (unsigned __int64)((char *)v24[0] - (char *)v10 - 8) > 0x1F )
            {
              _o__invalid_parameter_noinfo_noreturn(v10, v11);
              __debugbreak();
            }
          }
          operator delete(v10, v11);
        }
      }
    }
    else
    {
      wprintf(L"GameConfigStore is empty\n");
      return 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v5);
  }
  return (unsigned int)GameFromGameConfigStore;
}
