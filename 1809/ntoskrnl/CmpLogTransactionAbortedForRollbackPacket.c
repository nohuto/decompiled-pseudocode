/*
 * XREFs of CmpLogTransactionAbortedForRollbackPacket @ 0x1406D1470
 * Callers:
 *     CmpTryToRundownHive @ 0x14000FCAC (CmpTryToRundownHive.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 */

void __fastcall CmpLogTransactionAbortedForRollbackPacket(__int64 a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  CmpLogTransactionAbortedWithChildName(a1, 0LL, a2, a4, *a3);
}
