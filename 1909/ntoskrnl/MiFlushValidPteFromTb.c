/*
 * XREFs of MiFlushValidPteFromTb @ 0x140174624
 * Callers:
 *     MiTransformValidPteInPlace @ 0x140174574 (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400F86C0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140116A54 (MiInsertRecursiveTbFlushEntries.c)
 *     MiRealVaToFlushType @ 0x1401746D0 (MiRealVaToFlushType.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall MiFlushValidPteFromTb(unsigned __int64 a1, char a2, unsigned int a3)
{
  unsigned __int64 LeafVa; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v10[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v10, 0, 0xB8uLL);
  LeafVa = MiGetLeafVa(a1);
  LODWORD(v10[0]) = MiRealVaToFlushType(LeafVa);
  LODWORD(v10[1]) = 20;
  WORD2(v10[0]) = 0;
  v10[2] = 0LL;
  v10[3] = 0LL;
  if ( a2 < 0 )
    MiInsertLargeTbFlushEntry((__int64)v10, a3, a1);
  else
    MiInsertRecursiveTbFlushEntries((__int64)v10, a3, a1);
  MiFlushTbList((int *)v10, v7, v8, v9);
}
