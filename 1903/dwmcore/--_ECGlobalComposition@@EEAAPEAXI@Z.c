/*
 * XREFs of ??_ECGlobalComposition@@EEAAPEAXI@Z @ 0x1801A36C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180176B24 (--1CComposition@@MEAA@XZ.c)
 */

CGlobalComposition *__fastcall CGlobalComposition::`vector deleting destructor'(CGlobalComposition *this, char a2)
{
  CDirtyRegion *v4; // rcx

  *(_QWORD *)this = &CGlobalComposition::`vftable';
  v4 = (CDirtyRegion *)*((_QWORD *)this + 166);
  if ( v4 )
    CDirtyRegion::Release(v4);
  CComposition::~CComposition(this, a2);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
