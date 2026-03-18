/*
 * XREFs of ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DEFDC
 * Callers:
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x1801DFD30 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 * Callees:
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1800BDB0C (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800EA134 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     ?find@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@2@AEBQEAVCInteractionTracker@@@Z @ 0x1800EB684 (-find@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180154D50 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180189490 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x180199884 (-lower_bound@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash.c)
 *     ?clear@?$list@U?$pair@QEAVCChannelContext@@M@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@2@@std@@QEAAXXZ @ 0x1801C1910 (-clear@-$list@U-$pair@QEAVCChannelContext@@M@std@@V-$allocator@U-$pair@QEAVCChannelContext@@M@st.c)
 *     ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x1801DAAE0 (-GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV-$CWeakReference@VCResource@@@@XZ.c)
 *     ??$emplace@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DE9A8 (--$emplace@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$_Uma.c)
 *     ??$emplace@AEAPEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@$$QEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@1@@Z @ 0x1801DEA44 (--$emplace@AEAPEAVCInteractionTracker@@V-$unordered_map@PEAVCInteractionTracker@@W4InteractionTr.c)
 *     ??0?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@QEAA@XZ @ 0x1801DECE4 (--0-$set@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$allocator@PEAVCInter.c)
 *     ??0?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@QEAA@XZ @ 0x1801DED24 (--0-$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U-$hash@PEAVCI.c)
 *     ??1?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@QEAA@XZ @ 0x1801DEDD4 (--1-$set@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$allocator@PEAVCInter.c)
 *     ??8?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x1801DEE74 (--8-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801DFAA4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801DFDE8 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801E012C (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801E0D64 (-erase@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@V-$unordered_map@PEAVCInteractionTracker.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@@Z @ 0x1801E0E2C (-erase@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-.c)
 */

