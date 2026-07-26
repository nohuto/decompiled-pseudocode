/*
 * XREFs of ndisReadNDKGlobalFlags @ 0x1C011A1EC
 * Callers:
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 * Callees:
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107B90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 */

__int64 __fastcall ndisReadNDKGlobalFlags(struct _DRIVER_OBJECT *a1)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[0] = L"NetworkDirectGlobalFlags";
  v2[1] = &NdkGlobalFlags;
  v2[2] = 0LL;
  ndisReadRegistryKnobs(a1, (const struct NDIS_REGISTRY_KNOB *)v2, 1uLL);
  return NdkGlobalFlags;
}
