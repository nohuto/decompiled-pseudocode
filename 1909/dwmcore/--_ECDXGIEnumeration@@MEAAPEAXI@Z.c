/*
 * XREFs of ??_ECDXGIEnumeration@@MEAAPEAXI@Z @ 0x180027680
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDXGIEnumeration@@MEAA@XZ @ 0x180027578 (--1CDXGIEnumeration@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
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
