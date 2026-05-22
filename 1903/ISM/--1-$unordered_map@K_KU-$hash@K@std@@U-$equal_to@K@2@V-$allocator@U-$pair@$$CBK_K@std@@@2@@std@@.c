/*
 * XREFs of ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18006A754
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$10 @ 0x18003BCE9 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$10.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$1 @ 0x18003D5D4 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$1.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$5 @ 0x18006A5E6 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$5.c)
 *     _InputInfoValidator::ValidatePointerInput_::_1_::dtor$0 @ 0x180143165 (_InputInfoValidator--ValidatePointerInput_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXXZ @ 0x18005675C (-clear@-$list@U-$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V-$allocator@U-$pair@$$CBKUPo.c)
 */

void __fastcall std::unordered_map<unsigned long,unsigned __int64>::~unordered_map<unsigned long,unsigned __int64>(
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
  std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::clear(a1 + 8);
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x20);
}
