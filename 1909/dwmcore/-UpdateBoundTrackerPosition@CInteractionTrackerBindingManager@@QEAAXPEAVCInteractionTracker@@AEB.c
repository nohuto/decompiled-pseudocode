/*
 * XREFs of ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801DED78
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801DB9B4 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801DBCE0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED190 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017A4C4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801DB9B4 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801DE394 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801DF55C (-clear@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@SceneMaterialInput.c)
 */

void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        const struct D2DVector3 *a3,
        char a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  int v20; // [rsp+50h] [rbp-10h]

  if ( (*((_BYTE *)a2 + 533) & 1) != 0 )
  {
    v18 = 0LL;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v8 = v8;
    *(_QWORD *)(v8 + 8) = v8;
    *(_QWORD *)(v8 + 16) = v8;
    *(_WORD *)(v8 + 24) = 257;
    *(_QWORD *)&v18 = v8;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 1u, (_QWORD **)&v18, 0LL);
    v9 = v18;
    v10 = *(_QWORD *)v18;
    v17 = *(_QWORD *)v18;
    while ( v10 != v9 )
    {
      v11 = *(_QWORD *)(v10 + 32);
      if ( (struct CInteractionTracker *)v11 != a2 )
      {
        if ( (*(_BYTE *)(v11 + 533) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker(*(CInteractionTracker **)(v10 + 32), 0);
        v12 = *(_DWORD *)(v11 + 80);
        v19 = *(_QWORD *)(v11 + 72);
        LODWORD(v19) = *(_DWORD *)a3;
        v20 = v12;
        CInteractionTracker::SetPosition(v11, (__int64)&v19, 1);
      }
      *(_BYTE *)(v11 + 532) &= ~4u;
      *(_BYTE *)(v11 + 532) |= 4 * a4;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v17);
      v10 = v17;
    }
    std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::clear(&v18);
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 2u, (_QWORD **)&v18, 0LL);
    v13 = v18;
    v14 = *(_QWORD *)v18;
    v17 = *(_QWORD *)v18;
    while ( v14 != v13 )
    {
      v15 = *(_QWORD *)(v14 + 32);
      if ( (struct CInteractionTracker *)v15 != a2 )
      {
        if ( (*(_BYTE *)(v15 + 533) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker(*(CInteractionTracker **)(v14 + 32), 0);
        v16 = *(_DWORD *)(v15 + 80);
        v19 = *(_QWORD *)(v15 + 72);
        HIDWORD(v19) = *((_DWORD *)a3 + 1);
        v20 = v16;
        CInteractionTracker::SetPosition(v15, (__int64)&v19, 1);
      }
      *(_BYTE *)(v15 + 532) &= ~4u;
      *(_BYTE *)(v15 + 532) |= 4 * a4;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v17);
      v14 = v17;
    }
    std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::clear(&v18);
    std::_Deallocate<16,0>((void *)v18, 0x28uLL);
  }
}
