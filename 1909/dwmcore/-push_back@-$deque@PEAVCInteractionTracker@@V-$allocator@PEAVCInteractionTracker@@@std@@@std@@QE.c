/*
 * XREFs of ?push_back@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEBQEAVCInteractionTracker@@@Z @ 0x1801DF878
 * Callers:
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801DE394 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@IEAAX_K@Z @ 0x1801DF2E4 (-_Growmap@-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std@@@std@@IEA.c)
 */

__int64 __fastcall std::deque<CInteractionTracker *>::push_back(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 result; // rax

  v4 = a1[4];
  v5 = a1[3];
  if ( (((_BYTE)v4 + (_BYTE)v5) & 1) == 0 && a1[2] <= (unsigned __int64)(v4 + 2) >> 1 )
  {
    std::deque<CInteractionTracker *>::_Growmap(a1);
    v5 = a1[3];
  }
  v6 = v5 & (2LL * a1[2] - 1);
  a1[3] = v6;
  v7 = v6 + a1[4];
  v8 = a1[1];
  v9 = (v7 >> 1) & (a1[2] - 1LL);
  if ( !*(_QWORD *)(v8 + 8 * v9) )
  {
    *(_QWORD *)(a1[1] + 8 * v9) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v8 = a1[1];
  }
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(v8 + 8 * v9) + 8 * (v7 & 1)) = *a2;
  ++a1[4];
  return result;
}
