/*
 * XREFs of ??_GCGenericInkTipPointSource@@EEAAPEAXI@Z @ 0x180198B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
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
