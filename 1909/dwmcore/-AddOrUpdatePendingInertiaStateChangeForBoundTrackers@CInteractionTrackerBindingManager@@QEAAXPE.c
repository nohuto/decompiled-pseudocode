/*
 * XREFs of ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801DD7C8
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1801D7368 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017A4C4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1801D7368 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801D8DC8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801DE394 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801DF55C (-clear@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@SceneMaterialInput.c)
 */

void __fastcall CInteractionTrackerBindingManager::AddOrUpdatePendingInertiaStateChangeForBoundTrackers(
        int a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  float CurrentValue; // xmm0_4
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a2 + 533) & 1) != 0 )
  {
    v11 = 0LL;
    v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v6 = v6;
    *(_QWORD *)(v6 + 8) = v6;
    *(_QWORD *)(v6 + 16) = v6;
    *(_WORD *)(v6 + 24) = 257;
    *(_QWORD *)&v11 = v6;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7, (unsigned int)&v11, 0LL);
    v7 = v11;
    v8 = *(_QWORD *)v11;
    v12 = *(_QWORD *)v11;
    while ( v8 != v7 )
    {
      v9 = *(_QWORD *)(v8 + 32);
      if ( v9 != a2 )
      {
        CurrentValue = CInteractionTracker::GetCurrentValue(*(_QWORD *)(v8 + 32), a3);
        CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v9, a3, CurrentValue, 1);
        *(_BYTE *)(*(_QWORD *)(v9 + 472) + 24LL * (unsigned int)(*(_DWORD *)(v9 + 496) - 1) + 20) = 1;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v12);
      v8 = v12;
    }
    std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::clear(&v11);
    std::_Deallocate<16,0>((void *)v11, 0x28uLL);
  }
}
