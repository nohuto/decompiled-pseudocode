/*
 * XREFs of ndisReferenceDriver @ 0x1C00151A8
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00F1380 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisNotifyMiniports @ 0x1C010C298 (ndisNotifyMiniports.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 */

__int64 __fastcall ndisReferenceDriver(__int64 a1)
{
  return ndisReferenceRefEx((PKSPIN_LOCK)(a1 + 392));
}
