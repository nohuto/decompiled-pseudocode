/*
 * XREFs of ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801DEA1C
 * Callers:
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DD8CC (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017A4C4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1801D7368 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801D8DC8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801DC02C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801DE394 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801DF55C (-clear@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@SceneMaterialInput.c)
 */

void __fastcall CInteractionTrackerBindingManager::TransitionDisconnectedTrackersToIdle(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        struct CInteractionTracker *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rbx
  float CurrentValue; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  _QWORD *v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v17; // [rsp+98h] [rbp+38h] BYREF

  v16 = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)&v16 = v6;
  v15 = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  v17 = 0LL;
  v14 = 0LL;
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)&v15 = v7;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 7u, (_QWORD **)&v16, &v17);
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a3, 7u, (_QWORD **)&v15, &v14);
  if ( v17 )
  {
    if ( v14 && v17 == v14 )
      goto LABEL_11;
    v8 = (_QWORD *)v15;
  }
  else
  {
    v8 = (_QWORD *)v16;
  }
  v9 = (_QWORD *)*v8;
  v17 = (_QWORD *)*v8;
  while ( v9 != v8 )
  {
    v10 = v9[4];
    if ( *(_DWORD *)(v10 + 168) == 1 )
    {
      CInteractionTracker::SetState(v9[4], 2, 1);
      CurrentValue = CInteractionTracker::GetCurrentValue(v10, 0);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v10, 0, CurrentValue, 1);
      v12 = CInteractionTracker::GetCurrentValue(v10, 1);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v10, 1u, v12, 1);
      v13 = CInteractionTracker::GetCurrentValue(v10, 2);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v10, 2u, v13, 1);
    }
    CInteractionTracker::SetState(v10, 0, 1);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v17);
    v9 = v17;
  }
LABEL_11:
  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::clear(&v15);
  std::_Deallocate<16,0>((void *)v15, 0x28uLL);
  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::clear(&v16);
  std::_Deallocate<16,0>((void *)v16, 0x28uLL);
}
