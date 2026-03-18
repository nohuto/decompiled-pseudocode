/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0050160
 * Callers:
 *     bInitBrush @ 0x1C0263080 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0263128 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C0265474 (bInitBMOBJ.c)
 *     bInitICM @ 0x1C02654C8 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C02657B0 (bInitPALOBJ.c)
 * Callees:
 *     HmgModifyHandleType @ 0x1C00503D0 (HmgModifyHandleType.c)
 */

__int64 __fastcall bSetStockObject(unsigned __int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  void *v5; // r9

  v3 = 0;
  if ( a1 )
  {
    v5 = (void *)(a1 | 0x800000);
    if ( a3 )
      gahStockObjects96[a2] = v5;
    else
      gahStockObjects[a2] = v5;
    HmgModifyHandleType(v5);
  }
  LOBYTE(v3) = a1 != 0;
  return v3;
}
