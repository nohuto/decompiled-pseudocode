/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x18001DC90
 * Callers:
 *     RtlpHpSegAlloc @ 0x18001DB14 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegPageRangeSplit @ 0x18001DE84 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18001DF1C (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18001DF80 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegSegmentAllocate @ 0x18005D2C8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegHeapAddSegment @ 0x180064904 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentInitialize @ 0x18006494C (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x18010D7B8 (RtlpHpSegLargeRangeAllocate.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v5; // r13d
  unsigned int v6; // esi
  int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // edx
  _BYTE *v17; // rax

  v5 = (unsigned int)((1 << *(_BYTE *)(a1 + 9)) + a2 - 1) >> *(_BYTE *)(a1 + 9);
  v6 = v5 << 24;
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v8 = *(_QWORD *)(a1 + 96);
  if ( (*(_QWORD *)(a1 + 104) & 1) != 0 && v8 )
    v8 ^= a1 + 96;
  v9 = *(_QWORD *)(a1 + 104) & 1LL;
  v10 = 0LL;
  while ( v8 )
  {
    if ( v6 < *(_DWORD *)(v8 + 28) )
    {
      v11 = *(_QWORD *)v8;
      v10 = v8;
    }
    else
    {
      if ( v6 <= *(_DWORD *)(v8 + 28) )
        goto LABEL_17;
      v11 = *(_QWORD *)(v8 + 8);
    }
    if ( (_DWORD)v9 && v11 )
      v8 ^= v11;
    else
      v8 = v11;
  }
  v8 = v10;
LABEL_17:
  if ( v8 )
  {
    if ( (a3 & 0x800000) != 0 )
      v8 = RtlpHpSegLargeRangeAllocate(a1, v8, v5, 1LL);
    else
      RtlpHpSegFreeRangeRemove(a1, v8);
  }
  if ( !v8 )
  {
    if ( !v7 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v12 = RtlpHpSegSegmentAllocate(a1, 0LL, (a3 & 0x800000) != 0 ? 2 : 0);
    v13 = v12;
    if ( !v12 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v12, 0LL);
    v8 = v13 + 32LL * *(unsigned __int8 *)(a1 + 10);
    if ( !v7 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    RtlpHpSegHeapAddSegment(a1, v13);
    if ( (a3 & 0x800000) != 0 )
      v8 = RtlpHpSegLargeRangeAllocate(a1, v8, v5, 0LL);
  }
  v14 = RtlpHpSegPageRangeSplit(v9, v8, v5);
  if ( v14 )
    RtlpHpSegFreeRangeInsert(a1, v14, 0LL);
  v15 = v5 - 1;
  *(_BYTE *)(v8 + 24) |= HIBYTE(a3) & 0xC | 1;
  *(_BYTE *)(32LL * (v5 - 1) + v8 + 24) |= 1u;
  if ( !v7 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v16 = 1;
  if ( v15 > 1 )
  {
    v17 = (_BYTE *)(v8 + 56);
    do
    {
      v17[7] = v16++;
      *v17 |= 1u;
      v17 += 32;
    }
    while ( v16 < v15 );
  }
  return v8;
}
