/*
 * XREFs of ExMapHandleToPointerEx @ 0x140612278
 * Callers:
 *     AlpcpFreeMessageFunction @ 0x1406122D0 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1403385F8 (ExHandleLogBadReference.c)
 *     ExMapHandleToPointer @ 0x140610ED0 (ExMapHandleToPointer.c)
 */

signed __int64 *__fastcall ExMapHandleToPointerEx(
        unsigned int *BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        char a3)
{
  signed __int64 *v6; // rbx

  v6 = ExMapHandleToPointer(BugCheckParameter2, BugCheckParameter1);
  if ( !v6 )
    ExHandleLogBadReference((ULONG_PTR)BugCheckParameter2, BugCheckParameter1, a3);
  return v6;
}
