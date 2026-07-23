/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x18006B840
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x18006BA18 (FindNodeOrParent.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x18006BAB0 (RtlDeleteElementGenericTableAvlEx.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(Table, Buffer, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v4);
  return 1;
}
