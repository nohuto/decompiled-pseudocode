/*
 * XREFs of ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800EB0EC
 * Callers:
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1800EB560 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DD1F0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x1801DFD30 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017BBC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801DD044 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801DD590 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ??0?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@QEAA@XZ @ 0x1801DECE4 (--0-$set@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$allocator@PEAVCInter.c)
 *     ??1?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@QEAA@XZ @ 0x1801DEDD4 (--1-$set@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$allocator@PEAVCInter.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801DFAA4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(
        int a1,
        __int64 a2,
        int a3,
        char a4)
{
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  _QWORD *v13; // rbx
  int v14; // xmm6_4
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rbx
  int v19; // xmm6_4
  _QWORD *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-38h] BYREF
  int v26; // [rsp+50h] [rbp-30h]
  __int64 v27; // [rsp+58h] [rbp-28h] BYREF
  int v28; // [rsp+60h] [rbp-20h]

  if ( (a4 & 4) != 0 )
  {
    std::set<CInteractionTracker *>::set<CInteractionTracker *>(&v25);
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 4, (unsigned int)&v25, 0LL);
    v9 = v25;
    v10 = (_QWORD *)*v25;
    v23 = (_QWORD *)*v25;
    while ( v10 != v9 )
    {
      v11 = v10[4];
      if ( v11 != a2 )
        CInteractionTracker::SetScale(v11, v8, 1LL);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v23);
      v10 = v23;
    }
    std::set<CInteractionTracker *>::~set<CInteractionTracker *>(&v25);
  }
  result = *(unsigned int *)(a2 + 80);
  v25 = *(_QWORD **)(a2 + 72);
  v26 = result;
  if ( (a4 & 1) != 0 )
  {
    std::set<CInteractionTracker *>::set<CInteractionTracker *>(v24);
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 1, (unsigned int)v24, 0LL);
    v13 = (_QWORD *)v24[0];
    v14 = (int)v25;
    v15 = *(_QWORD **)v24[0];
    v23 = *(_QWORD **)v24[0];
    while ( v15 != v13 )
    {
      v16 = v15[4];
      if ( v16 != a2 )
      {
        v27 = *(_QWORD *)(v16 + 72);
        v17 = *(_DWORD *)(v16 + 80);
        LODWORD(v27) = v14;
        v28 = v17;
        CInteractionTracker::SetPosition(v16, &v27, 1LL);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v23);
      v15 = v23;
    }
    result = std::set<CInteractionTracker *>::~set<CInteractionTracker *>(v24);
  }
  if ( (a4 & 2) != 0 )
  {
    std::set<CInteractionTracker *>::set<CInteractionTracker *>(v24);
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 2, (unsigned int)v24, 0LL);
    v18 = (_QWORD *)v24[0];
    v19 = HIDWORD(v25);
    v20 = *(_QWORD **)v24[0];
    v23 = *(_QWORD **)v24[0];
    while ( v20 != v18 )
    {
      v21 = v20[4];
      if ( v21 != a2 )
      {
        v25 = *(_QWORD **)(v21 + 72);
        v22 = *(_DWORD *)(v21 + 80);
        HIDWORD(v25) = v19;
        v26 = v22;
        CInteractionTracker::SetPosition(v21, &v25, 1LL);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v23);
      v20 = v23;
    }
    return std::set<CInteractionTracker *>::~set<CInteractionTracker *>(v24);
  }
  return result;
}
