/*
 * XREFs of VfDriverInitStarting @ 0x14092237C
 * Callers:
 *     MmCallDllInitialize @ 0x14071C99C (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x1409CC918 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
