/*
 * XREFs of McGenEventRegister @ 0x140181D1C
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x140816538 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x1409C8614 (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1406BE540 (EtwRegister.c)
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
