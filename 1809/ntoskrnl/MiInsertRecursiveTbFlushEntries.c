/*
 * XREFs of MiInsertRecursiveTbFlushEntries @ 0x1401118E8
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140026984 (MiInitializeSystemPageTable.c)
 *     MiDeleteNonPagedPoolPte @ 0x1401115B0 (MiDeleteNonPagedPoolPte.c)
 *     MiFlushValidPteFromTb @ 0x14016A7B0 (MiFlushValidPteFromTb.c)
 *     MiPfnRangeIsZero @ 0x140184654 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1400B3AF0 (MiInsertTbFlushEntry.c)
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
