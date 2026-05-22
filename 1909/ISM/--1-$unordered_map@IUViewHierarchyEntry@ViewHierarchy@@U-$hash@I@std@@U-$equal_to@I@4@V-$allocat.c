/*
 * XREFs of ??1?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEAA@XZ @ 0x180058CB4
 * Callers:
 *     _ViewHierarchy::ViewHierarchy_::_1_::dtor$7 @ 0x18003D6B9 (_ViewHierarchy--ViewHierarchy_--_1_--dtor$7.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@QEAAXXZ @ 0x180059C40 (-clear@-$list@U-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V-$allocator@U-$pair@$$CBIUV.c)
 */

void __fastcall std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::~unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::list<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>::clear(a1 + 8);
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x28);
}
