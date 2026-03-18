/*
 * XREFs of MiCacheImageSymbols @ 0x14070FB68
 * Callers:
 *     MiDriverLoadSucceeded @ 0x14070E4FC (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400AFB30 (RtlImageDirectoryEntryToData.c)
 */

PVOID __fastcall MiCacheImageSymbols(void *a1)
{
  ULONG Size; // [rsp+48h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1u, 6u, &Size);
}
