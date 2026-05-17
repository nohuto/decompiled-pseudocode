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

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v5; // r15d
  unsigned int v6; // r13d
  unsigned int v7; // esi
  int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned int v19; // esi
  unsigned int v20; // edx
  _BYTE *v21; // rax

  v5 = (int)a3;
  v6 = (unsigned int)((1 << *(_BYTE *)(a1 + 9)) + a2 - 1) >> *(_BYTE *)(a1 + 9);
  v7 = v6 << 24;
  v8 = (unsigned __int8)a3 & 1;
  if ( ((unsigned __int8)a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 64, a2, a3, a4);
  v9 = *(_QWORD *)(a1 + 96);
  if ( (*(_QWORD *)(a1 + 104) & 1) != 0 && v9 )
    v9 ^= a1 + 96;
  v10 = *(_QWORD *)(a1 + 104) & 1LL;
  v11 = 0LL;
  while ( v9 )
  {
    if ( v7 < *(_DWORD *)(v9 + 28) )
    {
      v12 = *(_QWORD *)v9;
      v11 = v9;
    }
    else
    {
      if ( v7 <= *(_DWORD *)(v9 + 28) )
        goto LABEL_17;
      v12 = *(_QWORD *)(v9 + 8);
    }
    if ( (_DWORD)v10 && v12 )
      v9 ^= v12;
    else
      v9 = v12;
  }
  v9 = v11;
LABEL_17:
  if ( v9 )
  {
    if ( (v5 & 0x800000) != 0 )
      v9 = RtlpHpSegLargeRangeAllocate(a1, v9, v6, 1LL);
    else
      RtlpHpSegFreeRangeRemove(a1, v9);
  }
  if ( !v9 )
  {
    if ( !v8 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    v13 = RtlpHpSegSegmentAllocate(a1, 0LL, (v5 & 0x800000) != 0 ? 2 : 0);
    v14 = v13;
    if ( !v13 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v13, 0LL);
    v9 = v14 + 32LL * *(unsigned __int8 *)(a1 + 10);
    if ( !v8 )
      RtlAcquireSRWLockExclusive(a1 + 64, v15, v16, v17);
    RtlpHpSegHeapAddSegment(a1, v14);
    if ( (v5 & 0x800000) != 0 )
      v9 = RtlpHpSegLargeRangeAllocate(a1, v9, v6, 0LL);
  }
  v18 = RtlpHpSegPageRangeSplit(v10, v9, v6);
  if ( v18 )
    RtlpHpSegFreeRangeInsert(a1, v18, 0LL);
  v19 = v6 - 1;
  *(_BYTE *)(v9 + 24) |= HIBYTE(v5) & 0xC | 1;
  *(_BYTE *)(32LL * (v6 - 1) + v9 + 24) |= 1u;
  if ( !v8 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  v20 = 1;
  if ( v19 > 1 )
  {
    v21 = (_BYTE *)(v9 + 56);
    do
    {
      v21[7] = v20++;
      *v21 |= 1u;
      v21 += 32;
    }
    while ( v20 < v19 );
  }
  return v9;
}
