/*
 * XREFs of ??_GCRadialGradientBrush@@UEAAPEAXI@Z @ 0x18019DFD0
 * Callers:
 *     ??_ECRadialGradientBrush@@WFA@EAAPEAXI@Z @ 0x1800F0C90 (--_ECRadialGradientBrush@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x18001F070 (--1CGradientBrush@@MEAA@XZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CRadialGradientBrush *__fastcall CRadialGradientBrush::`scalar deleting destructor'(
        CRadialGradientBrush *this,
        char a2)
{
  CDirtyRegion *v4; // rcx

  v4 = (CDirtyRegion *)*((_QWORD *)this + 23);
  if ( v4 )
    CDirtyRegion::Release(v4);
  CGradientBrush::~CGradientBrush((struct CResource **)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
