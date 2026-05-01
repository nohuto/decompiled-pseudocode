/*
 * XREFs of ??$_Buynode@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_List_buy@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@1@PEAU21@0AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1803A43E0
 * Callers:
 *     ??$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1803A47CC (--$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@2@PEAU32@0@Z @ 0x18021D9EC (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUComponentInfo@ComponentRelationshipSt.c)
 *     ??0ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@$$QEAU012345@@Z @ 0x1803A4B18 (--0ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@$$Q.c)
 */

__int64 __fastcall std::_List_buy<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::_Buynode<unsigned int &,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 a5)
{
  __int64 v6; // r11
  _QWORD *v8; // [rsp+40h] [rbp+8h]

  v8 = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>::_Buynode0(
         a1,
         a2,
         a3);
  *((_DWORD *)v8 + 4) = *a4;
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::ComponentInfo(v8 + 3, a5);
  return v6;
}
