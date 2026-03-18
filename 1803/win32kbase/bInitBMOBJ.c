/*
 * XREFs of bInitBMOBJ @ 0x1C01F3D5C
 * Callers:
 *     InitializeGre @ 0x1C01F40E8 (InitializeGre.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     GreCreateBitmap @ 0x1C003D960 (GreCreateBitmap.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00C8310 (-bSetStockObject@@YAHPEAXHH@Z.c)
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
