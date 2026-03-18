/*
 * XREFs of ?RemoveAssociations@CBaseRenderTarget@@AEAAXXZ @ 0x180047638
 * Callers:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x180047548 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ??1CHwSurfaceRenderTarget@@MEAA@XZ @ 0x1800B4360 (--1CHwSurfaceRenderTarget@@MEAA@XZ.c)
 *     ?PrepareForReuse@CBaseRenderTarget@@UEAAXXZ @ 0x180162560 (-PrepareForReuse@CBaseRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEAVIRenderTarget@@@Z @ 0x180017AF4 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetIma_ea_180017AF4.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18001F304 (-erase@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Micr.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001F67C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTrea.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18004D25C (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseRenderTarget::RemoveAssociations(CBaseRenderTarget *this)
{
  char *v1; // rdi
  char *i; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  CBaseRenderTarget *v10; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v11; // [rsp+70h] [rbp+18h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  v1 = (char *)this + 56;
  for ( i = (char *)*((_QWORD *)this + 7); i != v1; i = *(char **)i )
  {
    *((_QWORD *)i + 2) = 0LL;
    if ( (__int64)(*((_QWORD *)i + 4) - *((_QWORD *)i + 3)) >> 4 )
      detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region();
  }
  v4 = (__int64 *)*((_QWORD *)this + 10);
  v5 = *v4;
  v9 = *v4;
  while ( (__int64 *)v5 != v4 )
  {
    v6 = *(_QWORD *)(v5 + 32);
    v10 = this;
    std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::lower_bound(
      v6 + 72,
      (__int64)&v11,
      (unsigned __int8 *)&v10);
    v7 = v11;
    if ( v11 != *(_QWORD **)(v6 + 80) )
    {
      v8 = v11[3];
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v8 + 96) + 32LL))(v8 + 96, v6 + 56);
      std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::erase(
        (_QWORD *)(v6 + 72),
        (__int64)&v12,
        v7);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>,std::_Iterator_base0>::operator++(&v9);
    v5 = v9;
  }
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::clear((char *)this + 80);
}
