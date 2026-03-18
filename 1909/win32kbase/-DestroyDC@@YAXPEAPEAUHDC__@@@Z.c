/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00B45CC
 * Callers:
 *     CleanupGDI @ 0x1C00B4220 (CleanupGDI.c)
 * Callees:
 *     bDeleteDCInternal @ 0x1C0010100 (bDeleteDCInternal.c)
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  __int64 v2; // rcx

  v2 = (__int64)*a1;
  if ( v2 )
  {
    GreSetDCOwnerEx(v2, 0x80000002, 0, 0);
    bDeleteDCInternal((__int64)*a1, 1, 0, 0);
    *a1 = 0LL;
  }
}
