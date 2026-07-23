/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x18007EF00
 * Callers:
 *     sub_18007ED94 @ 0x18007ED94 (sub_18007ED94.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl LdrSetDefaultDllDirectories(ULONG DirectoryFlags)
{
  if ( !DirectoryFlags || ((~((dword_180162714 & 4 | 0x7A) << 8) | 0x100) & DirectoryFlags) != 0 )
    return -1073741811;
  dword_18016601C = DirectoryFlags;
  return 0;
}
