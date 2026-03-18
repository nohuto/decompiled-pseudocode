/*
 * XREFs of McGenEventRegister @ 0x140189CC0
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x14084F758 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x1409F82CC (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  ULONG result; // eax

  result = 0;
  if ( !*RegHandle )
    return EtwRegister(ProviderId, McGenControlCallbackV2, CallbackContext, RegHandle);
  return result;
}
