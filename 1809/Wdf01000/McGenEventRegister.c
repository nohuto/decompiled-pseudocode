/*
 * XREFs of McGenEventRegister @ 0x1C004449C
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C0043B7C (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventRegister(
        const _GUID *CallbackContext,
        void (__fastcall *RegHandle)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *),
        void *ProviderId,
        unsigned __int64 *EnableCallback)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*EnableCallback )
    return EtwRegister(&KMDF_PERF_PROVIDER, (PETWENABLECALLBACK)McGenControlCallbackV2, ProviderId, EnableCallback);
  return result;
}
