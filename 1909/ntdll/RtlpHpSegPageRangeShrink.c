/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x180036AE0
 * Callers:
 *     RtlpHpSegAlloc @ 0x180036D88 (RtlpHpSegAlloc.c)
 *     RtlpHpFreeHeap @ 0x180040830 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegFree @ 0x180044D74 (RtlpHpSegFree.c)
 *     RtlpHpSegReAlloc @ 0x180045D7C (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800367E0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x1800380E0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegSegmentFree @ 0x18004FE48 (RtlpHpSegSegmentFree.c)
 *     RtlpHpTlLogMemStats @ 0x180107428 (RtlpHpTlLogMemStats.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x18010B938 (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

void __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // edi
  __int64 v7; // rbx
  int v10; // r13d
  unsigned int v11; // edx
  unsigned int v12; // eax
  __int16 v13; // dx
  int v14; // esi
  __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rbx
  char v18; // al
  __int64 v19; // rdx
  _QWORD *v20; // rdi
  BOOLEAN v21; // cl
  __int64 v22; // rcx
  char *v23; // rax
  __int64 v24; // rdx
  char v25; // cl
  __int64 v26; // rax
  _QWORD *v27; // rcx
  char v28; // [rsp+70h] [rbp+18h] BYREF

  v5 = *(unsigned __int8 *)(a2 + 31) - a3;
  v7 = a2 + 32LL * a3;
  if ( v5 - 1 > 1 )
  {
    v23 = (char *)(v7 + 56);
    v24 = v5 - 2;
    do
    {
      v25 = *v23;
      v23 += 32;
      *(v23 - 32) = v25 & 0xFE;
      --v24;
    }
    while ( v24 );
  }
  v10 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v11 = *(_DWORD *)(a2 + 28);
  v12 = HIBYTE(v11);
  v13 = ~(_WORD)v11;
  v28 = -1;
  if ( v12 == v5 )
  {
    LOWORD(v14) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = a3;
    v14 = a3 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(a2 + 28) = ~(_WORD)v14;
  }
  *(_BYTE *)(v7 + 24) |= 2u;
  *(_BYTE *)(32LL * (v5 - 1) + v7 + 31) = v5 - 1;
  *(_WORD *)(v7 + 28) = ~(v13 - v14);
  *(_BYTE *)(v7 + 31) = v5;
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 24) &= 0xF3u;
  v15 = RtlpHpSegPageRangeCoalesce(a1, v7, a4, 0, &v28);
  v16 = *(_BYTE *)(a1 + 13);
  v17 = v15;
  if ( (v16 & 0x10) != 0 && *(unsigned __int8 *)(v15 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    v20 = (_QWORD *)(v15 & *(_QWORD *)a1);
    *(_DWORD *)v15 = -857879297;
    if ( v20 )
    {
      v26 = *v20;
      if ( *(_QWORD **)(*v20 + 8LL) != v20 || (v27 = (_QWORD *)v20[1], (_QWORD *)*v27 != v20) )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      --*(_QWORD *)(a1 + 88);
    }
    goto LABEL_29;
  }
  if ( (v16 & 7) != 0 )
    v18 = RtlpHpSegPageRangeComputeLargePageCost(
            a1,
            (v15 & *(_QWORD *)a1) + ((v15 - (v15 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
            *(unsigned __int8 *)(v15 + 31) << *(_BYTE *)(a1 + 8));
  else
    v18 = 4;
  *(_BYTE *)(v17 + 30) = v18;
  v19 = *(_QWORD *)(a1 + 96);
  if ( (*(_QWORD *)(a1 + 104) & 1) == 0 )
    goto LABEL_13;
  if ( v19 )
  {
    v19 ^= a1 + 96;
LABEL_13:
    v20 = 0LL;
    goto LABEL_14;
  }
  v20 = 0LL;
  v19 = 0LL;
LABEL_14:
  v21 = 0;
  if ( v19 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v17 + 28) < *(_DWORD *)(v19 + 28) )
      {
        v22 = *(_QWORD *)v19;
        if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_25;
          v22 ^= v19;
        }
        if ( !v22 )
        {
LABEL_25:
          v21 = 0;
          break;
        }
      }
      else
      {
        v22 = *(_QWORD *)(v19 + 8);
        if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_26;
          v22 ^= v19;
        }
        if ( !v22 )
        {
LABEL_26:
          v21 = 1;
          break;
        }
      }
      v19 = v22;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v19, v21, (PRTL_BALANCED_NODE)v17);
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
    (unsigned __int16)~*(_WORD *)(v17 + 28));
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
LABEL_29:
  if ( !v10 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  if ( v20 )
    RtlpHpSegSegmentFree(a1);
}
