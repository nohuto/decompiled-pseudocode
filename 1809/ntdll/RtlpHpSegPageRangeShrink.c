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

void __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v5; // r14d
  __int64 v7; // rsi
  unsigned int v10; // edx
  unsigned int v11; // eax
  __int16 v12; // dx
  int v13; // ebx
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  _BYTE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  char v21; // [rsp+70h] [rbp+18h] BYREF

  v5 = *(unsigned __int8 *)(a2 + 31) - a3;
  v7 = a2 + 32LL * a3;
  if ( v5 - 1 > 1 )
  {
    v17 = (_BYTE *)(v7 + 56);
    v18 = v5 - 2;
    do
    {
      *v17 &= ~1u;
      v17 += 32;
      --v18;
    }
    while ( v18 );
  }
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v10 = *(_DWORD *)(a2 + 28);
  v11 = HIBYTE(v10);
  v12 = ~(_WORD)v10;
  v21 = -1;
  if ( v11 == v5 )
  {
    LOWORD(v13) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = a3;
    v13 = a3 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(a2 + 28) = ~(_WORD)v13;
  }
  *(_BYTE *)(v7 + 24) |= 2u;
  *(_BYTE *)(32LL * (v5 - 1) + v7 + 31) = v5 - 1;
  *(_WORD *)(v7 + 28) = ~(v12 - v13);
  *(_BYTE *)(v7 + 31) = v5;
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 24) &= 0xF3u;
  v14 = RtlpHpSegPageRangeCoalesce(a1, v7, a4, 0, (__int64)&v21);
  v15 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, v14, 0LL);
  v16 = v15;
  if ( v15 )
  {
    v19 = *v15;
    if ( *(_QWORD **)(v19 + 8) != v16 || (v20 = (_QWORD *)v16[1], (_QWORD *)*v20 != v16) )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    --*(_QWORD *)(a1 + 88);
  }
  if ( (a4 & 1) == 0 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  if ( v16 )
    RtlpHpSegSegmentFree(a1);
}
