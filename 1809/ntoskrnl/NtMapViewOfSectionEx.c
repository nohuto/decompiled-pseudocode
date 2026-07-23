/*
 * XREFs of NtMapViewOfSectionEx @ 0x1406CBE10
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x140677DD0 (MiMapViewOfSectionExCommon.c)
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
           (__int64)SectionHandle,
           (ULONG_PTR)ProcessHandle,
           0,
           (__int64 *)BaseAddress,
           SectionOffset,
           ViewSize,
           AllocationType,
           PageProtection,
           (unsigned __int64 *)ExtendedParameters,
           ExtendedParameterCount,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode,
           0);
}
