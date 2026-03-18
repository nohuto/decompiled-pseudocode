/*
 * XREFs of PnpFreeDevProperty @ 0x1405BAFB8
 * Callers:
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1405B76F4 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpFreeDevPropertyArray @ 0x1405BAF5C (PnpFreeDevPropertyArray.c)
 *     PiDqActionDataGetChangedProperties @ 0x14071DE78 (PiDqActionDataGetChangedProperties.c)
 *     PnpCopyDevProperty @ 0x140774F10 (PnpCopyDevProperty.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
