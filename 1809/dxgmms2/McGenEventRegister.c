/*
 * XREFs of McGenEventRegister @ 0x1C00186B4
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0087578 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
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
