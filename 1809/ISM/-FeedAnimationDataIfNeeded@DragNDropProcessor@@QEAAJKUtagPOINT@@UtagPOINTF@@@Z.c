/*
 * XREFs of ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x180025324
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180023BA0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180025070 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x180022964 (-FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@QEAA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x18009BE78 (-GetBamoDataSourceStub@AnimationDataProvider@@QEAA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 *     ?GetDataProviderId@AnimationDataProvider@@QEAA_KXZ @ 0x18009BFC4 (-GetDataProviderId@AnimationDataProvider@@QEAA_KXZ.c)
 *     ?GetDataSourceId@AnimationDataProvider@@SA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18009C01C (-GetDataSourceId@AnimationDataProvider@@SA_KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessor::FeedAnimationDataIfNeeded(
        DragNDropProcessor *this,
        unsigned int a2,
        struct tagPOINT a3,
        struct tagPOINTF a4)
{
  __int64 v5; // r15
  __int64 v7; // rbx
  AnimationDataProvider *v8; // r14
  __int64 DataSourceId; // rsi
  __int64 DataProviderId; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v16[5]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  __int64 v18; // [rsp+B0h] [rbp+38h] BYREF
  unsigned int v19; // [rsp+B8h] [rbp+40h] BYREF
  struct tagPOINT v20; // [rsp+C0h] [rbp+48h]

  v20 = a3;
  v19 = a2;
  v16[2] = -2LL;
  v5 = a2;
  v16[1] = a4;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (char *)this + 312,
    &v18,
    &v19);
  if ( v18 != *((_QWORD *)this + 40) )
  {
    v7 = *(_QWORD *)(v18 + 24);
    v16[3] = v7;
    if ( v7 )
      (**(void (__fastcall ***)(__int64))v7)(v7);
    v15 = v7;
    if ( v7 )
      (**(void (__fastcall ***)(__int64))v7)(v7);
    v8 = (DragNDropProcessor *)((char *)this + 376);
    AnimationDataProvider::GetBamoDataSourceStub((char *)this + 376, &v18, &v15);
    v16[0] = v7;
    if ( v7 )
      (**(void (__fastcall ***)(__int64))v7)(v7);
    DataSourceId = AnimationDataProvider::GetDataSourceId(v16);
    DataProviderId = AnimationDataProvider::GetDataProviderId(v8);
    InputETW::DragNDrop::FeedPositionData(v5, DataProviderId, DataSourceId, a3);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v18 + 8) + 48LL))(v18 + 8, 1LL);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x360,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dra"
                 "gndropprocessor.cpp",
        (const char *)(unsigned int)v11);
      JUMPOUT(0x1800254E3LL);
    }
    v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v18 + 8) + 48LL))(v18 + 8, 2LL);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x361,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dra"
                 "gndropprocessor.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return 0LL;
}
