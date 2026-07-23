/*
 * XREFs of MiFreeLargeZeroPages @ 0x14002891C
 * Callers:
 *     MiCleanupPageTablePages @ 0x1400288B8 (MiCleanupPageTablePages.c)
 *     MiPfnRangeIsZero @ 0x140184794 (MiPfnRangeIsZero.c)
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiInsertUnusedLargePageInNodeList @ 0x1402C5CE0 (MiInsertUnusedLargePageInNodeList.c)
 */

_UNKNOWN **__fastcall MiFreeLargeZeroPages(__int64 a1, _QWORD **a2)
{
  _UNKNOWN **result; // rax
  unsigned int i; // ebp
  _QWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0; i < 3; ++i )
  {
    while ( *a2 )
    {
      v6 = *a2;
      *a2 = (_QWORD *)**a2;
      v7 = MiFreeZeroPageSizeIndex(v6);
      if ( i == 2 )
      {
        result = (_UNKNOWN **)MiReleaseFreshPage(v8);
      }
      else
      {
        v9 = MiLargePageSizes[v7];
        v10 = (v8 + 0x58000000000LL) / 48;
        MiUpdateLargePageBitMap(a1, v10, v9, 0, 1);
        result = (_UNKNOWN **)MiInsertUnusedLargePageInNodeList(v10, v9);
      }
    }
    ++a2;
  }
  return result;
}
