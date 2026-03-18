/*
 * XREFs of bInitBMOBJ @ 0x1C0268670
 * Callers:
 *     InitializeGre @ 0x1C0266080 (InitializeGre.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     HmgSetOwner @ 0x1C002A580 (HmgSetOwner.c)
 *     GreCreateBitmap @ 0x1C002CF20 (GreCreateBitmap.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0083350 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 bInitBMOBJ()
{
  unsigned int v0; // edi
  __int64 result; // rax
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  SURFACE *v4; // rbx

  v0 = 0;
  result = GreCreateBitmap(1, 1, 1u, 1u, 0LL);
  v2 = result;
  if ( result )
  {
    v3 = HmgShareLockCheck(result, 5);
    v4 = (SURFACE *)v3;
    if ( v3 )
    {
      HmgSetOwner(*(_QWORD *)(v3 + 32), 0, 5);
      bSetStockObject(v2, 21, 0);
      *((_QWORD *)v4 + 4) = v2 | 0x800000;
      SURFACE::pdibDefault = v4;
      v0 = 1;
      HmgDecrementShareReferenceCountEx(v4, 0LL);
    }
    return v0;
  }
  return result;
}
