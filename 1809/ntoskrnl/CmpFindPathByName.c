/*
 * XREFs of CmpFindPathByName @ 0x1407F2EA4
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1407F39E8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVirtualBranchIsReplicated @ 0x1407F3DBC (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1407F3F5C (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpFindPathByNameEx @ 0x140580574 (CmpFindPathByNameEx.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, UNICODE_STRING *a3, unsigned int *a4, _QWORD *a5)
{
  return CmpFindPathByNameEx(a1, a2, a3, 0, a4, a5);
}
