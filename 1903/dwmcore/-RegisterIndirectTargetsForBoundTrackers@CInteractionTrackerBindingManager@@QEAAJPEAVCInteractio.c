/*
 * XREFs of ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801DFDE8
 * Callers:
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801DBC38 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@I.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DEFDC (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017BBC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x1801DAAE0 (-GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV-$CWeakReference@VCResource@@@@XZ.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801DFAA4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801E0C7C (-clear@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@SceneMaterialInput.c)
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801E7EB0 (-RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV-$CWeakReference@VCResource@@@@I@Z.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(
        __int64 a1,
        __int64 a2,
        struct CBaseExpression *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  struct CWeakResourceReference **v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  _OWORD v14[2]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v14[0] = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)&v14[0] = v6;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7u, (_QWORD **)v14, 0LL);
  v7 = *(_QWORD *)&v14[0];
  v8 = **(_QWORD **)&v14[0];
  v13 = **(_QWORD **)&v14[0];
  while ( v8 != v7 )
  {
    v9 = *(struct CWeakResourceReference ***)(v8 + 32);
    if ( v9 != (struct CWeakResourceReference **)a2 )
    {
      CInteractionTracker::GetWeakRefToSelf(v9);
      v10 = CBaseExpression::RegisterIndirectTarget(a3);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x312,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_8;
      }
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v13);
    v8 = v13;
  }
  v11 = 0;
LABEL_8:
  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::clear(v14);
  std::_Deallocate<16,0>(*(void **)&v14[0], 0x28uLL);
  return v11;
}
