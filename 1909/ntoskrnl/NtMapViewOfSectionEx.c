/*
 * XREFs of NtMapViewOfSectionEx @ 0x1406EB3D0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x14067E25C (MiMapViewOfSectionExCommon.c)
 */

NTSTATUS __cdecl NtMapViewOfSectionEx(
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
  return MiMapViewOfSectionExCommon(
           SectionHandle,
           ProcessHandle,
           0,
           BaseAddress,
           (PVOID *)SectionOffset,
           ViewSize,
           AllocationType,
           PageProtection,
           (__int64 *)ExtendedParameters,
           ExtendedParameterCount,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode,
           0);
}
