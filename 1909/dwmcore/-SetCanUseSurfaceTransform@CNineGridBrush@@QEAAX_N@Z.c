/*
 * XREFs of ?SetCanUseSurfaceTransform@CNineGridBrush@@QEAAX_N@Z @ 0x1801E6DA8
 * Callers:
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801EFF00 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CNineGridBrush::SetCanUseSurfaceTransform(CNineGridBrush *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 145) != 1 )
  {
    v1 = *(_QWORD *)this;
    *((_BYTE *)this + 145) = 1;
    (*(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(v1 + 64))(this, 6LL, this);
  }
}
