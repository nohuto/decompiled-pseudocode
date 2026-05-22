/*
 * XREFs of ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180025070
 * Callers:
 *     ?StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x180021BB0 (-StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragMan.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x180022A7C (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180023B34 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x180025324 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z.c)
 *     ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1800254EC (-GetPositionRelativeToSite@DragNDropProcessor@@QEAA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180025668 (-GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManager.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??A?$unordered_map@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@AEBK@Z @ 0x180025894 (--A-$unordered_map@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K.c)
 *     ?CreateDataSource@AnimationDataProvider@@QEAA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x18009BC64 (-CreateDataSource@AnimationDataProvider@@QEAA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?GetDataProviderId@AnimationDataProvider@@QEAA_KXZ @ 0x18009BFC4 (-GetDataProviderId@AnimationDataProvider@@QEAA_KXZ.c)
 *     ?GetDataSourceId@AnimationDataProvider@@SA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18009C01C (-GetDataSourceId@AnimationDataProvider@@SA_KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragNDropProcessor::StartAnimation(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  struct tagPOINT v5; // rsi
  const char *v6; // r9
  __int64 DataProviderId; // r12
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct tagPOINT *v10; // rdi
  struct tagPOINT v11; // rcx
  struct tagPOINT v12; // rbx
  struct tagPOINT v13; // rdi
  __int64 DataSourceId; // r14
  struct tagPOINT v15; // r8
  struct tagPOINT v16; // rbx
  struct tagPOINT v17; // rbx
  DragNDropProcessor *v18; // rcx
  int v19; // eax
  unsigned int v20; // esi
  struct tagPOINT v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h]
  struct tagPOINT v24; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct tagPOINT v26; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v27; // [rsp+98h] [rbp+48h] BYREF
  struct tagPOINTF v28; // [rsp+A8h] [rbp+58h] BYREF

  v27 = a2;
  v23 = -2LL;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (char *)this + 104,
    &v26,
    &v27);
  v5 = v26;
  if ( v26 == *((_QWORD *)this + 14)
    || *(struct BamoDragManagerClientProxy **)(*(_QWORD *)&v26 + 48LL) != a3
    || !*(_QWORD *)(*(_QWORD *)&v26 + 48LL) )
  {
    return 0LL;
  }
  DataProviderId = AnimationDataProvider::GetDataProviderId((DragNDropProcessor *)((char *)this + 376));
  if ( !DataProviderId )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x32A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      v6);
    JUMPOUT(0x18002531DLL);
  }
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 48LL) + 32LL) + 16LL);
  v9 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8) + 32);
  if ( *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
                    (char *)this + 312,
                    &v26,
                    &v27) == *((_QWORD *)this + 40) )
  {
    AnimationDataProvider::CreateDataSource((char *)this + 376, &v26, v9);
    v10 = (struct tagPOINT *)std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>::operator[](
                               (char *)this + 312,
                               &v27);
    v11 = *v10;
    v12 = v26;
    if ( *v10 != v26 )
    {
      if ( v26 )
      {
        (***(void (__fastcall ****)(struct tagPOINT))&v26)(v26);
        v11 = *v10;
      }
      *v10 = v12;
      if ( v11 )
        (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v11 + 8LL))(v11);
      v12 = v26;
    }
    if ( v12 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v12 + 8LL))(v12);
    }
  }
  v13 = *(struct tagPOINT *)std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>::operator[](
                              (char *)this + 312,
                              &v27);
  v24 = v13;
  if ( v13 )
    (***(void (__fastcall ****)(struct tagPOINT))&v13)(v13);
  v26 = v13;
  if ( v13 )
    (***(void (__fastcall ****)(struct tagPOINT))&v13)(v13);
  DataSourceId = AnimationDataProvider::GetDataSourceId(&v26);
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (char *)this + 40,
    &v26,
    &v27);
  v15 = v26;
  v16 = *(struct tagPOINT *)(*(_QWORD *)&v26 + 24LL);
  v26 = 0LL;
  DragNDropProcessor::GetDragManagerInputSite(
    this,
    v16,
    *(HMONITOR *)(*(_QWORD *)&v15 + 32LL),
    *(struct BamoDragManagerClientProxy **)(*(_QWORD *)&v5 + 48LL),
    (struct InputSite **)&v26);
  v17 = v26;
  DragNDropProcessor::GetPositionRelativeToSite(v18, (struct InputSite *)&v22, v26);
  DragNDropProcessor::GetVelocityForPointerId(this, &v28, v27);
  DragNDropProcessor::FeedAnimationDataIfNeeded(this, v27, v22, v28);
  InputETW::DragNDrop::StartAnimationCallBack(v27, DataProviderId, DataSourceId);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 48LL)
                                                                                 + 8LL)
                                                                     + 64LL))(
          *(_QWORD *)(*(_QWORD *)&v5 + 48LL) + 8LL,
          v27,
          DataProviderId,
          DataSourceId);
  v20 = v19;
  if ( v19 >= 0 )
  {
    if ( v17 )
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v17 + 16LL))(v17);
    if ( v13 )
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v13 + 8LL))(v13);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x344,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
    (const char *)(unsigned int)v19);
  if ( v17 )
    (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v17 + 16LL))(v17);
  if ( v13 )
    (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v13 + 8LL))(v13);
  return v20;
}
