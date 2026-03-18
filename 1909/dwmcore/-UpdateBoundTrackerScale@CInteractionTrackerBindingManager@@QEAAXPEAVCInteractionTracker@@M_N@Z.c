/*
 * XREFs of ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1801DEF48
 * Callers:
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801DBDE4 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801DBE78 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED190 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017A4C4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801DBE78 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801DE394 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801DF55C (-clear@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@SceneMaterialInput.c)
 */

void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerScale(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        float a3,
        char a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct CInteractionTracker *v10; // rdi
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  if ( (*((_BYTE *)a2 + 533) & 1) != 0 )
  {
    v11 = 0LL;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v7 = v7;
    *(_QWORD *)(v7 + 8) = v7;
    *(_QWORD *)(v7 + 16) = v7;
    *(_WORD *)(v7 + 24) = 257;
    *(_QWORD *)&v11 = v7;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 4u, (_QWORD **)&v11, 0LL);
    v8 = v11;
    v9 = *(_QWORD *)v11;
    v12 = *(_QWORD *)v11;
    while ( v9 != v8 )
    {
      v10 = *(struct CInteractionTracker **)(v9 + 32);
      if ( v10 != a2 )
      {
        if ( (*((_BYTE *)v10 + 533) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker(*(CInteractionTracker **)(v9 + 32), 0);
        CInteractionTracker::SetScale((__int64)v10, a3, 1);
      }
      *((_BYTE *)v10 + 532) &= ~4u;
      *((_BYTE *)v10 + 532) |= 4 * a4;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v12);
      v9 = v12;
    }
    std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::clear(&v11);
    std::_Deallocate<16,0>((void *)v11, 0x28uLL);
  }
}
