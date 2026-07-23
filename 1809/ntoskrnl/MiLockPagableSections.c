/*
 * XREFs of MiLockPagableSections @ 0x1409BDE2C
 * Callers:
 *     MiCancelPhase0Locking @ 0x140654CCC (MiCancelPhase0Locking.c)
 *     MiUnlockBootPageSections @ 0x1409BDD50 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x1409BDDDC (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     MmLockPagableDataSection @ 0x140652820 (MmLockPagableDataSection.c)
 *     MiImagePagable @ 0x140654D40 (MiImagePagable.c)
 *     MmImageSectionPagable @ 0x1406551AC (MmImageSectionPagable.c)
 */

void __fastcall MiLockPagableSections(_QWORD *a1, int a2)
{
  char *v2; // rsi
  PIMAGE_NT_HEADERS v4; // rax
  int NumberOfSections; // edi
  __int64 v6; // rbx

  v2 = (char *)a1[6];
  if ( MiImagePagable(a1, (unsigned __int64)v2) )
  {
    v4 = RtlImageNtHeader(v2);
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v6 = (__int64)&v4->OptionalHeader + v4->FileHeader.SizeOfOptionalHeader;
    if ( v4->FileHeader.NumberOfSections )
    {
      do
      {
        if ( (unsigned int)MmImageSectionPagable(v6) )
        {
          if ( a2 == 1 )
            MmLockPagableDataSection(&v2[*(unsigned int *)(v6 + 12)]);
          else
            MiLockPagableImageSection(v6, 0LL);
        }
        v6 += 40LL;
        --NumberOfSections;
      }
      while ( NumberOfSections );
    }
  }
}
