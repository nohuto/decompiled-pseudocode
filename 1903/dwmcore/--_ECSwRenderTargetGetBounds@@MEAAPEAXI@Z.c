/*
 * XREFs of ??_ECSwRenderTargetGetBounds@@MEAAPEAXI@Z @ 0x1800D3F50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CSwRenderTargetGetBounds *__fastcall CSwRenderTargetGetBounds::`vector deleting destructor'(
        CSwRenderTargetGetBounds *this,
        char a2)
{
  *((_QWORD *)this + 2) = &CSwRenderTargetGetBounds::`vftable'{for `IRenderTargetBounds'};
  *((_QWORD *)this + 3) = &CSwRenderTargetGetBounds::`vftable'{for `ID2DContext'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
