/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18002D110
 * Callers:
 *     CreativeFramework::Health::details::_dynamic_atexit_destructor_for__s_placementToBaseScenarioEventsMap__ @ 0x1800D1970 (CreativeFramework--Health--details--_dynamic_atexit_destructor_for__s_placementToBaseScenarioEve.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@2@@Z @ 0x180033B98 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 *     ??$destroy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@?$_Wrap_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@1@@Z @ 0x180036294 (--$destroy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_p.c)
 */

void std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>,0>>()
{
  __int64 v0; // rax
  _BYTE *v1; // rbx
  _BYTE *v2; // rdi
  __int64 v3; // rcx

  v0 = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  v1 = *(_BYTE **)(CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap + 8);
  v2 = v1;
  if ( !v1[25] )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>,0>>::_Erase(
        &CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap,
        *((_QWORD *)v2 + 2));
      v2 = *(_BYTE **)v2;
      std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>,void *>>>::destroy<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>(
        v3,
        v1 + 32);
      operator delete(v1);
      v1 = v2;
    }
    while ( !v2[25] );
    v0 = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  }
  *(_QWORD *)(v0 + 8) = v0;
  *(_QWORD *)CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  *(_QWORD *)(CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap + 16) = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  qword_1801852C0 = 0LL;
  operator delete((void *)CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap);
}
