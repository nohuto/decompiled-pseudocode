/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00C8310
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C01F35BC (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01F39FC (bInitBrush.c)
 *     bInitPALOBJ @ 0x1C01F3AA0 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1C01F3D5C (bInitBMOBJ.c)
 *     bInitICM @ 0x1C01F3DF8 (bInitICM.c)
 * Callees:
 *     HmgModifyHandleType @ 0x1C0065050 (HmgModifyHandleType.c)
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
    HmgModifyHandleType((__int64)v5);
  }
  LOBYTE(v3) = a1 != 0;
  return v3;
}
