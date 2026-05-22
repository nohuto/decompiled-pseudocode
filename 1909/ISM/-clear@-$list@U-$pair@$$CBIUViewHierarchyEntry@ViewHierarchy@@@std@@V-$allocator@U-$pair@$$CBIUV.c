/*
 * XREFs of ?clear@?$list@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@QEAAXXZ @ 0x180059C40
 * Callers:
 *     ??1?$list@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@QEAA@XZ @ 0x180058C6C (--1-$list@U-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V-$allocator@U-$pair@$$CBIUViewH.c)
 *     ??1?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEAA@XZ @ 0x180058CB4 (--1-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 *     ??1ViewHierarchy@@UEAA@XZ @ 0x180058DEC (--1ViewHierarchy@@UEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180059C08 (-clear@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash_compare@IU-$hash@I@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>::clear(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v2 + 3);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x28);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
