/*
 * XREFs of ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180198B48
 * Callers:
 *     ??R?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180199118 (--R-$_Uhash_compare@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$hash@V-$bas.c)
 *     _anonymous_namespace_::IsAppInBlackList @ 0x18019A040 (_anonymous_namespace_--IsAppInBlackList.c)
 *     ?MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18019B008 (-MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV-$basic_string@GU-$char_trai.c)
 *     ?CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ @ 0x1801BD500 (-CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Traits_equal<std::char_traits<unsigned short>>(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  char v4; // r9
  __int64 v5; // r10
  unsigned __int16 v6; // ax
  int v7; // eax

  if ( a2 != a4 )
    return 0;
  v4 = 1;
  if ( a2 )
  {
    v5 = a1 - (_QWORD)a3;
    while ( 1 )
    {
      v6 = *(unsigned __int16 *)((char *)a3 + v5);
      if ( v6 != *a3 )
        break;
      ++a3;
      if ( !--a2 )
        goto LABEL_6;
    }
    v7 = v6 < *a3 ? -1 : 1;
  }
  else
  {
LABEL_6:
    v7 = 0;
  }
  if ( v7 )
    return 0;
  return v4;
}
