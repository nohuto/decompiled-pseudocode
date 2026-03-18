/*
 * XREFs of bInitBMOBJ @ 0x1C021A780
 * Callers:
 *     InitializeGre @ 0x1C021A080 (InitializeGre.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0042AE0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     GreCreateBitmap @ 0x1C0043DF0 (GreCreateBitmap.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0044A78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

HSURF bInitBMOBJ()
{
  unsigned int v0; // ebx
  HSURF result; // rax
  unsigned __int64 v2; // rdi
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v4; // [rsp+50h] [rbp-18h]

  v0 = 0;
  result = (HSURF)GreCreateBitmap(1, 1, 1u, 1u, 0LL);
  v2 = (unsigned __int64)result;
  if ( result )
  {
    SURFREF::SURFREF((SURFREF *)v3, result);
    if ( v4 )
    {
      HmgSetOwner(v4[4], 0, 5);
      bSetStockObject(v2, 21, 0);
      v0 = 1;
      v4[4] = v2 | 0x800000;
      SURFACE::pdibDefault = (SURFACE *)v4;
    }
    SURFREF::~SURFREF((SURFREF *)v3);
    return (HSURF)v0;
  }
  return result;
}
