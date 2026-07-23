/*
 * XREFs of ZwInitializeEnclave @ 0x1401BA1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
