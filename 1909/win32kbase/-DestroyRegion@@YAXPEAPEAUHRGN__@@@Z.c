/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00B4598
 * Callers:
 *     CleanupGDI @ 0x1C00B4220 (CleanupGDI.c)
 * Callees:
 *     GreSetRegionOwner @ 0x1C00161A0 (GreSetRegionOwner.c)
 *     GreDeleteObject @ 0x1C0018180 (GreDeleteObject.c)
 */

void __fastcall DestroyRegion(HRGN *a1)
{
  struct HOBJ__ *v2; // rcx
  __int64 v3; // rdx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, 0x80000002);
    GreDeleteObject((struct HOBJ__ *)*a1, v3);
    *a1 = 0LL;
  }
}
