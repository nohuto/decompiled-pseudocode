/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1801DD4CC
 * Callers:
 *     ??$emplace_front@AEAPEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@?$list@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@2@@std@@QEAAAEAU?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@1@AEAPEAVCInteractionTracker@@$$QEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@1@@Z @ 0x1801DD38C (--$emplace_front@AEAPEAVCInteractionTracker@@V-$unordered_map@PEAVCInteractionTracker@@W4Interac.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800D5FD0 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_retur.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801DF530 (-clear@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = std::_List_alloc<std::_List_base_types<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>>::_Buynode0(
         a1,
         0LL,
         0LL);
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v4;
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = v5;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::clear(a2);
  return a1;
}
