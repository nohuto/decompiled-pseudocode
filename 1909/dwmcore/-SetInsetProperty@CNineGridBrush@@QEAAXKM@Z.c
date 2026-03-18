/*
 * XREFs of ?SetInsetProperty@CNineGridBrush@@QEAAXKM@Z @ 0x1800A25F4
 * Callers:
 *     ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x1800A25B0 (-ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SE.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801EFF00 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@.c)
 * Callees:
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x1800A2644 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CNineGridBrush::SetInsetProperty(CNineGridBrush *this, unsigned int a2, float a3)
{
  float *InsetFieldPointer; // rax
  CResource *v5; // rcx
  unsigned int v6; // r8d

  InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(this, a2);
  if ( a3 != *InsetFieldPointer )
  {
    *InsetFieldPointer = a3;
    CResource::InvalidateAnimationSources(v5, v6);
    (*(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(*(_QWORD *)this + 64LL))(this, 6LL, this);
  }
}
