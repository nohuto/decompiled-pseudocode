/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00B7078
 * Callers:
 *     CleanupGDI @ 0x1C00B6D00 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C0016C60 (GreDeleteObject.c)
 *     GreSetRegionOwner @ 0x1C002A520 (GreSetRegionOwner.c)
 */

void __fastcall DestroyRegion(HPALETTE *a1)
{
  HPALETTE v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, 0x80000002);
    GreDeleteObject(*a1);
    *a1 = 0LL;
  }
}
