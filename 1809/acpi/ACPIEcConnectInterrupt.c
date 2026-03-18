/*
 * XREFs of ACPIEcConnectInterrupt @ 0x1C00AABC4
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0051EE0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     ACPIEcConnectGpeVector @ 0x1C00AAAC4 (ACPIEcConnectGpeVector.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C00AAB00 (ACPIEcConnectGpioInterrupt.c)
 */

NTSTATUS __fastcall ACPIEcConnectInterrupt(char *a1)
{
  if ( a1[805] )
    return ACPIEcConnectGpioInterrupt(a1);
  else
    return ACPIEcConnectGpeVector((__int64)a1);
}
