/*
 * XREFs of ??_GCProxyGeometry@@MEAAPEAXI@Z @ 0x18019DF80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1801F31F4 (--1CProxyGeometry@@MEAA@XZ.c)
 */

CProxyGeometry *__fastcall CProxyGeometry::`scalar deleting destructor'(CProxyGeometry *this, char a2)
{
  CProxyGeometry::~CProxyGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
