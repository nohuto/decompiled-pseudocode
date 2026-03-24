/*
 * XREFs of sub_140624D6C @ 0x140624D6C
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14062490C (WbGetHeapExecutedBlock.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14069156C (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_1406245B4 @ 0x1406245B4 (sub_1406245B4.c)
 *     sub_140625298 @ 0x140625298 (sub_140625298.c)
 */

__int64 __fastcall sub_140624D6C(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_140625298(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1406245B4(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
