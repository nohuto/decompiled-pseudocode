/*
 * XREFs of ??$_Lbound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180088190
 * Callers:
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180088554 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$ba.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180088668 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Lbound<std::wstring>(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v2; // r10
  __int64 *v4; // rax
  char *v5; // rdx
  char *v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r11
  int v9; // ecx
  unsigned __int16 v10; // bx
  signed __int64 v11; // r8
  bool v12; // cc
  unsigned __int16 v13; // bx
  bool v14; // sf

  v2 = (__int64 *)*a1;
  v4 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v4 + 25) )
  {
    v5 = (char *)a2;
    if ( *(_QWORD *)(a2 + 24) >= 8uLL )
      v5 = *(char **)a2;
    v6 = (char *)(v4 + 4);
    if ( (unsigned __int64)v4[7] >= 8 )
      v6 = (char *)v4[4];
    v7 = v4[6];
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 >= v7 )
      v8 = v4[6];
    v9 = 0;
    if ( v8 )
    {
      v10 = *(_WORD *)v6;
      if ( *(_WORD *)v6 < *(_WORD *)v5 )
      {
LABEL_14:
        v9 = -1;
      }
      else
      {
        v11 = v6 - v5;
        v12 = v10 <= *(_WORD *)v5;
        while ( v12 )
        {
          if ( v8 == 1 )
            goto LABEL_15;
          v5 += 2;
          --v8;
          v13 = *(_WORD *)&v5[v11];
          v12 = v13 <= *(_WORD *)v5;
          if ( v13 < *(_WORD *)v5 )
            goto LABEL_14;
        }
        v9 = 1;
      }
    }
LABEL_15:
    v14 = v9 < 0;
    if ( !v9 )
    {
      if ( v7 < *(_QWORD *)(a2 + 16) )
        goto LABEL_22;
      if ( v7 > *(_QWORD *)(a2 + 16) )
        goto LABEL_20;
      v14 = 0;
    }
    if ( v14 )
    {
LABEL_22:
      v4 = (__int64 *)v4[2];
    }
    else
    {
LABEL_20:
      v2 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  return v2;
}
