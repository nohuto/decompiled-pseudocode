/*
 * XREFs of ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x18000424C
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180081E30 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800BFF98 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x180004448 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x180004AAC (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x180004BB0 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEBVCVisualTree@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEBVCVisualTree@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800055B4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEBVCVisualTree@@@2@V-$tuple@$$V@2@.c)
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x18000665C (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1800C00C0 (-IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowCaster::UpdateVisualProperty(
        CProjectedShadowCaster *this,
        const struct CVisualTree *a2,
        char a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  float v10; // xmm0_4
  char IsVisibleInTree; // al
  CVisualTree *v12; // r10
  char v13; // si
  bool v14; // cl
  float v15; // xmm0_4
  __int128 v16; // xmm0
  bool v17[8]; // [rsp+30h] [rbp-30h] BYREF
  CVisualTree *v18; // [rsp+38h] [rbp-28h] BYREF
  char v19; // [rsp+40h] [rbp-20h] BYREF
  __int128 v20; // [rsp+48h] [rbp-18h] BYREF

  v18 = a2;
  v5 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
         (char *)this + 72,
         &v18);
  v8 = v5;
  if ( v5 == *v6 || v7 < *(_QWORD *)(v5 + 32) )
  {
    *(_QWORD *)&v20 = &v18;
    v8 = *(_QWORD *)std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CVisualTree const * &&>,std::tuple<>>(
                      (_DWORD)v6,
                      (unsigned int)&v19,
                      v5,
                      (_DWORD)v6,
                      (__int64)&v20);
  }
  v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
  if ( *(_QWORD *)(v8 + 48) < v9 )
  {
    *(_QWORD *)(v8 + 48) = v9;
    v10 = CProjectedShadowCaster::ComputeEffectiveAlpha(this, v18, v17);
    IsVisibleInTree = CVisualTree::IsVisibleInTree(v18, *((const struct CVisual **)this + 7));
    v13 = 0;
    v14 = v17[0];
    if ( *(float *)(v8 + 40) != v10 || *(_BYTE *)(v8 + 56) != v17[0] || *(_BYTE *)(v8 + 57) != IsVisibleInTree )
    {
      *(float *)(v8 + 40) = v10;
      v13 = 1;
      *(_BYTE *)(v8 + 56) = v14;
      *(_BYTE *)(v8 + 57) = IsVisibleInTree;
      v12 = v18;
    }
    CProjectedShadowCaster::CalculateCasterBounds(this, &v20, v12, v17);
    if ( *(_BYTE *)(v8 + 76) != v17[0]
      || (v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v8 + 60) - *(float *)&v20)) & _xmm),
          v15 > 0.0000011920929)
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v8 + 64) - *((float *)&v20 + 1))) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v8 + 68) - *((float *)&v20 + 2))) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v8 + 72) - *((float *)&v20 + 3))) & _xmm) > 0.0000011920929 )
    {
      v16 = v20;
      *(_BYTE *)(v8 + 76) = v17[0];
      *(_OWORD *)(v8 + 60) = v16;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v8 + 80);
      v13 = 1;
    }
    if ( v13 )
    {
      if ( !a3 )
      {
        (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, CProjectedShadowCaster *))(*(_QWORD *)this + 64LL))(
          this,
          0LL,
          this);
        CProjectedShadowCaster::RequestRedraw(this);
      }
    }
  }
}
