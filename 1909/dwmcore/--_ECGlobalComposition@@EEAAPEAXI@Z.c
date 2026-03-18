/*
 * XREFs of ??_ECGlobalComposition@@EEAAPEAXI@Z @ 0x1801A1E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801753B4 (--1CComposition@@MEAA@XZ.c)
 */

CGlobalComposition *__fastcall CGlobalComposition::`vector deleting destructor'(
        CGlobalComposition *this,
        char a2,
        __int64 a3)
{
  CDirtyRegion *v5; // rcx

  *(_QWORD *)this = &CGlobalComposition::`vftable';
  v5 = (CDirtyRegion *)*((_QWORD *)this + 166);
  if ( v5 )
    CDirtyRegion::Release(v5);
  CComposition::~CComposition(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
