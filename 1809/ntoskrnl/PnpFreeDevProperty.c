/*
 * XREFs of PnpFreeDevProperty @ 0x1405954EC
 * Callers:
 *     PnpFreeDevPropertyArray @ 0x140595490 (PnpFreeDevPropertyArray.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1406D98B0 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqActionDataGetChangedProperties @ 0x1406DB244 (PiDqActionDataGetChangedProperties.c)
 *     PnpCopyDevProperty @ 0x14075032C (PnpCopyDevProperty.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDevProperty(__int64 a1, ULONG a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = *(void **)(a1 + 24);
  if ( v4 )
    ExFreePoolWithTag(v4, a2);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
    ExFreePoolWithTag(v5, a2);
}
