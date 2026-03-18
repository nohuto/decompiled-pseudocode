/*
 * XREFs of CmpLogTransactionAborted @ 0x140831BC4
 * Callers:
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406EE5BC (CmpLogTransactionAbortedWithChildName.c)
 */

void __fastcall CmpLogTransactionAborted(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  CmpLogTransactionAbortedWithChildName(a1, 0LL, a2, a4, a4);
}
