/*
 * XREFs of ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802439E0
 * Callers:
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x180240F50 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180243094 (--$_Try_emplace@AEBI$$V@-$map@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18024313C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_18024313C.c)
 *     ??0StereoscopicViewData@@QEAA@XZ @ 0x1802431E4 (--0StereoscopicViewData@@QEAA@XZ.c)
 */

void __fastcall CStereoscopicContentManager::RegisterStereoscopicContentConsumer(
        CStereoscopicContentManager *this,
        struct CHolographicInteropTexture *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r9
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 *v8; // rax
  StereoscopicViewData *v9; // rax
  _OWORD *v10; // r8
  __int128 v11; // xmm0
  _QWORD v12[10]; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+88h] [rbp-80h]
  _BYTE v14[268]; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v15; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned int *v16; // [rsp+1C0h] [rbp+B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v18; // [rsp+1D0h] [rbp+C8h] BYREF

  v15 = *((_DWORD *)a2 + 30);
  v16 = (unsigned int *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v13 = 0;
  std::map<unsigned int,StereoscopicSlateData>::_Try_emplace<unsigned int const &,>(
    (__int64 *)this + 41,
    (__int64)v12,
    &v15);
  v3 = v12[0];
  v4 = v13;
  *(_OWORD *)(v12[0] + 32LL) = _xmm;
  *(_OWORD *)(v3 + 48) = _xmm;
  *(_OWORD *)(v3 + 64) = _xmm;
  *(_OWORD *)(v3 + 80) = _xmm;
  *(_DWORD *)(v3 + 96) = v4;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>((struct _RTL_CRITICAL_SECTION **)&v16);
  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  memset_0(v14, 0, 0xC0uLL);
  v6 = (__int64 *)*((_QWORD *)this + 10);
  v7 = v6;
  v8 = (__int64 *)v6[1];
  if ( !*((_BYTE *)v8 + 25) )
  {
    do
    {
      if ( *((_DWORD *)v8 + 7) >= v15 )
      {
        v6 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    v7 = (__int64 *)*((_QWORD *)this + 10);
  }
  if ( v6 == v7 || v15 < *((_DWORD *)v6 + 7) )
  {
    v16 = &v15;
    std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
      (__int64 *)this + 10,
      &v18,
      v6,
      v5,
      &v16);
  }
  v9 = StereoscopicViewData::StereoscopicViewData((StereoscopicViewData *)v14);
  v10 += 2;
  *v10 = *(_OWORD *)v9;
  v10[1] = *((_OWORD *)v9 + 1);
  v10[2] = *((_OWORD *)v9 + 2);
  v10[3] = *((_OWORD *)v9 + 3);
  v10[4] = *((_OWORD *)v9 + 4);
  v10[5] = *((_OWORD *)v9 + 5);
  v10[6] = *((_OWORD *)v9 + 6);
  v10 += 8;
  v11 = *((_OWORD *)v9 + 7);
  v9 = (StereoscopicViewData *)((char *)v9 + 128);
  *(v10 - 1) = v11;
  *v10 = *(_OWORD *)v9;
  v10[1] = *((_OWORD *)v9 + 1);
  v10[2] = *((_OWORD *)v9 + 2);
  v10[3] = *((_OWORD *)v9 + 3);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v17);
}
