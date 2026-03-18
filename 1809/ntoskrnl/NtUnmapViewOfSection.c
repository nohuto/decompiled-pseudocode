/*
 * XREFs of NtUnmapViewOfSection @ 0x140617070
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSectionEx @ 0x1406170E0 (NtUnmapViewOfSectionEx.c)
 */

NTSTATUS __stdcall NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  return NtUnmapViewOfSectionEx(ProcessHandle, BaseAddress, 0LL);
}
