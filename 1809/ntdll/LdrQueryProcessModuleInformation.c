/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x180002A20
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x18007DA88 (LdrQueryProcessModuleInformationEx.c)
 */

NTSTATUS __cdecl LdrQueryProcessModuleInformation(
        PRTL_PROCESS_MODULES ModuleInformation,
        ULONG Size,
        PULONG ReturnedSize)
{
  return LdrQueryProcessModuleInformationEx(0, 2, (_DWORD)ModuleInformation, Size, (__int64)ReturnedSize);
}
