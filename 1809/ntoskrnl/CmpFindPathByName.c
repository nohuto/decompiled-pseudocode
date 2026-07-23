/*
 * XREFs of CmpFindPathByName @ 0x1407F40A4
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1407F4BE8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVirtualBranchIsReplicated @ 0x1407F4FBC (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1407F515C (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpFindPathByNameEx @ 0x140581574 (CmpFindPathByNameEx.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, UNICODE_STRING *a3, unsigned int *a4, _QWORD *a5)
{
  return CmpFindPathByNameEx(a1, a2, a3, 0, a4, a5);
}
