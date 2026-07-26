/*
 * XREFs of ndisOidPrePMHardwareCapabilities @ 0x1C00743E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidPrePMCapabilities @ 0x1C0074164 (ndisOidPrePMCapabilities.c)
 */

unsigned __int8 __fastcall ndisOidPrePMHardwareCapabilities(__int64 *a1)
{
  return ndisOidPrePMCapabilities(a1, 1);
}
