/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0053568
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C0052520 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C0053500 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C0268C50 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0268CF8 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     bDeleteBrush @ 0x1C0052910 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx((struct OBJECT *)v2, 0LL);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**this, 0);
    *this = 0LL;
  }
}
