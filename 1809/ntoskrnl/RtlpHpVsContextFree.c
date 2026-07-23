/*
 * XREFs of RtlpHpVsContextFree @ 0x1400079BC
 * Callers:
 *     RtlpHpSegFree @ 0x140007CDC (RtlpHpSegFree.c)
 *     RtlpFreeHeapInternal @ 0x14011EF60 (RtlpFreeHeapInternal.c)
 * Callees:
 *     READ_REGISTER_USHORT @ 0x140092080 (READ_REGISTER_USHORT.c)
 *     RtlInterlockedPushEntrySList @ 0x1401B6458 (RtlInterlockedPushEntrySList.c)
 *     RtlpHpVsContextFreeList @ 0x1401B6D18 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsDelayFreeContextFlush @ 0x1401B6E8C (RtlpHpVsDelayFreeContextFlush.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFree(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  int v5; // r14d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // r9d
  __int64 v19; // rdx
  int v20; // r9d
  int v21; // ecx
  unsigned int v22; // ecx
  _SLIST_ENTRY *v23; // rdx
  _SLIST_HEADER *v24; // rcx

  v5 = *(_DWORD *)(a1 + 176);
  v10 = a3 - 16;
  v11 = a3 - 16;
  v12 = a3 - 16;
  if ( (v5 & 1) != 0 && (a3 & 0xFFF) == 0 )
  {
    v10 = a3 - 32;
    v11 = a3 - 32;
    v12 = a3 - 32;
  }
  v13 = 0LL;
  if ( !a2 )
  {
    v14 = v10;
    v15 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v10) ^ HIDWORD(*(_QWORD *)v10);
    if ( (v15 & 0xFF0000) != 0 )
    {
      v16 = v11 ^ *(_DWORD *)(v10 + 8);
LABEL_7:
      v17 = (unsigned __int8)(RtlpHpHeapGlobals ^ v16);
LABEL_14:
      v12 = v11;
      a2 = (v14 - (unsigned int)(v17 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_15;
    }
    if ( (_WORD)v15 )
    {
      v14 = v11 - 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ v11 ^ *(_QWORD *)v10) >> 32);
      v18 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v14) ^ HIDWORD(*(_QWORD *)v14);
      if ( (v18 & 0xFF0000) != 0 )
      {
LABEL_12:
        v16 = v14 ^ *(_DWORD *)(v14 + 8);
        goto LABEL_7;
      }
      if ( (_WORD)v18 )
      {
        v14 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ v14 ^ *(_QWORD *)v14) >> 32);
        goto LABEL_12;
      }
    }
    v17 = 0;
    goto LABEL_14;
  }
LABEL_15:
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) == 0 )
  {
    if ( ((RtlpHpHeapGlobals ^ v12 ^ *(_QWORD *)v10) & 0xFF000000000000LL) == 0 )
    {
      v20 = v10;
      v19 = a1 ^ *(_QWORD *)(a1 + 128);
      LODWORD(a2) = a3;
      v21 = 8;
      goto LABEL_17;
    }
    v22 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v12) ^ *(unsigned __int16 *)(v10 + 2)) - 16;
    *a5 = v22;
    if ( (v5 & 4) != 0 && v22 < 0x1000 )
    {
      if ( READ_REGISTER_USHORT((PSLIST_HEADER)(a1 + 64)) < 0x20u )
      {
        RtlInterlockedPushEntrySList(v24, v23 + 1);
LABEL_26:
        LODWORD(v13) = 1;
        return (unsigned int)v13;
      }
      v13 = RtlpHpVsDelayFreeContextFlush();
    }
    *(_QWORD *)(v10 + 16) = v13;
    RtlpHpVsContextFreeList(a1, a4);
    goto LABEL_26;
  }
  v19 = a1 ^ *(_QWORD *)(a1 + 128);
  v20 = 0;
  v21 = 18;
LABEL_17:
  RtlpLogHeapFailure(v21, v19, a2, v20, 0LL, 0LL);
  return (unsigned int)v13;
}
