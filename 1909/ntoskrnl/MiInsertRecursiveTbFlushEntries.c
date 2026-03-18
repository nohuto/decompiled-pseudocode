/*
 * XREFs of MiInsertRecursiveTbFlushEntries @ 0x140116A54
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14009641C (MiInitializeSystemPageTable.c)
 *     MiDeleteNonPagedPoolPte @ 0x140116770 (MiDeleteNonPagedPoolPte.c)
 *     MiFlushValidPteFromTb @ 0x140174624 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x1401869E4 (MiReplacePfnWithGapMapping.c)
 *     MiReplicatePfnDatabaseMappings @ 0x1402BE410 (MiReplicatePfnDatabaseMappings.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 */

unsigned __int64 __fastcall MiInsertRecursiveTbFlushEntries(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 result; // rax

  if ( a2 >= 0 )
  {
    v5 = 1LL;
    v6 = (unsigned int)(a2 + 1);
    do
    {
      a3 = (__int64)(a3 << 25) >> 16;
      result = MiInsertTbFlushEntry(a1, a3, v5, 0);
      v5 <<= 9;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
