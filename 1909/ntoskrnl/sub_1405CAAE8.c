/*
 * XREFs of sub_1405CAAE8 @ 0x1405CAAE8
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1405CA8C8 (WbGetHeapExecutedBlock.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406B1090 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_1405CA1E8 @ 0x1405CA1E8 (sub_1405CA1E8.c)
 *     sub_1405CB1F4 @ 0x1405CB1F4 (sub_1405CB1F4.c)
 */

__int64 __fastcall sub_1405CAAE8(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1405CB1F4(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1405CA1E8(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
