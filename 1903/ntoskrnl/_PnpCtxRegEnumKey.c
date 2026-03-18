/*
 * XREFs of _PnpCtxRegEnumKey @ 0x14077AFE4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197780 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x140A3A868 (PipHardwareConfigExists.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A3B070 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A3B280 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A3B610 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x140714FB0 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, unsigned int *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
