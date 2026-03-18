/*
 * XREFs of MiFreeLargeZeroPages @ 0x140186C94
 * Callers:
 *     MiPfnRangeIsZero @ 0x14018673C (MiPfnRangeIsZero.c)
 *     MiCleanupPageTablePages @ 0x140186C2C (MiCleanupPageTablePages.c)
 *     MiCreateLargePfnList @ 0x1402DEF48 (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x14009735C (MiPfnZeroingNeeded.c)
 *     MiUpdateLargePageBitMap @ 0x1400BD2AC (MiUpdateLargePageBitMap.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiChangePageAttributeContiguous @ 0x14017D844 (MiChangePageAttributeContiguous.c)
 *     MiInsertUnusedLargePageInNodeList @ 0x1402DFE80 (MiInsertUnusedLargePageInNodeList.c)
 *     MiReadyLargePagesToFree @ 0x1402DFF30 (MiReadyLargePagesToFree.c)
 */

__int64 __fastcall MiFreeLargeZeroPages(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rdi
  __int64 result; // rax
  unsigned int v5; // esi
  char *v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx

  v3 = a2;
  result = MiReadyLargePagesToFree(a2);
  v5 = 0;
  v6 = (char *)((char *)MiLargePageSizes - (char *)v3);
  do
  {
    while ( 1 )
    {
      v9 = *v3;
      if ( !*v3 )
        break;
      *v3 = *(_QWORD *)v9;
      if ( v5 == 3 )
      {
        result = MiReleaseFreshPage(v9);
      }
      else
      {
        v7 = *(__int64 *)((char *)v3 + (_QWORD)v6);
        v8 = (v9 + 0x58000000000LL) / 48;
        MiUpdateLargePageBitMap(a1, v8, v7, 0, 1);
        if ( (*(_BYTE *)(v9 + 34) & 0xC0) != 0x40 )
        {
          MiPfnZeroingNeeded(v9, 1);
          MiChangePageAttributeContiguous((v9 + 0x58000000000LL) / 48, v7);
        }
        result = MiInsertUnusedLargePageInNodeList(v8);
      }
    }
    ++v5;
    ++v3;
  }
  while ( v5 < 4 );
  return result;
}
