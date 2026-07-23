/*
 * XREFs of LdrGetDllPath @ 0x180031F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031F48 @ 0x180031F48 (sub_180031F48.c)
 */

NTSTATUS __cdecl LdrGetDllPath(PCWSTR DllName, ULONG Flags, PWSTR *DllPath, PWSTR *SearchPaths)
{
  return sub_180031F48(DllName, 0LL, 0LL, (__int64)SearchPaths);
}
