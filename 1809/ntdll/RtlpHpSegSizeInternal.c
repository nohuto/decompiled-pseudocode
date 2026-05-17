/*
 * XREFs of RtlpHpSegSizeInternal @ 0x180016158
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18001556C (RtlpHpReAllocateHeap.c)
 *     RtlpHpSizeHeapInternal @ 0x18005B290 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSegReportPageRange @ 0x18010DF84 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x18005BCDC (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpSegSizeInternal(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v5; // rdi
  unsigned int v6; // edx
  int v7; // esi
  unsigned int v8; // r9d
  __int64 v9; // rcx
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rdx
  int v13; // r9d
  __int64 v14; // r9
  unsigned __int16 v15; // r10
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax
  __int16 v19; // r9
  int v20; // eax
  int v23; // eax
  signed __int32 v24[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  if ( a3 <= v5 )
  {
    if ( a5 )
    {
      v23 = *(_WORD *)(a2 + 8) & 1;
      if ( v23 )
        _InterlockedOr(v24, 0);
      *a5 = v23;
    }
    return ((unsigned __int64)*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8)) - *(unsigned int *)(a2 + 4);
  }
  else if ( (*(_BYTE *)(a2 + 24) & 0xC) == 8 )
  {
    v6 = qword_1801634A8 ^ ((unsigned int)v5 >> 12) ^ *(_DWORD *)(v5 + 40);
    v7 = (unsigned __int16)v6;
    v8 = a3 - HIWORD(v6) - v5;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 24)
                   + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v6 + 15) >> 4]
                   + 128);
    v10 = *(_DWORD *)(v9 + 72);
    v11 = *(_BYTE *)(v9 + 76);
    if ( v10 )
    {
      v12 = (v8 * (unsigned __int64)v10) >> v11;
      v13 = v8 - v7 * v12;
    }
    else
    {
      LODWORD(v12) = v8 >> v11;
      v13 = ((1 << v11) - 1) & v8;
    }
    if ( v13 )
      return -1LL;
    v14 = *(_QWORD *)(v5 + 8 * ((unsigned __int64)(unsigned int)(2 * v12) >> 6) + 48) >> ((2 * v12) & 0x3F);
    if ( (v14 & 1) == 0 )
    {
      return -1LL;
    }
    else
    {
      v15 = *(_WORD *)(v5 + 40) ^ ((unsigned int)v5 >> 12);
      v16 = (unsigned __int16)qword_1801634A8 ^ v15;
      if ( (v14 & 2) != 0 )
      {
        v17 = (unsigned __int16)qword_1801634A8 ^ (unsigned __int64)v15;
        v18 = *(unsigned __int16 *)(v17 + a3 - 2);
        v19 = *(_WORD *)(v17 + a3 - 2);
        if ( (v18 & 0x4000) != 0 )
        {
          _InterlockedOr(v24, 0);
          v19 = *(_WORD *)(v17 + a3 - 2);
        }
        v20 = (v18 >> 14) & 1;
        if ( v19 < 0 )
          --v16;
        else
          v16 -= v19 & 0x3FFF;
      }
      else
      {
        v20 = 0;
      }
      if ( a5 )
        *a5 = v20;
      return v16;
    }
  }
  else
  {
    return RtlpHpVsChunkSize(*(_QWORD *)(a1 + 32), a3, a3, a5);
  }
}
