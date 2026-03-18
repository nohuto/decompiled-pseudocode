/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00B70AC
 * Callers:
 *     CleanupGDI @ 0x1C00B6D00 (CleanupGDI.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     bDeleteDCInternal @ 0x1C0064FC0 (bDeleteDCInternal.c)
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
