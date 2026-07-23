/*
 * XREFs of sub_140625D8C @ 0x140625D8C
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14062592C (WbGetHeapExecutedBlock.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14069272C (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_1406255D4 @ 0x1406255D4 (sub_1406255D4.c)
 *     sub_1406262B8 @ 0x1406262B8 (sub_1406262B8.c)
 */

__int64 __fastcall sub_140625D8C(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1406262B8(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1406255D4(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
