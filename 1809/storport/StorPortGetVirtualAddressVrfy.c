/*
 * XREFs of StorPortGetVirtualAddressVrfy @ 0x1C00773F0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetVirtualAddress @ 0x1C003ED90 (StorPortGetVirtualAddress.c)
 */

PVOID __fastcall StorPortGetVirtualAddressVrfy(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return StorPortGetVirtualAddress(a1, a2);
}
