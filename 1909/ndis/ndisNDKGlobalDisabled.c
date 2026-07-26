/*
 * XREFs of ndisNDKGlobalDisabled @ 0x1C0119D24
 * Callers:
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 * Callees:
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107B90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 */

bool __fastcall ndisNDKGlobalDisabled(struct _DRIVER_OBJECT *a1)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v2[0] = L"NetworkDirectDisable";
  v2[1] = &v3;
  v2[2] = 0LL;
  ndisReadRegistryKnobs(a1, (const struct NDIS_REGISTRY_KNOB *)v2, 1uLL);
  return v3 != 0;
}
