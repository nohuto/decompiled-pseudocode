/*
 * XREFs of ndisOidPrePMHardwareCapabilities @ 0x1C00E6C10
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidPrePMCapabilities @ 0x1C00E6A44 (ndisOidPrePMCapabilities.c)
 */

unsigned __int8 __fastcall ndisOidPrePMHardwareCapabilities(__int64 a1)
{
  return ndisOidPrePMCapabilities(a1, 1);
}
