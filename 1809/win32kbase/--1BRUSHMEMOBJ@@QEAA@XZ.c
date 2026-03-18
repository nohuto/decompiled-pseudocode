/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0043690
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C00434E0 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C0043620 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C021AB6C (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C021AC18 (bInitBRUSHOBJ.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(HBRUSH **this)
{
  HBRUSH *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT((struct OBJECT *)v2);
    if ( !*((_DWORD *)this + 12) )
      bDeleteBrush(**this);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 2);
}
