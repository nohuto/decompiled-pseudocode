/*
 * XREFs of ZwMapViewOfSectionEx @ 0x1401C22B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapViewOfSectionEx(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
