/*
 * XREFs of ?erase@?$list@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@Z @ 0x180068F24
 * Callers:
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x18005D6A4 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 *     ??$_Insert@AEAU?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@1@@Z @ 0x1800C3958 (--$_Insert@AEAU-$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V-$_List.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800C37B4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::list<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rbx

  v3 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*(_QWORD *)(a1 + 8);
  std::wstring::_Tidy_deallocate(a3 + 4);
  std::_Deallocate<16,0>(a3, 0x48uLL);
  *a2 = v3;
  return a2;
}
