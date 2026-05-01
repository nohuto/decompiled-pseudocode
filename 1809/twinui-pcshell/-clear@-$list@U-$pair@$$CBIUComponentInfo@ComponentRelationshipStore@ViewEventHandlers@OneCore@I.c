/*
 * XREFs of ?clear@?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x180220E78
 * Callers:
 *     ??1?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x180211748 (--1-$list@U-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Inter.c)
 *     ??1?$unordered_map@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@U?$hash@I@std@@U?$equal_to@I@8@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@@std@@QEAA@XZ @ 0x1802117D0 (--1-$unordered_map@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal.c)
 *     ??1ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA@XZ @ 0x180211938 (--1ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1803A8488 (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEvent_ea_1803A8488.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x1802118DC (--1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall std::list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::clear(
        __int64 a1)
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
      Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::~ComponentInfo((Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *)(v2 + 3));
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x68);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
