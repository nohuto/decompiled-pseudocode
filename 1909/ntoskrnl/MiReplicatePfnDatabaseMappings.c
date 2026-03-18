/*
 * XREFs of MiReplicatePfnDatabaseMappings @ 0x1402BE410
 * Callers:
 *     MiPfnRangeIsZero @ 0x14018673C (MiPfnRangeIsZero.c)
 * Callees:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140116A54 (MiInsertRecursiveTbFlushEntries.c)
 *     MiReplicatePteChange @ 0x14017E930 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall MiReplicatePfnDatabaseMappings(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v8[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v8, 0, 0xB8uLL);
  v4 = 3LL;
  do
  {
    a1 = (__int64)(a1 << 25) >> 16;
    a2 = (__int64)(a2 << 25) >> 16;
    --v4;
  }
  while ( v4 );
  MiReplicatePteChange(a1, a2);
  v8[3] = 0LL;
  LODWORD(v8[1]) = 20;
  while ( a1 <= a2 )
  {
    MiInsertRecursiveTbFlushEntries((__int64)v8, 3, a1);
    a1 += 8LL;
  }
  MiFlushTbList((int *)v8, v5, v6, v7);
}
