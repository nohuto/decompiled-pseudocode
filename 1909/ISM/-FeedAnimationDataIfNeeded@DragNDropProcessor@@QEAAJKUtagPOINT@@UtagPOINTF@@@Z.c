/*
 * XREFs of ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x18006B4EC
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18006C0E0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006C8C0 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180019108 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x18006B6E8 (-FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E520 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessor::FeedAnimationDataIfNeeded(
        DragNDropProcessor *this,
        unsigned int a2,
        struct tagPOINT a3,
        struct tagPOINTF a4)
{
  unsigned __int64 v5; // r15
  __int64 v7; // rbx
  struct IAnimationDataProvider *AnimationDataProvider; // r14
  void (__fastcall *v9)(struct IAnimationDataProvider *, __int64 *, __int64 *); // rsi
  __int64 (__fastcall *v10)(struct IAnimationDataProvider *, _QWORD *); // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v18[5]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  __int64 v20; // [rsp+B0h] [rbp+38h] BYREF
  unsigned int v21; // [rsp+B8h] [rbp+40h] BYREF
  struct tagPOINT v22; // [rsp+C0h] [rbp+48h]

  v22 = a3;
  v21 = a2;
  v18[2] = -2LL;
  v5 = a2;
  v18[1] = a4;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (char *)this + 312,
    &v20,
    &v21);
  if ( v20 != *((_QWORD *)this + 40) )
  {
    v7 = *(_QWORD *)(v20 + 24);
    v18[3] = v7;
    if ( v7 )
      (**(void (__fastcall ***)(__int64))v7)(v7);
    AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
    v9 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, __int64 *))(*(_QWORD *)AnimationDataProvider
                                                                                      + 48LL);
    v17 = v7;
    if ( v7 )
      (**(void (__fastcall ***)(__int64))v7)(v7);
    v9(AnimationDataProvider, &v20, &v17);
    v10 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, _QWORD *))(*(_QWORD *)AnimationDataProvider + 40LL);
    v18[0] = v7;
    if ( v7 )
      (**(void (__fastcall ***)(__int64))v7)(v7);
    v11 = v10(AnimationDataProvider, v18);
    v12 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
    InputETW::DragNDrop::FeedPositionData(v5, v12, v11, a3);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v20 + 8) + 48LL))(v20 + 8, 1LL);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        856LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dra"
                 "gndropprocessor.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v20 + 8) + 48LL))(v20 + 8, 2LL);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        857LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dra"
                 "gndropprocessor.cpp",
        (const char *)(unsigned int)v14);
    v15 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return 0LL;
}
