/*
 * XREFs of imp_WdfObjectContextGetObject @ 0x1C0016EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_WdfObjectContextGetObject(_WDF_DRIVER_GLOBALS *__formal, _QWORD *ContextPointer)
{
  __int64 v2; // rcx
  void *result; // rax

  v2 = *(ContextPointer - 6);
  result = 0LL;
  if ( *(_WORD *)(v2 + 10) )
    return (void *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
  return result;
}
