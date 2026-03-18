/*
 * XREFs of MiInitializeImageExtents @ 0x14088C1E0
 * Callers:
 *     MiCreateImageFileMap @ 0x140645C84 (MiCreateImageFileMap.c)
 * Callees:
 *     MiGetCommittedPages @ 0x1400716F8 (MiGetCommittedPages.c)
 *     MiDeleteSegmentPages @ 0x1400BF0E4 (MiDeleteSegmentPages.c)
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiInitializeImageExtents(_QWORD *a1)
{
  ULONG_PTR v2; // rbx
  int FileExtents; // esi
  __int64 CommittedPages; // rbx

  v2 = (ULONG_PTR)(a1 + 16);
  FileExtents = 0;
  while ( v2 )
  {
    FileExtents = MiAllocateFileExtents(v2, 0, *(_QWORD *)(v2 + 8), *(_DWORD *)(v2 + 44), 0);
    if ( FileExtents < 0 )
    {
      CommittedPages = MiGetCommittedPages(a1);
      if ( CommittedPages )
        *(_QWORD *)(*a1 + 16LL) = 0LL;
      MiDeleteSegmentPages(a1);
      if ( CommittedPages )
        *(_QWORD *)(*a1 + 16LL) = CommittedPages;
      return (unsigned int)FileExtents;
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  return (unsigned int)FileExtents;
}
