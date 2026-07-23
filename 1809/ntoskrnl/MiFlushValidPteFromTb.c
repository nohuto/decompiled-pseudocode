/*
 * XREFs of MiFlushValidPteFromTb @ 0x14016A8B0
 * Callers:
 *     MiTransformValidPteInPlace @ 0x14016A80C (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140111958 (MiInsertRecursiveTbFlushEntries.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     MiRealVaToFlushType @ 0x14016A948 (MiRealVaToFlushType.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiFlushValidPteFromTb(unsigned __int64 a1)
{
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v2; // r10
  unsigned int v3; // r11d
  char v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v9; // [rsp+24h] [rbp-D4h]
  int v10; // [rsp+28h] [rbp-D0h]
  int v11; // [rsp+2Ch] [rbp-CCh]
  __int64 v12; // [rsp+30h] [rbp-C8h]
  __int64 v13; // [rsp+38h] [rbp-C0h]

  v11 = 0;
  LeafVa = MiGetLeafVa(a1);
  v9 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v8 = MiRealVaToFlushType(LeafVa);
  v10 = 20;
  if ( v4 < 0 )
    MiInsertLargeTbFlushEntry((__int64)&v8, v3, v2);
  else
    MiInsertRecursiveTbFlushEntries((__int64)&v8, v3, v2);
  MiFlushTbList(&v8, v5, v6, v7);
}
