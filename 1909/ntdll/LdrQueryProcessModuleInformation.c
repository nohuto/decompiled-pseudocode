/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x1800026E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x1800758A4 (LdrQueryProcessModuleInformationEx.c)
 */

NTSTATUS __cdecl LdrQueryProcessModuleInformation(
        PRTL_PROCESS_MODULES ModuleInformation,
        ULONG Size,
        PULONG ReturnedSize)
{
  return LdrQueryProcessModuleInformationEx(0, 2, (_DWORD)ModuleInformation, Size, (__int64)ReturnedSize);
}
