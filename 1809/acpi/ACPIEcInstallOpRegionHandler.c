/*
 * XREFs of ACPIEcInstallOpRegionHandler @ 0x1C00AAE18
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0051EE0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     RegisterOperationRegionHandler @ 0x1C009EB20 (RegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIEcInstallOpRegionHandler(__int64 a1)
{
  return RegisterOperationRegionHandler(
           *(__int64 **)(a1 + 56),
           2,
           3u,
           (__int64)ACPIEcOpRegionHandler,
           a1,
           (_QWORD *)(a1 + 80));
}
