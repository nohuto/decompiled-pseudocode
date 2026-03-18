/*
 * XREFs of ACPIEcConnectGpeVector @ 0x1C00AE1B4
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C00241C8 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcConnectInterrupt @ 0x1C00AE2B4 (ACPIEcConnectInterrupt.c)
 * Callees:
 *     ACPIVectorConnect @ 0x1C00606B0 (ACPIVectorConnect.c)
 */

__int64 __fastcall ACPIEcConnectGpeVector(__int64 a1)
{
  return ACPIVectorConnect(0LL, *(_DWORD *)(a1 + 48), 1, 0, (__int64)ACPIEcGpeServiceRoutine, a1, (char **)(a1 + 72));
}
