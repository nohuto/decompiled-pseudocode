/*
 * XREFs of ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006CB00
 * Callers:
 *     ?StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x180069230 (-StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragMan.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x1800195E8 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006A068 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V_ea_18006A068.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x18006B72C (-FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18006BA30 (-GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManager.c)
 *     ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18006BB24 (-GetPositionRelativeToSite@DragNDropProcessor@@QEAA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x18006BBF4 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x18006CE64 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E760 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragNDropProcessor::StartAnimation(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  struct tagPOINT v5; // rsi
  struct IAnimationDataProvider *AnimationDataProvider; // r15
  const char *v7; // r9
  unsigned __int64 v8; // r12
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r8
  struct tagPOINTF v12; // rbx
  __int64 v13; // rcx
  struct tagPOINT v14; // rdi
  __int64 v15; // r8
  struct tagPOINT v16; // rdi
  struct tagPOINT v17; // rdi
  __int64 (__fastcall *v18)(struct IAnimationDataProvider *, struct tagPOINT *); // rbx
  unsigned __int64 v19; // r14
  struct tagPOINT v20; // rcx
  struct tagPOINT v21; // rbx
  __int64 v22; // r9
  struct tagPOINT v23; // rbx
  DragNDropProcessor *v24; // rcx
  int v25; // eax
  unsigned int v26; // esi
  struct tagPOINT v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+38h] [rbp-18h]
  _QWORD v30[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct tagPOINT v32; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+48h] BYREF
  struct tagPOINTF v34; // [rsp+A8h] [rbp+58h] BYREF

  v33 = a2;
  v29 = -2LL;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (char *)this + 104,
    &v32,
    &v33);
  v5 = v32;
  if ( v32 == *((_QWORD *)this + 14)
    || *(struct BamoDragManagerClientProxy **)(*(_QWORD *)&v32 + 48LL) != a3
    || !*(_QWORD *)(*(_QWORD *)&v32 + 48LL) )
  {
    return 0LL;
  }
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v8 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
  if ( !v8 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      801LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      v7);
    __debugbreak();
  }
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 48LL) + 32LL) + 16LL);
  v10 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) + 32);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (char *)this + 312,
    &v32,
    &v33);
  if ( v32 == *((_QWORD *)this + 40) )
  {
    (*(void (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINT *, _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                       + 24LL))(
      AnimationDataProvider,
      &v32,
      v10);
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
      (char *)this + 312,
      &v34,
      &v33);
    v12 = v34;
    if ( v34 == *((_QWORD *)this + 40) )
    {
      v34 = (struct tagPOINTF)&v33;
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        (__int64)this + 312,
        (__int64)v30,
        v11,
        &v34);
      v12 = (struct tagPOINTF)v30[0];
    }
    v13 = *(_QWORD *)(*(_QWORD *)&v12 + 24LL);
    v14 = v32;
    if ( v13 != v32 )
    {
      if ( v32 )
      {
        (***(void (__fastcall ****)(struct tagPOINT))&v32)(v32);
        v13 = *(_QWORD *)(*(_QWORD *)&v12 + 24LL);
      }
      *(struct tagPOINT *)(*(_QWORD *)&v12 + 24LL) = v14;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v14 = v32;
    }
    if ( v14 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v14 + 8LL))(v14);
    }
  }
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (char *)this + 312,
    &v32,
    &v33);
  v16 = v32;
  if ( v32 == *((_QWORD *)this + 40) )
  {
    v32 = (struct tagPOINT)&v33;
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
      (__int64)this + 312,
      (__int64)v30,
      v15,
      &v32);
    v16 = (struct tagPOINT)v30[0];
  }
  v17 = *(struct tagPOINT *)(*(_QWORD *)&v16 + 24LL);
  v30[0] = v17;
  if ( v17 )
    (***(void (__fastcall ****)(struct tagPOINT))&v17)(v17);
  v18 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINT *))(*(_QWORD *)AnimationDataProvider
                                                                                     + 40LL);
  v32 = v17;
  if ( v17 )
    (***(void (__fastcall ****)(struct tagPOINT))&v17)(v17);
  v19 = v18(AnimationDataProvider, &v32);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (char *)this + 40,
    &v32,
    &v33);
  v20 = v32;
  v21 = *(struct tagPOINT *)(*(_QWORD *)&v32 + 24LL);
  v32 = 0LL;
  DragNDropProcessor::GetDragManagerInputSite(
    this,
    v21,
    *(HMONITOR *)(*(_QWORD *)&v20 + 32LL),
    *(struct BamoDragManagerClientProxy **)(*(_QWORD *)&v5 + 48LL),
    (struct InputSite **)&v32);
  v22 = (__int64)v21;
  v23 = v32;
  DragNDropProcessor::GetPositionRelativeToSite(v24, (struct InputSite *)&v28, v32, v22);
  DragNDropProcessor::GetVelocityForPointerId(this, &v34, v33);
  DragNDropProcessor::FeedAnimationDataIfNeeded(this, v33, v28, v34);
  InputETW::DragNDrop::StartAnimationCallBack(v33, v8, v19);
  v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 48LL) + 8LL)
                                                                                       + 64LL))(
          *(_QWORD *)(*(_QWORD *)&v5 + 48LL) + 8LL,
          v33,
          v8,
          v19);
  v26 = v25;
  if ( v25 >= 0 )
  {
    if ( v23 )
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v23 + 16LL))(v23);
    if ( v17 )
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v17 + 8LL))(v17);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33B,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
    (const char *)(unsigned int)v25);
  if ( v23 )
    (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v23 + 16LL))(v23);
  if ( v17 )
    (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v17 + 8LL))(v17);
  return v26;
}
