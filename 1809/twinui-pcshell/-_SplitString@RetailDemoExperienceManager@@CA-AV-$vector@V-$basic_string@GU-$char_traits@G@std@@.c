/*
 * XREFs of ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x180186B60
 * Callers:
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801862F8 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801866D0 (-_ParseScreenRect@RetailDemoExperienceManager@@CA-AUtagRECT@@AEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x18008D780 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x180183FD0 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall RetailDemoExperienceManager::_SplitString(_QWORD *a1, char *a2, __int16 a3)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  char *v8; // rcx
  unsigned __int64 v9; // rax
  char *v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  _QWORD v14[4]; // [rsp+38h] [rbp-40h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v6 = 0LL;
  v7 = *((_QWORD *)a2 + 2);
  do
  {
    v8 = a2;
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      v8 = *(char **)a2;
    if ( v6 >= v7 )
      goto LABEL_11;
    v9 = v7 - v6;
    v10 = &v8[2 * v6];
    if ( v9 )
    {
      while ( *(_WORD *)v10 != a3 )
      {
        v10 += 2;
        if ( !--v9 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v10 = 0LL;
    }
    if ( v10 )
      v11 = (v10 - v8) >> 1;
    else
LABEL_11:
      v11 = -1LL;
    v12 = std::wstring::substr(a2, (__int64)v14, v6, v11 - v6);
    std::vector<std::wstring>::emplace_back<std::wstring>((__int64)a1, v12);
    std::wstring::_Tidy_deallocate(v14);
    v6 = v11 + 1;
    v7 = *((_QWORD *)a2 + 2);
  }
  while ( v11 < v7 );
  return a1;
}
