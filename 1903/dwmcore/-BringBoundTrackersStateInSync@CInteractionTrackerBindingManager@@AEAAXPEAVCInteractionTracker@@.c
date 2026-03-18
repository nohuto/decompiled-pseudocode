/*
 * XREFs of ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800EB2D8
 * Callers:
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x1801DFD30 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 * Callees:
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800EAF88 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800EAFBC (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017BBC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1801D8A78 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D9FE8 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801DA4D8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801DD744 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ??0?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@QEAA@XZ @ 0x1801DECE4 (--0-$set@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$allocator@PEAVCInter.c)
 *     ??1?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@QEAA@XZ @ 0x1801DEDD4 (--1-$set@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$allocator@PEAVCInter.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801DFAA4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 */

void __fastcall CInteractionTrackerBindingManager::BringBoundTrackersStateInSync(
        int a1,
        __int64 a2,
        CInteractionTracker *a3,
        int a4)
{
  CInteractionTracker *v7; // rbx
  CInteractionTracker *v8; // rbx
  CInteractionTracker *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  CInteractionTracker *v18; // [rsp+30h] [rbp-30h] BYREF
  CInteractionTracker *v19; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v21[16]; // [rsp+50h] [rbp-10h] BYREF

  if ( a4 && (*(_DWORD *)(a2 + 168) || *((_DWORD *)a3 + 42)) )
  {
    v18 = 0LL;
    v19 = 0LL;
    std::set<CInteractionTracker *>::set<CInteractionTracker *>(v21);
    std::set<CInteractionTracker *>::set<CInteractionTracker *>(v20);
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7, (unsigned int)v21, (__int64)&v18);
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, (_DWORD)a3, 7, (unsigned int)v20, (__int64)&v19);
    v7 = v19;
    if ( v18 != v19 || !v18 )
    {
      if ( *(_DWORD *)(a2 + 168) && !*(_QWORD *)(a2 + 632) )
        *(_BYTE *)(a2 + 533) |= 1u;
      CInteractionTracker::StopCustomAndDefaultAnimations(a3, 1);
      CInteractionTracker::DestroyInteractionAnimations(a3);
      if ( v7 )
        CInteractionTracker::DemoteToBoundTracker(v7, 1);
      if ( *(_DWORD *)(a2 + 168) != *((_DWORD *)a3 + 42) )
      {
        v8 = (CInteractionTracker *)v20[0];
        v9 = *(CInteractionTracker **)v20[0];
        v19 = *(CInteractionTracker **)v20[0];
        while ( v9 != v8 )
        {
          v10 = *(unsigned int *)(a2 + 168);
          v11 = *((_QWORD *)v9 + 4);
          if ( !(_DWORD)v10 && *((_DWORD *)a3 + 42) == 1 )
          {
            CInteractionTracker::SetState(*((_QWORD *)v9 + 4), 2LL, 1LL);
            CInteractionTracker::GetCurrentValue(v11, 0LL);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v11, 0LL, v12, 1LL);
            CInteractionTracker::GetCurrentValue(v11, 1LL);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v11, 1LL, v13, 1LL);
            CInteractionTracker::GetCurrentValue(v11, 2LL);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v11, 2LL, v14, 1LL);
            *(_BYTE *)(*(_QWORD *)(v11 + 472) + 24LL * (unsigned int)(*(_DWORD *)(v11 + 496) - 1) + 20) = 1;
            v10 = *(unsigned int *)(a2 + 168);
          }
          CInteractionTracker::SetState(v11, v10, 1LL);
          if ( *(_DWORD *)(a2 + 168) == 2 )
          {
            CInteractionTracker::GetCurrentValue(v11, 0LL);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v11, 0LL, v15, 1LL);
            CInteractionTracker::GetCurrentValue(v11, 1LL);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v11, 1LL, v16, 1LL);
            CInteractionTracker::GetCurrentValue(v11, 2LL);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v11, 2LL, v17, 1LL);
          }
          *(_BYTE *)(*(_QWORD *)(v11 + 472) + 24LL * (unsigned int)(*(_DWORD *)(v11 + 496) - 1) + 20) = 1;
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v19);
          v9 = v19;
        }
      }
    }
    std::set<CInteractionTracker *>::~set<CInteractionTracker *>(v20);
    std::set<CInteractionTracker *>::~set<CInteractionTracker *>(v21);
  }
}
