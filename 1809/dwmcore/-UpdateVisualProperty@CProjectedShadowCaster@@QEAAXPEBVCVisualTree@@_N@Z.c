/*
 * XREFs of ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x1801AE514
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800753F0 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180067D14 (-IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x1801ACC54 (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEBVCVisualTree@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEBVCVisualTree@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801ACC88 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEBVCVisualTree@@@2@V-$tuple@$$V@2@@-.c)
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1801ACF08 (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 */

void __fastcall CProjectedShadowCaster::UpdateVisualProperty(
        CProjectedShadowCaster *this,
        const struct CVisualTree *a2,
        char a3)
{
  __int64 *v5; // rax
  __int64 *v6; // r9
  unsigned __int64 v7; // r10
  __int64 *v8; // rbx
  unsigned __int64 v9; // rcx
  float v10; // xmm0_4
  char IsVisibleInTree; // al
  char v12; // cl
  CVisualTree **v13; // [rsp+50h] [rbp+8h] BYREF
  CVisualTree *v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = a2;
  v5 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
         (__int64 *)this + 12,
         &v14);
  v8 = v5;
  if ( v5 == (__int64 *)*v6 || v7 < v5[4] )
  {
    v13 = &v14;
    v8 = (__int64 *)*std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CVisualTree const * const &>,std::tuple<>>(
                       v6,
                       &v15,
                       (__int64)v5,
                       (__int64)v6,
                       &v13);
  }
  v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 368LL);
  if ( v8[6] < v9 )
  {
    v8[6] = v9;
    v10 = CProjectedShadowCaster::ComputeEffectiveAlpha(this, v14, (bool *)&v13);
    IsVisibleInTree = CVisualTree::IsVisibleInTree((const struct CVisual **)v14, *((const struct CVisual **)this + 7));
    v12 = (char)v13;
    if ( *((float *)v8 + 10) != v10 || *((_BYTE *)v8 + 56) != (_BYTE)v13 || *((_BYTE *)v8 + 57) != IsVisibleInTree )
    {
      *((float *)v8 + 10) = v10;
      *((_BYTE *)v8 + 56) = v12;
      *((_BYTE *)v8 + 57) = IsVisibleInTree;
      if ( !a3 )
        (*(void (__fastcall **)(CProjectedShadowCaster *, __int64))(*(_QWORD *)this + 64LL))(this, 6LL);
    }
  }
}
