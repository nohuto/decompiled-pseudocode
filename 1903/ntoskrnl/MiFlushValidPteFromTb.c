/*
 * XREFs of MiFlushValidPteFromTb @ 0x140173EF4
 * Callers:
 *     MiTransformValidPteInPlace @ 0x140173E44 (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1401153E4 (MiInsertRecursiveTbFlushEntries.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiRealVaToFlushType @ 0x140173FA0 (MiRealVaToFlushType.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
