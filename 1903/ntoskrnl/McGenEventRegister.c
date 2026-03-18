/*
 * XREFs of McGenEventRegister @ 0x140189710
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x140850058 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x1409F83BC (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
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
