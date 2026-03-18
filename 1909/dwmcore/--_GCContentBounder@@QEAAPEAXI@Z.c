/*
 * XREFs of ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18002568C
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180023E30 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18002484C (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180024C68 (--1CDrawingContext@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
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
