/*
 * XREFs of _PnpCtxRegEnumKey @ 0x14073C3B0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181D80 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x1409F529C (PipHardwareConfigExists.c)
 *     PipCommitPendingOsExtensionResource @ 0x1409F5A60 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1409F5C70 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x1409F6000 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x1406F97E8 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, unsigned int *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
