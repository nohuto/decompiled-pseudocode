/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x1800026E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180075424 @ 0x180075424 (sub_180075424.c)
 */

NTSTATUS __cdecl LdrQueryProcessModuleInformation(
        PRTL_PROCESS_MODULES ModuleInformation,
        ULONG Size,
        PULONG ReturnedSize)
{
  return sub_180075424(0, 2, (_DWORD)ModuleInformation, Size, (__int64)ReturnedSize);
}
