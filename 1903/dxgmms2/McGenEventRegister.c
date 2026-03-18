/*
 * XREFs of McGenEventRegister @ 0x1C0017B64
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C008AD84 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  ULONG result; // eax

  result = 0;
  if ( !DxgkControlGuid_Context )
    return EtwRegister(&DxgkControlGuid, McGenControlCallbackV2, &DxgkControlGuid_Context, &DxgkControlGuid_Context);
  return result;
}
