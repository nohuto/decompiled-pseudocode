/*
 * XREFs of McGenEventUnregister @ 0x1C00444CC
 * Callers:
 *     FxLibraryCommonDecommission @ 0x1C0043A5C (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventUnregister(unsigned __int64 *RegHandle)
{
  NTSTATUS result; // eax

  if ( !KMDF_PERF_PROVIDER_Context.RegistrationHandle )
    return 0;
  result = EtwUnregister(KMDF_PERF_PROVIDER_Context.RegistrationHandle);
  KMDF_PERF_PROVIDER_Context.RegistrationHandle = 0LL;
  return result;
}
