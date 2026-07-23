/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x18007EBE0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  NTSTATUS v4; // eax
  void *v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = sub_18001C4DC((unsigned __int64)BaseOfImage, MappedAsImage, DirectoryEntry, Size, v7);
  v5 = (void *)v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
