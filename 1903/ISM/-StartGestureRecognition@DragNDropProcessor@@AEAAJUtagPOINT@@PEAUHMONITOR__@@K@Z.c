/*
 * XREFs of ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18006D268
 * Callers:
 *     ?OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18006C240 (-OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInit.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18006C320 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F1B4 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006A108 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V_ea_18006A108.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18006AA70 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x18006BC50 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C1EC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResetAndInitializeInteractionContext@MessageInfo@DragNDropProcessor@@QEAAJXZ @ 0x18006CA0C (-ResetAndInitializeInteractionContext@MessageInfo@DragNDropProcessor@@QEAAJXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E760 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DragNDropProcessor::StartGestureRecognition(
        DragNDropProcessor *this,
        struct tagPOINT a2,
        HMONITOR a3,
        int a4)
{
  struct BamoDragSourceClientProxy **v7; // rdi
  struct BamoDragSourceClientProxy *v8; // rbx
  __int64 v9; // r8
  struct BamoDragSourceClientProxy **v10; // rax
  _DWORD *v11; // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rbx
  struct BamoDragSourceClientProxy *v17; // [rsp+58h] [rbp-9h] BYREF
  struct InputSite *v18; // [rsp+60h] [rbp-1h] BYREF
  struct InputSite *v19; // [rsp+68h] [rbp+7h] BYREF
  struct BamoDragSourceClientProxy *v20; // [rsp+70h] [rbp+Fh] BYREF
  struct _GUID v21; // [rsp+78h] [rbp+17h] BYREF
  __int64 v22; // [rsp+88h] [rbp+27h]
  _QWORD v23[3]; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  struct BamoDragManagerClientProxy *v25; // [rsp+C8h] [rbp+67h] BYREF
  int v26; // [rsp+E0h] [rbp+7Fh] BYREF

  v26 = a4;
  v22 = -2LL;
  v7 = (struct BamoDragSourceClientProxy **)((char *)this + 104);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (char *)this + 104,
    &v25,
    &v26);
  if ( v25 == *((struct BamoDragManagerClientProxy **)this + 14) )
  {
    v20 = 0LL;
    v25 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    v21 = GUID_NULL;
    DragNDropProcessor::HitTest(this, a2, a3, &v21, 0LL, 0LL, &v20, &v25, &v19, &v18);
    v8 = v20;
    if ( v20 && v25 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        v7,
        &v17,
        &v26);
      v10 = (struct BamoDragSourceClientProxy **)v17;
      if ( v17 == v7[1] )
      {
        v17 = (struct BamoDragSourceClientProxy *)&v26;
        std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
          (__int64)v7,
          (__int64)v23,
          v9,
          (_DWORD **)&v17);
        v10 = (struct BamoDragSourceClientProxy **)v23[0];
      }
      v11 = v10 + 3;
      if ( v10[5] != v8 )
      {
        v17 = v8;
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v17);
        v17 = (struct BamoDragSourceClientProxy *)*((_QWORD *)v11 + 2);
        *((_QWORD *)v11 + 2) = v8;
        Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v17);
      }
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))v11 + 3, &v25);
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)v11 + 5, (__int64 *)&v19);
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)v11 + 6, (__int64 *)&v18);
      v12 = CreateInteractionContext(&v21);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          234LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\d"
                   "ragndropprocessor.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
      if ( *(_QWORD *)&v21.Data1 )
      {
        *((_QWORD *)v11 + 4) = *(_QWORD *)&v21.Data1;
        v13 = DragNDropProcessor::MessageInfo::ResetAndInitializeInteractionContext((DragNDropProcessor::MessageInfo *)v11);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            238LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\"
                     "dragndropprocessor.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
      }
      v11[2] = 2;
    }
    else
    {
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        v7,
        &v21,
        &v26);
      v15 = *(_QWORD *)&v21.Data1;
      if ( *(struct BamoDragSourceClientProxy **)&v21.Data1 == v7[1] )
      {
        *(_QWORD *)&v21.Data1 = &v26;
        std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
          (__int64)v7,
          (__int64)v23,
          v14,
          &v21);
        v15 = v23[0];
      }
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)(v15 + 40));
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)(v15 + 48));
    }
    if ( v18 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v19 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v19 + 16LL))(v19);
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v20);
  }
  return 0LL;
}
