/*
 * XREFs of ??0CInteractionTrackerBindingManager@@QEAA@PEAVCComposition@@@Z @ 0x1801DD640
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800D89AC (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShad.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180196FF4 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@V-$unordered_map@PEAVCInteractionTracker.c)
 */

CInteractionTrackerBindingManager *__fastcall CInteractionTrackerBindingManager::CInteractionTrackerBindingManager(
        CInteractionTrackerBindingManager *this,
        struct CComposition *a2)
{
  char *v2; // rbx

  *((_DWORD *)this + 2) = 0;
  v2 = (char *)this + 64;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CInteractionTrackerBindingManager::`vftable';
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = std::_List_alloc<std::_List_base_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>::_Buynode0(
                            (__int64)this,
                            0LL,
                            0LL);
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::_Init(
    (__int64)v2,
    8LL);
  return this;
}
