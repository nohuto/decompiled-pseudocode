/*
 * XREFs of ??1?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA@XZ @ 0x180194828
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$1 @ 0x18019469C (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::unordered_map<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~unordered_map<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(
        _QWORD *a1)
{
  void *v2; // rcx
  _QWORD **v3; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  _QWORD *v7; // rbp

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v3 = (_QWORD **)a1[1];
  v4 = *v3;
  *v3 = v3;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v5 = (_QWORD *)a1[1];
  if ( v4 != v5 )
  {
    do
    {
      v6 = (std::_Ref_count_base *)v4[7];
      v7 = (_QWORD *)*v4;
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
      std::wstring::_Tidy_deallocate(v4 + 2);
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x40);
      v5 = (_QWORD *)a1[1];
      v4 = v7;
    }
    while ( v7 != v5 );
  }
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x40);
}
