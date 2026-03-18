/*
 * XREFs of ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180046F4C
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180046554 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x1800C80F0 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800CBCB8 (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
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
  operator delete(this, 0x18uLL);
  return this;
}
