/*
 * XREFs of ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801DFAA4
 * Callers:
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800EB0EC (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800EB2D8 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801DEED8 (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DEFDC (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x1801DF788 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801DFDE8 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801E012C (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801E0488 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1801E0660 (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801E077C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017BBC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x180199884 (-lower_bound@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash.c)
 *     ??$_Insert_nohint@AEBQEAVCInteractionTracker@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@std@@_N@1@_NAEBQEAVCInteractionTracker@@U_Not_a_node_tag@1@@Z @ 0x1801DE8C4 (--$_Insert_nohint@AEBQEAVCInteractionTracker@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@PEA.c)
 *     ?push_back@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEBQEAVCInteractionTracker@@@Z @ 0x1801E0F98 (-push_back@-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std@@@std@@QE.c)
 */

void __fastcall CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD **a4,
        _QWORD *a5)
{
  _QWORD *v5; // rsi
  __int64 v10; // r13
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 ***v16; // r13
  __int64 **i; // rbx
  _QWORD *v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rbx
  void **v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v23[2]; // [rsp+38h] [rbp-48h] BYREF
  char v24[16]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v25; // [rsp+58h] [rbp-28h] BYREF
  __int64 v26; // [rsp+68h] [rbp-18h]
  unsigned __int64 v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+78h] [rbp-8h]
  _QWORD *v29; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+48h] BYREF

  v30 = a2;
  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v10 = a1 + 64;
  a5 = (_QWORD *)(a1 + 64);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
    a1 + 64,
    (__int64)&v29,
    (unsigned __int8 *)&v30);
  if ( v29 == *(_QWORD **)(a1 + 72) )
  {
    std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Insert_nohint<CInteractionTracker * const &,std::_Not_a_node_tag>(
      (__int64)a4,
      (__int64)v23,
      v11,
      &v30);
    if ( v5 )
    {
      if ( (*(_BYTE *)(a2 + 533) & 1) != 0 )
        *v5 = a2;
    }
  }
  else if ( a3 <= 7 )
  {
    v12 = 150;
    if ( _bittest(&v12, a3) )
    {
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v25 = 0LL;
      *(_QWORD *)&v25 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      *(_OWORD *)v25 = 0LL;
      *(_QWORD *)v25 = &v25;
      std::deque<CInteractionTracker *>::push_back(&v25, &v30);
      while ( v28 )
      {
        if ( (_QWORD)v25 )
          v13 = *(_QWORD *)v25;
        else
          v13 = 0LL;
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * ((*(_QWORD *)(v13 + 16) - 1LL) & (v27 >> 1)))
                        + 8 * (v27 & 1));
        v22 = v14;
        if ( --v28 )
          ++v27;
        else
          v27 = 0LL;
        std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
          v10,
          (__int64)v23,
          (unsigned __int8 *)&v22);
        v16 = *(__int64 ****)(v23[0] + 32LL);
        for ( i = *v16; i != (__int64 **)v16; i = (__int64 **)*i )
        {
          v18 = *a4;
          v19 = (_QWORD *)**a4;
          v29 = v19;
          while ( v19 != v18 )
          {
            if ( (__int64 *)v19[4] == i[2] )
            {
              if ( v19 != v18 )
                goto LABEL_27;
              break;
            }
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v29);
            v19 = v29;
          }
          if ( (a3 & (_DWORD)i[3]) == a3 || a3 == 7 )
            std::deque<CInteractionTracker *>::push_back(&v25, i + 2);
LABEL_27:
          ;
        }
        std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Insert_nohint<CInteractionTracker * const &,std::_Not_a_node_tag>(
          (__int64)a4,
          (__int64)v24,
          v15,
          &v22);
        v10 = (__int64)a5;
        if ( v5 && (*(_BYTE *)(v14 + 533) & 1) != 0 )
          *v5 = v14;
      }
      v20 = v26;
      v21 = (void **)*((_QWORD *)&v25 + 1);
      if ( v26 )
      {
        do
        {
          if ( v21[--v20] )
          {
            std::_Deallocate<16,0>(v21[v20], 0x10uLL);
            v21 = (void **)*((_QWORD *)&v25 + 1);
          }
        }
        while ( v20 );
        v20 = v26;
      }
      if ( v21 )
        std::_Deallocate<16,0>(v21, 8 * v20);
      v26 = 0LL;
      *((_QWORD *)&v25 + 1) = 0LL;
      std::_Deallocate<16,0>((void *)v25, 0x10uLL);
    }
  }
}
