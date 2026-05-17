/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x18001D914
 * Callers:
 *     RtlpHpSegFree @ 0x180014AE0 (RtlpHpSegFree.c)
 *     RtlpHpSegReAlloc @ 0x180014CBC (RtlpHpSegReAlloc.c)
 *     RtlpHpFreeHeap @ 0x180018FF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegAlloc @ 0x18001DB14 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18001DF80 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180020014 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegSegmentFree @ 0x1800661D0 (RtlpHpSegSegmentFree.c)
 */

_QWORD *__fastcall RtlpHpSegPageRangeShrink(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // r12d
  int v5; // r14d
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  int v8; // ebx
  unsigned int v10; // edx
  unsigned int v11; // eax
  __int16 v12; // dx
  int v13; // ebx
  __int64 v14; // rax
  _QWORD *result; // rax
  _QWORD *v16; // rbx
  _BYTE *v17; // rcx
  _QWORD *v18; // rcx
  char v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = a4;
  v5 = *(unsigned __int8 *)(a2 + 31) - (_DWORD)a3;
  v6 = a2;
  v7 = a2 + 32LL * (unsigned int)a3;
  v8 = (int)a3;
  if ( (unsigned int)(v5 - 1) > 1 )
  {
    v17 = (_BYTE *)(v7 + 56);
    a2 = (unsigned int)(v5 - 2);
    do
    {
      *v17 &= ~1u;
      v17 += 32;
      --a2;
    }
    while ( a2 );
  }
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 64, a2, a3, a4);
  v10 = *(_DWORD *)(v6 + 28);
  v11 = HIBYTE(v10);
  v12 = ~(_WORD)v10;
  v19 = -1;
  if ( v11 == v5 )
  {
    LOWORD(v13) = 0;
  }
  else
  {
    *(_BYTE *)(v6 + 31) = v8;
    v13 = v8 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(v6 + 28) = ~(_WORD)v13;
  }
  *(_BYTE *)(v7 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v5 - 1) + v7 + 31) = v5 - 1;
  *(_WORD *)(v7 + 28) = ~(v12 - v13);
  *(_BYTE *)(v7 + 31) = v5;
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 24) &= 0xF3u;
  v14 = RtlpHpSegPageRangeCoalesce(a1, v7, v4, 0, (__int64)&v19);
  result = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, v14, 0LL);
  v16 = result;
  if ( result )
  {
    result = (_QWORD *)*result;
    if ( (_QWORD *)result[1] != v16 || (v18 = (_QWORD *)v16[1], (_QWORD *)*v18 != v16) )
      __fastfail(3u);
    *v18 = result;
    result[1] = v18;
    --*(_QWORD *)(a1 + 88);
  }
  if ( (v4 & 1) == 0 )
    result = (_QWORD *)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  if ( v16 )
    return (_QWORD *)RtlpHpSegSegmentFree(a1, v16, 0x7FFFFFFFLL, 1LL);
  return result;
}