void __fastcall CInteractionTrackerBindingManager::AddOrUpdateTrackerBindings(
        CInteractionTrackerBindingManager *a1,
        _DWORD *a2,
        struct CInteractionTracker *a3,
        int a4)
{
  __int64 v4; // rsi
  struct CWeakResourceReference **v9; // rax
  struct CWeakResourceReference **v10; // r14
  __int64 v11; // rcx
  struct CWeakResourceReference **v12; // rdi
  __int64 v13; // rcx
  struct CWeakResourceReference **v14; // rbx
  struct CWeakResourceReference *v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rdi
  struct CWeakResourceReference *WeakRefToSelf; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  struct CWeakResourceReference *v25; // rax
  __int64 v26; // rdi
  _QWORD *v27; // rsi
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  _QWORD *v31; // [rsp+38h] [rbp-69h] BYREF
  __int64 v32; // [rsp+40h] [rbp-61h] BYREF
  void *v33[2]; // [rsp+48h] [rbp-59h] BYREF
  struct CWeakResourceReference **v34; // [rsp+58h] [rbp-49h]
  __int64 *v35[3]; // [rsp+60h] [rbp-41h] BYREF
  char v36[8]; // [rsp+78h] [rbp-29h] BYREF
  void *v37[2]; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v38[104]; // [rsp+90h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  struct CWeakResourceReference **v40; // [rsp+108h] [rbp+67h] BYREF
  _DWORD *v41; // [rsp+110h] [rbp+6Fh] BYREF
  struct CInteractionTracker *v42; // [rsp+118h] [rbp+77h] BYREF
  int v43; // [rsp+120h] [rbp+7Fh] BYREF

  v43 = a4;
  v42 = a3;
  v41 = a2;
  v4 = (__int64)a1 + 64;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
    (__int64)a1 + 64,
    (__int64)&v32,
    (unsigned __int8 *)&v41);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
    v4,
    (__int64)&v40,
    (unsigned __int8 *)&v42);
  v9 = (struct CWeakResourceReference **)*((_QWORD *)a1 + 9);
  v10 = v40;
  if ( v40 == v9 )
  {
    if ( !a4 )
    {
      v29 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x61,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)v29);
      __debugbreak();
    }
    std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>((__int64)v36);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::emplace<CInteractionTracker * &,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>(
      v4,
      (__int64)v33,
      (__int64)&v42,
      (__int64)v36);
    if ( *((CInteractionTrackerBindingManager **)a3 + 79) != a1 )
    {
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)a1 + 8LL))(a1);
      v11 = *((_QWORD *)a3 + 79);
      *((_QWORD *)a3 + 79) = a1;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)a3 + 8LL))(a3);
    std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
      v4,
      (__int64)&v40,
      (unsigned __int8 *)&v42);
    v10 = v40;
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)v38);
    std::list<std::pair<CChannelContext * const,float>>::clear((__int64)v37);
    std::_Deallocate<16,0>(v37[0], 0x20uLL);
    v9 = (struct CWeakResourceReference **)*((_QWORD *)a1 + 9);
  }
  v12 = (struct CWeakResourceReference **)v32;
  if ( (struct CWeakResourceReference **)v32 == v9 )
  {
    if ( !a4 )
    {
      v30 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x70,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)v30);
      JUMPOUT(0x1801DF4DFLL);
    }
    std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>((__int64)v36);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::emplace<CInteractionTracker * &,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>(
      v4,
      (__int64)v33,
      (__int64)&v41,
      (__int64)v36);
    if ( *((CInteractionTrackerBindingManager **)a2 + 79) != a1 )
    {
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)a1 + 8LL))(a1);
      v13 = *((_QWORD *)a2 + 79);
      *((_QWORD *)a2 + 79) = a1;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a2);
    std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
      v4,
      (__int64)&v40,
      (unsigned __int8 *)&v41);
    v12 = v40;
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)v38);
    std::list<std::pair<CChannelContext * const,float>>::clear((__int64)v37);
    std::_Deallocate<16,0>(v37[0], 0x20uLL);
  }
  v34 = v12 + 3;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
    (__int64)(v12 + 3),
    (__int64)&v40,
    (unsigned __int8 *)&v42);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
    (__int64)(v10 + 3),
    (__int64)&v32,
    (unsigned __int8 *)&v41);
  v14 = v40;
  v15 = (struct CWeakResourceReference *)v32;
  if ( v40 == (struct CWeakResourceReference **)v12[4] || (struct CWeakResourceReference *)v32 == v10[4] )
  {
    if ( !v43 )
    {
      v28 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB5,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)v28);
      __debugbreak();
    }
    std::set<CInteractionTracker *>::set<CInteractionTracker *>((__int64 *)v33);
    v40 = 0LL;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
      (_DWORD)a1,
      (_DWORD)a2,
      7,
      (unsigned int)v33,
      (__int64)&v40);
    v19 = std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::find(
            (__int64 **)v33,
            v35,
            &v42);
    v31 = v33[0];
    if ( std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>>::operator==(
           v19,
           &v31)
      && v40 )
    {
      v20 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 240LL);
      WeakRefToSelf = CInteractionTracker::GetWeakRefToSelf(v40);
      v22 = CExpressionManager::LookupExpressionsForTarget(v20, (__int64)WeakRefToSelf, 1LL);
      v23 = *((_QWORD *)a1 + 2);
      v31 = (_QWORD *)v22;
      v24 = *(_QWORD *)(v23 + 240);
      v25 = CInteractionTracker::GetWeakRefToSelf(v40);
      v26 = CExpressionManager::LookupExpressionsForTarget(v24, (__int64)v25, 2LL);
      if ( v31 )
      {
        v27 = v31;
        do
        {
          CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(a1, a3, v27[1], 1LL);
          v27 = (_QWORD *)v27[2];
        }
        while ( v27 );
        v15 = (struct CWeakResourceReference *)v32;
      }
      while ( v26 )
      {
        CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(a1, a3, *(_QWORD *)(v26 + 8), 2LL);
        v26 = *(_QWORD *)(v26 + 16);
      }
    }
    if ( v14 == (struct CWeakResourceReference **)v34[1] )
    {
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::emplace<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags &>(
        (__int64)v34,
        (__int64)v35,
        &v42,
        &v43);
      (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)a3 + 8LL))(a3);
    }
    if ( v15 == v10[4] )
    {
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::emplace<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags &>(
        (__int64)(v10 + 3),
        (__int64)v35,
        &v41,
        &v43);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a2);
    }
    std::set<CInteractionTracker *>::~set<CInteractionTracker *>(v33);
  }
  else
  {
    v16 = v43;
    if ( v43 )
    {
      if ( v43 != *((_DWORD *)v40 + 6) )
      {
        *(_DWORD *)(v32 + 24) = v43;
        *((_DWORD *)v14 + 6) = v16;
      }
    }
    else
    {
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::erase(
        v12 + 3,
        &v40,
        v40);
      (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)a3 + 16LL))(a3);
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::erase(
        v10 + 3,
        &v40,
        v15);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 16LL))(a2);
      if ( !v12[5] )
      {
        std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::erase(
          (char *)a1 + 64,
          &v40,
          v12);
        v17 = *((_QWORD *)a2 + 79);
        if ( v17 )
        {
          *((_QWORD *)a2 + 79) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 16LL))(a2);
      }
      if ( !v10[5] )
      {
        std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::erase(
          (char *)a1 + 64,
          &v40,
          v10);
        v18 = *((_QWORD *)a3 + 79);
        if ( v18 )
        {
          *((_QWORD *)a3 + 79) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)a3 + 16LL))(a3);
      }
      if ( a2[42] )
        CInteractionTrackerBindingManager::TransitionDisconnectedTrackersToIdle(
          a1,
          (struct CInteractionTracker *)a2,
          a3);
    }
  }
}
