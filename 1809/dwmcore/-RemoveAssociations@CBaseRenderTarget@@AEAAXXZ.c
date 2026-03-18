/*
 * XREFs of ?RemoveAssociations@CBaseRenderTarget@@AEAAXXZ @ 0x1800DAED8
 * Callers:
 *     ??1CHwSurfaceRenderTarget@@MEAA@XZ @ 0x1800DA954 (--1CHwSurfaceRenderTarget@@MEAA@XZ.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800DADCC (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?PrepareForReuse@CBaseRenderTarget@@UEAAXXZ @ 0x1802013C0 (-PrepareForReuse@CBaseRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D62C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTrea.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180067248 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?RemoveRenderTargetMapEntry@CWindowBackgroundTreatment@@QEAAXPEAVIRenderTarget@@@Z @ 0x1801C0338 (-RemoveRenderTargetMapEntry@CWindowBackgroundTreatment@@QEAAXPEAVIRenderTarget@@@Z.c)
 */

void __fastcall CBaseRenderTarget::RemoveAssociations(CBaseRenderTarget *this)
{
  char *v1; // rdi
  char *i; // rbx
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 120;
  for ( i = (char *)*((_QWORD *)this + 15); i != v1; i = *(char **)i )
  {
    *((_QWORD *)i + 2) = 0LL;
    detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((_QWORD *)i + 3);
  }
  v4 = (__int64 *)*((_QWORD *)this + 18);
  v5 = *v4;
  v6 = *v4;
  while ( (__int64 *)v5 != v4 )
  {
    CWindowBackgroundTreatment::RemoveRenderTargetMapEntry(*(CWindowBackgroundTreatment **)(v5 + 32), this);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>,std::_Iterator_base0>::operator++(&v6);
    v5 = v6;
  }
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::clear((char *)this + 144);
}
