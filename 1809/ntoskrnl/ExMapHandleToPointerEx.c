/*
 * XREFs of ExMapHandleToPointerEx @ 0x1405FC384
 * Callers:
 *     AlpcpFreeMessageFunction @ 0x1405FC2E0 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x140319D14 (ExHandleLogBadReference.c)
 *     ExMapHandleToPointer @ 0x1405F56A0 (ExMapHandleToPointer.c)
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
