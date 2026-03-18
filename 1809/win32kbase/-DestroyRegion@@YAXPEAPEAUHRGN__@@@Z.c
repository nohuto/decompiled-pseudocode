/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0042728
 * Callers:
 *     CleanupGDI @ 0x1C00423AC (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 *     GreSetRegionOwner @ 0x1C001E100 (GreSetRegionOwner.c)
 */

void __fastcall DestroyRegion(HRGN *a1)
{
  HRGN v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, 0x80000002);
    GreDeleteObject(*a1);
    *a1 = 0LL;
  }
}
