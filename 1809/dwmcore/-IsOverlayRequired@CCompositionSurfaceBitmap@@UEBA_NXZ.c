/*
 * XREFs of ?IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800132A0
 * Callers:
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180012A50 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOverlayRequired(CCompositionSurfaceBitmap *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 144) + 64LL))(v3 + 144) )
    return *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) > 1u;
  return v2;
}
