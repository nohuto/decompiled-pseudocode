/*
 * XREFs of ??_GCCompositionSkyBoxBrush@@UEAAPEAXI@Z @ 0x1801D1080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x1801D1020 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 */

CCompositionSkyBoxBrush *__fastcall CCompositionSkyBoxBrush::`scalar deleting destructor'(
        CCompositionSkyBoxBrush *this,
        char a2)
{
  CCompositionSkyBoxBrush::~CCompositionSkyBoxBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
