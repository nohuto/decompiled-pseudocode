/*
 * XREFs of McGenEventRegister @ 0x140181CFC
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x140816558 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x1409C8614 (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1406BE560 (EtwRegister.c)
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
