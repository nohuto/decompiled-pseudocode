/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@@Z @ 0x180203004
 * Callers:
 *     _std::_Hash_std::_Umap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::shared_ptr_PenWorkspace::Discover::AppUsageData__std::_Uhash_compare_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::hash_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::equal_to_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_PenWorkspace::Discover::AppUsageData______0___::_Insert_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_PenWorkspace::Discover::AppUsageData____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_PenWorkspace::Discover::AppUsageData____________::_1_::catch$56 @ 0x1800E8401 (_std--_Hash_std--_Umap_traits_std--basic_string_unsigned_short_std--char_traits_uns_ea_1800E8401.c)
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1802017AC (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@@Z @ 0x1802030D0 (-erase@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$share.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int8 *v3; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int8 *v8; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax

  v3 = (unsigned __int8 *)(a3 + 2);
  if ( a3[5] >= 8uLL )
    v3 = *(unsigned __int8 **)v3;
  v6 = 2LL * a3[4];
  v7 = 0xCBF29CE484222325uLL;
  v8 = v3;
  if ( v3 > &v3[v6] )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      v9 = *v8++ ^ (unsigned __int64)v7;
      v7 = 0x100000001B3LL * v9;
    }
    while ( v8 - v3 != v6 );
  }
  v10 = a1[3];
  v11 = 2 * (v7 & a1[6]);
  if ( *(_QWORD **)(v10 + 16 * (v7 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v10 + 16 * (v7 & a1[6])) == a3 )
    {
      *(_QWORD *)(v10 + 16 * (v7 & a1[6])) = a1[1];
      v10 = a1[3];
      v12 = a1[1];
    }
    else
    {
      v12 = a3[1];
    }
    *(_QWORD *)(v10 + 8 * v11 + 8) = v12;
  }
  else if ( *(_QWORD **)(v10 + 16 * (v7 & a1[6])) == a3 )
  {
    *(_QWORD *)(v10 + 16 * (v7 & a1[6])) = *a3;
  }
  std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::erase(a1 + 1, a2, a3);
  return a2;
}
