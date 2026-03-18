/*
 * XREFs of ?clear@?$list@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1801E0CC0
 * Callers:
 *     ??1CInteractionTrackerBindingManager@@UEAA@XZ @ 0x1801DEDFC (--1CInteractionTrackerBindingManager@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@QEAVCChannelContext@@M@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@2@@std@@QEAAXXZ @ 0x1801C1910 (-clear@-$list@U-$pair@QEAVCChannelContext@@M@std@@V-$allocator@U-$pair@QEAVCChannelContext@@M@st.c)
 */

void __fastcall std::list<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>::clear(
        __int64 a1)
{
  void *v2; // rdi
  void *v3; // rcx
  void *v4; // rbp

  v2 = **(void ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(void **)a1 )
  {
    do
    {
      v3 = (void *)*((_QWORD *)v2 + 6);
      v4 = *(void **)v2;
      if ( v3 )
      {
        std::_Deallocate<16,0>(v3, (*((_QWORD *)v2 + 8) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
        *((_QWORD *)v2 + 6) = 0LL;
        *((_QWORD *)v2 + 7) = 0LL;
        *((_QWORD *)v2 + 8) = 0LL;
      }
      std::list<std::pair<CChannelContext * const,float>>::clear((__int64)v2 + 32);
      std::_Deallocate<16,0>(*((void **)v2 + 4), 0x20uLL);
      std::_Deallocate<16,0>(v2, 0x58uLL);
      v2 = v4;
    }
    while ( v4 != *(void **)a1 );
  }
}
