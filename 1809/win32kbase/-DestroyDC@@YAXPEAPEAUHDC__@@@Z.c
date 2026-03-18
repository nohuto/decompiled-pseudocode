/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C004275C
 * Callers:
 *     CleanupGDI @ 0x1C00423AC (CleanupGDI.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     bDeleteDCInternal @ 0x1C00427D0 (bDeleteDCInternal.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  __int64 v2; // rcx

  v2 = (__int64)*a1;
  if ( v2 )
  {
    GreSetDCOwnerEx(v2, 0x80000002, 0, 1);
    bDeleteDCInternal(*a1, 1LL, 0LL, 0LL);
    *a1 = 0LL;
  }
}
