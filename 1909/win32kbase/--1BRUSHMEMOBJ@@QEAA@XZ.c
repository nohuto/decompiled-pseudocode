/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C000EC68
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C000EC00 (hCreateSolidBrushInternal.c)
 *     GreCreatePatternBrushInternal @ 0x1C008CCA0 (GreCreatePatternBrushInternal.c)
 *     bInitBrush @ 0x1C0263080 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0263128 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteBrush @ 0x1C000DDC0 (bDeleteBrush.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx((struct OBJECT *)v2);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**this, 0);
    *this = 0LL;
  }
}
