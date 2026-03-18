/*
 * XREFs of MiLockPagableSections @ 0x1409F14D8
 * Callers:
 *     MiCancelPhase0Locking @ 0x1406A6358 (MiCancelPhase0Locking.c)
 *     MiUnlockBootPageSections @ 0x1409F13FC (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x1409F1488 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     MiLockPagableImageSection @ 0x14005F1C0 (MiLockPagableImageSection.c)
 *     MmImageSectionPagable @ 0x1406A53FC (MmImageSectionPagable.c)
 *     MiImagePagable @ 0x1406A5638 (MiImagePagable.c)
 *     MmLockPagableDataSection @ 0x1406A5750 (MmLockPagableDataSection.c)
 */

void __fastcall MiLockPagableSections(__int64 a1, int a2)
{
  char *v2; // rsi
  PIMAGE_NT_HEADERS v4; // rax
  int NumberOfSections; // edi
  __int64 v6; // rbx

  v2 = *(char **)(a1 + 48);
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
