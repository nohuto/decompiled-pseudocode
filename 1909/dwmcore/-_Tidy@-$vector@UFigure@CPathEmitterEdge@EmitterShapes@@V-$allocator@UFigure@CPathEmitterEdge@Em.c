/*
 * XREFs of ?_Tidy@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@AEAAXXZ @ 0x18020B694
 * Callers:
 *     ??_ECPathEmitterEdge@EmitterShapes@@UEAAPEAXI@Z @ 0x18020A690 (--_ECPathEmitterEdge@EmitterShapes@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800EAF54 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1801A1B3C (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::vector<EmitterShapes::CPathEmitterEdge::Figure>::_Tidy(char **a1)
{
  char *v1; // rbx
  char *v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        std::vector<float>::_Tidy((__int64)(v1 + 24));
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)v1);
        v1 += 56;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    std::_Deallocate<16,0>(v1, 56 * ((a1[2] - v1) / 56));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
