/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180057FC0
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x180027390 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x180201608 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  unsigned __int64 v3; // r15
  char *v4; // r11
  __int64 v5; // r10
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int8 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rbp
  _QWORD *v16; // rsi
  __int64 v17; // r14
  _QWORD *i; // rcx
  _QWORD *v19; // rax
  char *v20; // rdx
  unsigned __int64 v21; // rdi
  char *v22; // r9
  __int64 v23; // rbx
  __int64 v24; // r8
  signed __int64 v25; // r9
  _QWORD *v26; // rdx
  signed __int64 v27; // r11

  v3 = *((_QWORD *)a3 + 3);
  v4 = a3;
  v5 = *((_QWORD *)a3 + 2);
  v8 = (unsigned __int64)a3;
  if ( v3 >= 8 )
    v8 = *(_QWORD *)a3;
  v9 = 2 * v5;
  v10 = 0xCBF29CE484222325uLL;
  v11 = (unsigned __int8 *)v8;
  if ( v8 > 2 * v5 + v8 )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      v12 = *v11++;
      v10 = 0x100000001B3LL * (v12 ^ v10);
    }
    while ( &v11[-v8] != (unsigned __int8 *)v9 );
  }
  v13 = v10 & a1[6];
  v14 = a1[3];
  v13 *= 2LL;
  v15 = (_QWORD *)a1[1];
  v16 = *(_QWORD **)(v14 + 8 * v13);
  v17 = v14 + 8 * v13;
  for ( i = v16; ; i = (_QWORD *)*i )
  {
    v19 = v16 == v15 ? v15 : **(_QWORD ***)(v17 + 8);
    if ( i == v19 )
      break;
    v20 = v4;
    if ( v3 >= 8 )
      v20 = *(char **)v4;
    v21 = i[5];
    v22 = (char *)(i + 2);
    if ( v21 >= 8 )
      v22 = (char *)i[2];
    v23 = i[4];
    if ( v23 == v5 )
    {
      v24 = i[4];
      if ( !v23 )
      {
LABEL_20:
        v26 = i + 2;
        if ( v21 >= 8 )
          v26 = (_QWORD *)*v26;
        if ( v3 >= 8 )
          v4 = *(char **)v4;
        if ( v5 != v23 )
          goto LABEL_34;
        if ( v5 )
        {
          v27 = v4 - (char *)v26;
          while ( *(_WORD *)((char *)v26 + v27) == *(_WORD *)v26 )
          {
            v26 = (_QWORD *)((char *)v26 + 2);
            if ( !--v5 )
              goto LABEL_29;
          }
LABEL_34:
          i = v15;
        }
LABEL_29:
        *a2 = i;
        return a2;
      }
      v25 = v22 - v20;
      while ( *(_WORD *)&v20[v25] == *(_WORD *)v20 )
      {
        v20 += 2;
        if ( !--v24 )
          goto LABEL_20;
      }
    }
  }
  *a2 = v15;
  return a2;
}
