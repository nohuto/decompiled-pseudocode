/*
 * XREFs of ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x1800042E0
 * Callers:
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180002F58 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180003AD8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800317B0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEAVIRenderTarget@@@Z @ 0x180003418 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WR.c)
 *     ?GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z @ 0x180004360 (-GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CWindowBackgroundTreatment::HasValidSource(
        CWindowBackgroundTreatment *this,
        const struct IRenderTarget *a2)
{
  CWindowBackgroundTreatment *v3; // rcx
  CWindowBackgroundTreatment *i; // rax
  bool v6; // zf
  struct IRenderTarget *ConsistentIRenderTargetNoRef; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 359) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 48LL))(
           *((_QWORD *)this + 8),
           19LL) )
    {
      return 1;
    }
    v6 = *((_QWORD *)this + 17) == 0LL;
    return !v6;
  }
  if ( *((_QWORD *)this + 11) )
  {
    v3 = (CWindowBackgroundTreatment *)*((_QWORD *)this + 10);
    for ( i = *(CWindowBackgroundTreatment **)v3; i != v3; i = *(CWindowBackgroundTreatment **)i )
    {
      if ( !*((_QWORD *)i + 3) )
        return 0;
    }
    if ( !a2 )
      return 1;
    ConsistentIRenderTargetNoRef = CWindowBackgroundTreatment::GetConsistentIRenderTargetNoRef(v3, a2);
    std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::lower_bound(
      (__int64)this + 72,
      &v8,
      (const unsigned __int8 *)&ConsistentIRenderTargetNoRef);
    v6 = v8 == *((_QWORD *)this + 10);
    return !v6;
  }
  return 0;
}
