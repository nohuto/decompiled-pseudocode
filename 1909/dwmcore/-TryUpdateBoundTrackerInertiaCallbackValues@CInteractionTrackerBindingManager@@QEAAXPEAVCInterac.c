/*
 * XREFs of ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801DEBE8
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800757E0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@QEAVCChannelContext@@M@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@2@@std@@QEAAXXZ @ 0x1801C0170 (-clear@-$list@U-$pair@QEAVCChannelContext@@M@std@@V-$allocator@U-$pair@QEAVCChannelContext@@M@st.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801D7C54 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801D8DC8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ??0?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@QEAA@XZ @ 0x1801DD614 (--0-$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U-$hash@PEAVCI.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DDDD8 (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x1801DE078 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 */

void __fastcall CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2)
{
  int v3; // esi
  float CurrentValue; // xmm0_4
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  char v9; // bl
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 *i; // rbx
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned int v15[16]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v16[8]; // [rsp+78h] [rbp-9h] BYREF
  __int64 *v17; // [rsp+80h] [rbp-1h] BYREF
  void *v18; // [rsp+90h] [rbp+Fh]
  __int128 v19; // [rsp+98h] [rbp+17h]

  v3 = (int)this;
  if ( (*((_BYTE *)a2 + 533) & 1) != 0 )
  {
    std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>((__int64)v16);
    CInteractionTracker::CalculateInertiaCallbackValues((__int64)a2, v15);
    CurrentValue = CInteractionTracker::GetCurrentValue((__int64)a2, 0);
    v5 = *(float *)&v15[4] - CurrentValue;
    v6 = CInteractionTracker::GetCurrentValue((__int64)a2, 1);
    v7 = *(float *)&v15[5] - v6;
    v8 = CInteractionTracker::GetCurrentValue((__int64)a2, 2);
    v9 = v5 != 0.0;
    if ( v7 != 0.0 )
      v9 |= 2u;
    if ( (float)(*(float *)&v15[7] / v8) != 1.0 )
      v9 |= 4u;
    CInteractionTrackerBindingManager::GetConnectedTrackersAndUpdatedAxes(v3, (int)a2, v9, (__int64)v16);
    v11 = v17;
    for ( i = (__int64 *)*v17; i != v11; i = (__int64 *)*i )
    {
      v13 = i[2];
      if ( (*(_BYTE *)(v13 + 533) & 1) == 0 )
      {
        v14 = CInteractionTrackerBindingManager::CalculateBoundTrackerInertiaCallbackValues(
                v10,
                (__int64)v15,
                a2,
                v13,
                *((_DWORD *)i + 6));
        v10 = i[2];
        *(_OWORD *)(v10 + 572) = *(_OWORD *)v14;
        *(_OWORD *)(v10 + 588) = *(_OWORD *)(v14 + 16);
        *(_OWORD *)(v10 + 604) = *(_OWORD *)(v14 + 32);
        *(_QWORD *)(v10 + 620) = *(_QWORD *)(v14 + 48);
        v11 = v17;
      }
    }
    if ( v18 )
    {
      std::_Deallocate<16,0>(v18, (*((_QWORD *)&v19 + 1) - (_QWORD)v18) & 0xFFFFFFFFFFFFFFF8uLL);
      v18 = 0LL;
      v19 = 0LL;
    }
    std::list<std::pair<CChannelContext * const,float>>::clear((__int64)&v17);
    std::_Deallocate<16,0>(v17, 0x20uLL);
  }
}
