/*
 * XREFs of ??1?$list@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@QEAA@XZ @ 0x180058C6C
 * Callers:
 *     _ViewHierarchy::ViewHierarchy_::_1_::dtor$20 @ 0x18003D701 (_ViewHierarchy--ViewHierarchy_--_1_--dtor$20.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@QEAAXXZ @ 0x180059C40 (-clear@-$list@U-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V-$allocator@U-$pair@$$CBIUV.c)
 */

void __fastcall std::list<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>::~list<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>(
        void **a1)
{
  std::list<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
