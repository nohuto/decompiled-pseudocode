/*
 * XREFs of ??1CInteractionTrackerBindingManager@@UEAA@XZ @ 0x1801DD6EC
 * Callers:
 *     ??_ECInteractionTrackerBindingManager@@UEAAPEAXI@Z @ 0x1801DD780 (--_ECInteractionTrackerBindingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1801DF5A0 (-clear@-$list@U-$pair@QEAVCInteractionTracker@@V-$unordered_map@PEAVCInteractionTracker@@W4Inter.c)
 */

void __fastcall CInteractionTrackerBindingManager::~CInteractionTrackerBindingManager(
        CInteractionTrackerBindingManager *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CInteractionTrackerBindingManager::`vftable';
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 13) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  std::list<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>::clear((char *)this + 72);
  std::_Deallocate<16,0>(*((void **)this + 9), 0x58uLL);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
