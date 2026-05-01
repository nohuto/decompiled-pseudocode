/*
 * XREFs of ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1800AFE2C
 * Callers:
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x1800AFF94 (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800863D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x1800AFDF4 (-IsJavawExe@@YA_NPEBG@Z.c)
 *     ?_Xran@?$_String_val@U?$_Simple_types@G@std@@@std@@SAXXZ @ 0x1801B74E8 (-_Xran@-$_String_val@U-$_Simple_types@G@std@@@std@@SAXXZ.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KG_K@Z @ 0x1801B7500 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KG_K@Z.c)
 */

__int64 __fastcall TryExtractJavaMainClassNameFromCommandLine(__int64 a1, __int64 a2)
{
  const WCHAR *v2; // rax
  const unsigned __int16 **v4; // rax
  const unsigned __int16 *v5; // rdx
  const unsigned __int16 **v6; // r15
  int v7; // edi
  __int64 v8; // rsi
  _WORD **v9; // r14
  __int128 *v10; // rax
  int pNumArgs; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+28h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h]

  v13 = -2LL;
  v2 = (const WCHAR *)a2;
  pNumArgs = 0;
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(const WCHAR **)a2;
  v4 = (const unsigned __int16 **)CommandLineToArgvW(v2, &pNumArgs);
  v6 = v4;
  if ( pNumArgs && IsJavawExe(*v4, v5) && (v7 = 1, pNumArgs > 1) )
  {
    v8 = 1LL;
    v9 = (_WORD **)(v6 + 2);
    while ( 1 )
    {
      std::wstring::wstring((__int64)&v14, v6[v8]);
      if ( !(_QWORD)v15 )
        std::_String_val<std::_Simple_types<unsigned short>>::_Xran();
      v10 = &v14;
      if ( *((_QWORD *)&v15 + 1) >= 8uLL )
        v10 = (__int128 *)v14;
      if ( *(_WORD *)v10 != 45 )
        break;
      if ( std::wstring::find(&v14, 61LL, 0LL) == -1 && v7 + 1 < pNumArgs && **v9 != 45 )
      {
        ++v7;
        ++v8;
        ++v9;
      }
      std::wstring::_Tidy_deallocate(&v14);
      ++v7;
      ++v8;
      ++v9;
      if ( v7 >= pNumArgs )
        goto LABEL_16;
    }
    *(_OWORD *)a1 = v14;
    *(_OWORD *)(a1 + 16) = v15;
    *(_QWORD *)&v15 = 0LL;
    *((_QWORD *)&v15 + 1) = 7LL;
    LOWORD(v14) = 0;
    std::wstring::_Tidy_deallocate(&v14);
  }
  else
  {
LABEL_16:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  return a1;
}
