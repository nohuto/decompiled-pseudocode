/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x180063F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064148 @ 0x180064148 (sub_180064148.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1800641F0 (RtlDeleteElementGenericTableAvlEx.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)sub_180064148(Table, Buffer, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v4);
  return 1;
}
