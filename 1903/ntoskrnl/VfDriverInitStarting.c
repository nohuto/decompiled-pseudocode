/*
 * XREFs of VfDriverInitStarting @ 0x14095FED4
 * Callers:
 *     MmCallDllInitialize @ 0x1407441F0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140A11064 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
