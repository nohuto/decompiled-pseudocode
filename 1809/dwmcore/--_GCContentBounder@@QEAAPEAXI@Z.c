/*
 * XREFs of ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18008F704
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18008B940 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18008EBFC (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x1800C2B80 (--1CDrawingContext@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CContentBounder *__fastcall CContentBounder::`scalar deleting destructor'(CContentBounder *this)
{
  __int64 v2; // rcx
  CGdiSpriteBitmap *v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(v2 + 16));
  v3 = (CGdiSpriteBitmap *)*((_QWORD *)this + 2);
  if ( v3 )
    CGdiSpriteBitmap::Release(v3);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
