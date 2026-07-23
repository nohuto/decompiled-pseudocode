/*
 * XREFs of ZwInitializeNlsFiles @ 0x1401C2B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BaseAddress);
}
