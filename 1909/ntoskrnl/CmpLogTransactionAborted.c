/*
 * XREFs of CmpLogTransactionAborted @ 0x140831214
 * Callers:
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406F010C (CmpLogTransactionAbortedWithChildName.c)
 */

void __fastcall CmpLogTransactionAborted(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  CmpLogTransactionAbortedWithChildName(a1, 0LL, a2, a4, a4);
}
