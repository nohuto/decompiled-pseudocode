/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18019470C
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$18 @ 0x18019467C (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$18.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::~list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  _QWORD *v5; // rbp

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (std::_Ref_count_base *)v2[7];
      v5 = (_QWORD *)*v2;
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      std::wstring::_Tidy_deallocate(v2 + 2);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x40);
      v3 = *(_QWORD **)a1;
      v2 = v5;
    }
    while ( v5 != *(_QWORD **)a1 );
  }
  std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x40);
}
