/*
 * XREFs of ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x18006D2B8
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006A9CC (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18006C000 (-OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInit.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18006C0E0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18006CCEC (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KUVelocityData@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180069D88 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V-$_Umap_trait.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E520 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 */

__int64 __fastcall DragNDropProcessor::UpdateVelocityForPointerId(DragNDropProcessor *this, int a2, struct tagPOINT a3)
{
  char *v3; // rsi
  LARGE_INTEGER v6; // rbx
  __int64 v7; // r8
  LARGE_INTEGER *QuadPart; // rax
  struct tagPOINT *v9; // rbx
  float v10; // xmm1_4
  LONG y; // eax
  LARGE_INTEGER *v13; // [rsp+30h] [rbp-10h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+30h] BYREF
  int v15; // [rsp+78h] [rbp+38h] BYREF
  struct tagPOINT v16; // [rsp+80h] [rbp+40h]

  v16 = a3;
  v15 = a2;
  v3 = (char *)this + 248;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (char *)this + 248,
    &PerformanceCount,
    &v15);
  v6 = PerformanceCount;
  if ( PerformanceCount.QuadPart == *((_QWORD *)this + 32) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
      v3,
      &PerformanceCount,
      &v15);
    QuadPart = (LARGE_INTEGER *)PerformanceCount.QuadPart;
    if ( PerformanceCount.QuadPart == *((_QWORD *)v3 + 1) )
    {
      PerformanceCount.QuadPart = (LONGLONG)&v15;
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::VelocityData,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        (__int64)v3,
        (__int64)&v13,
        v7,
        &PerformanceCount);
      QuadPart = v13;
    }
    v9 = (struct tagPOINT *)&QuadPart[3];
    QueryPerformanceCounter(QuadPart + 3);
    v9[1] = a3;
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart != *(_QWORD *)(v6.QuadPart + 24) )
    {
      v10 = (float)(PerformanceCount.LowPart - *(_DWORD *)(v6.QuadPart + 24)) / (float)(int)*((_QWORD *)this + 30);
      y = v16.y;
      *(float *)(v6.QuadPart + 40) = (float)(a3.x - *(_DWORD *)(v6.QuadPart + 32)) / v10;
      *(float *)(v6.QuadPart + 44) = (float)(y - *(_DWORD *)(v6.QuadPart + 36)) / v10;
      *(struct tagPOINT *)(v6.QuadPart + 32) = a3;
      *(LARGE_INTEGER *)(v6.QuadPart + 24) = PerformanceCount;
    }
  }
  return 0LL;
}
