/*
 * XREFs of McGenEventRegister @ 0x140181E5C
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x140817738 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x1409C9614 (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
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
