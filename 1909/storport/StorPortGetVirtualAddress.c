/*
 * XREFs of StorPortGetVirtualAddress @ 0x1C003C8A0
 * Callers:
 *     StorPortGetVirtualAddressVrfy @ 0x1C00783F0 (StorPortGetVirtualAddressVrfy.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall StorPortGetVirtualAddress(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return MmGetVirtualForPhysical(a2);
}
