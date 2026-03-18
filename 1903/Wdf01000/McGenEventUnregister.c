/*
 * XREFs of McGenEventUnregister @ 0x1C004364C
 * Callers:
 *     FxLibraryCommonDecommission @ 0x1C0042BE4 (FxLibraryCommonDecommission.c)
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
