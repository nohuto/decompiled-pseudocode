/*
 * XREFs of ??_GCGenericInk@@UEAAPEAXI@Z @ 0x18019F000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CGenericInk@@UEAA@XZ @ 0x180214A1C (--1CGenericInk@@UEAA@XZ.c)
 */

CGenericInk *__fastcall CGenericInk::`scalar deleting destructor'(CGenericInk *this, char a2)
{
  CGenericInk::~CGenericInk(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
