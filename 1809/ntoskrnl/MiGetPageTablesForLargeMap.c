/*
 * XREFs of MiGetPageTablesForLargeMap @ 0x140183864
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x140183324 (MiMapContiguousMemoryLarge.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140026644 (MiMakeZeroedPageTables.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x1400F69E4 (MiObtainSystemVa.c)
 */

unsigned __int64 __fastcall MiGetPageTablesForLargeMap(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v3; // r12d
  unsigned __int64 v4; // r15
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp

  v3 = 14;
  if ( a2 != 9 )
    v3 = a2;
  v4 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  v5 = (a1 >> 9) + 1;
  if ( (a1 & 0x1FF) == 0 )
    v5 = a1 >> 9;
  v6 = MiObtainSystemVa((unsigned int)v5, v3);
  if ( v6 )
  {
    if ( (unsigned int)MiMakeZeroedPageTables() && (a1 == v4 || (unsigned int)MiMakeZeroedPageTables()) )
      return v6;
    MiReturnSystemVa(v6, (v5 << 21) + v6, v3);
  }
  return 0LL;
}
