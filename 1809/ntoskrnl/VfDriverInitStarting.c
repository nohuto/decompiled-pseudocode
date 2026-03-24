/*
 * XREFs of VfDriverInitStarting @ 0x14092137C
 * Callers:
 *     MmCallDllInitialize @ 0x14071B6FC (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x1409CB918 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
