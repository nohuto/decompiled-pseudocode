/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x180063FC0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1800641E8 (FindNodeOrParent.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x180064290 (RtlDeleteElementGenericTableAvlEx.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(Table, Buffer, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v4);
  return 1;
}
