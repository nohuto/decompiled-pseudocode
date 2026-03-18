/*
 * XREFs of ?CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA?BVCMILMatrix@@PEBVCVisualTree@@IIHH@Z @ 0x18020FC20
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180211608 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18020FADC (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_18020FADC.c)
 *     ?CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MMAEBUStereoscopicSlateData@@PEAUStereoscopicViewData@@@Z @ 0x18020FE90 (-CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MM.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1802109E8 (-find@-$_Tree@V-$_Tmap_traits@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 */

__int64 __fastcall CStereoscopicContentManager::CalculateViewTransformForVisualTree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  __int64 *v5; // rax
  __int64 v7; // r10
  __int64 v10; // rcx
  char v12; // r14
  unsigned int v13; // r13d
  char v14; // r15
  unsigned int **v15; // r11
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  unsigned int *v25; // [rsp+C0h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v27; // [rsp+D0h] [rbp+50h] BYREF

  v5 = *(__int64 **)(a1 + 16);
  v7 = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(a2 + 64) = 0;
  if ( v5 == *(__int64 **)(a1 + 24) )
  {
LABEL_6:
    *(_BYTE *)(a2 + 64) = 85;
LABEL_7:
    *(_OWORD *)a2 = _xmm;
    *(_BYTE *)(a2 + 65) = 125;
    *(_OWORD *)(a2 + 16) = _xmm;
    *(_OWORD *)(a2 + 32) = _xmm;
    *(_OWORD *)(a2 + 48) = _xmm;
    return a2;
  }
  while ( 1 )
  {
    v10 = *v5;
    if ( *v5 )
      break;
LABEL_5:
    if ( ++v5 == *(__int64 **)(a1 + 24) )
      goto LABEL_6;
  }
  while ( v10 != v7 )
  {
    v10 = *(_QWORD *)(v10 + 80);
    if ( !v10 )
      goto LABEL_5;
  }
  v12 = 0;
  v13 = *(_DWORD *)(*v5 + 208);
  v14 = 0;
  v26 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::find(
    a1 + 328,
    &v25,
    &a5);
  if ( v25 != *v15 )
  {
    v12 = 1;
    v14 = v25[24];
    *((_BYTE *)v25 + 96) = 0;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v26);
  if ( !v12 )
  {
    *(_BYTE *)(a2 + 64) = 85;
    goto LABEL_7;
  }
  v26 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v17 = *(_QWORD *)(a1 + 80);
  v18 = v17;
  v19 = *(_QWORD *)(v17 + 8);
  while ( !*(_BYTE *)(v19 + 25) )
  {
    if ( *(_DWORD *)(v19 + 28) >= a5 )
    {
      v17 = v19;
      v19 = *(_QWORD *)v19;
    }
    else
    {
      v19 = *(_QWORD *)(v19 + 16);
    }
  }
  if ( v17 == v18 || a5 < *(_DWORD *)(v17 + 28) )
  {
    v25 = &a5;
    v17 = *std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
             (__int64 *)(a1 + 80),
             &v27,
             v17,
             v16,
             &v25);
  }
  v20 = v17 + 32;
  if ( v14 )
    CStereoscopicContentManager::CalculateViewTransformsForSlate(a1, v13);
  v21 = a4 != 0 ? 0x40 : 0;
  v22 = *(_OWORD *)(v21 + v20 + 80);
  v23 = *(_OWORD *)(v21 + v20 + 96);
  v24 = *(_OWORD *)(v21 + v20 + 112);
  *(_OWORD *)a2 = *(_OWORD *)(v21 + v20 + 64);
  *(_OWORD *)(a2 + 16) = v22;
  *(_OWORD *)(a2 + 32) = v23;
  *(_OWORD *)(a2 + 48) = v24;
  *(_DWORD *)(a2 + 64) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v26);
  return a2;
}
