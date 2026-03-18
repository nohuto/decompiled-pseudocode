/*
 * XREFs of ACPIEcInstallOpRegionHandler @ 0x1C00AE4E0
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0053890 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     RegisterOperationRegionHandler @ 0x1C0090070 (RegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIEcInstallOpRegionHandler(__int64 a1)
{
  return RegisterOperationRegionHandler(
           *(__int64 **)(a1 + 56),
           2,
           3u,
           (__int64)ACPIEcOpRegionHandler,
           a1,
           (unsigned int **)(a1 + 80));
}
