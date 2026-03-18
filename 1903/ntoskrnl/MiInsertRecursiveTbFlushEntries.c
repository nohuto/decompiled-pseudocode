/*
 * XREFs of MiInsertRecursiveTbFlushEntries @ 0x1401153E4
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1400A35EC (MiInitializeSystemPageTable.c)
 *     MiDeleteNonPagedPoolPte @ 0x140115100 (MiDeleteNonPagedPoolPte.c)
 *     MiFlushValidPteFromTb @ 0x140173EF4 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x140186434 (MiReplacePfnWithGapMapping.c)
 *     MiReplicatePfnDatabaseMappings @ 0x1402BE6B0 (MiReplicatePfnDatabaseMappings.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
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
