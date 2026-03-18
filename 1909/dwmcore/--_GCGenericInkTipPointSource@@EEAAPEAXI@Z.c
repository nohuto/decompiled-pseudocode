/*
 * XREFs of ??_GCGenericInkTipPointSource@@EEAAPEAXI@Z @ 0x1802133D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

CGenericInkTipPointSource *__fastcall CGenericInkTipPointSource::`scalar deleting destructor'(
        CGenericInkTipPointSource *this,
        char a2)
{
  void *v4; // rcx
  CGdiSpriteBitmap *v5; // rcx

  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
    operator delete(v4);
  v5 = (CGdiSpriteBitmap *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    CGdiSpriteBitmap::Release(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
