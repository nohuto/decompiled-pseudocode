/*
 * XREFs of ??_ECDXGIEnumeration@@MEAAPEAXI@Z @ 0x1800A8760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CDXGIEnumeration@@MEAA@XZ @ 0x1800A8664 (--1CDXGIEnumeration@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CDXGIEnumeration *__fastcall CDXGIEnumeration::`vector deleting destructor'(CDXGIEnumeration *this, char a2)
{
  CDXGIEnumeration::~CDXGIEnumeration(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
