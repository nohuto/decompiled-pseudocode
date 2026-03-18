/*
 * XREFs of MiInitializeImageExtents @ 0x140852EE4
 * Callers:
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 * Callees:
 *     MiDeleteSegmentPages @ 0x140094E38 (MiDeleteSegmentPages.c)
 *     MiGetCommittedPages @ 0x140095894 (MiGetCommittedPages.c)
 *     MiAllocateFileExtents @ 0x1408521D0 (MiAllocateFileExtents.c)
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
      MiDeleteSegmentPages((__int64)a1);
      if ( CommittedPages )
        *(_QWORD *)(*a1 + 16LL) = CommittedPages;
      return (unsigned int)FileExtents;
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  return (unsigned int)FileExtents;
}
