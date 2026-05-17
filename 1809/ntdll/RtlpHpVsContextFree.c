/*
 * XREFs of RtlpHpVsContextFree @ 0x18001E0C0
 * Callers:
 *     RtlpHpSegFree @ 0x180014AE0 (RtlpHpSegFree.c)
 *     RtlpHpFreeHeap @ 0x180018FF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlInterlockedPushEntrySList @ 0x180071AC0 (RtlInterlockedPushEntrySList.c)
 *     RtlQueryDepthSList @ 0x180074F30 (RtlQueryDepthSList.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     RtlpHpVsContextFreeList @ 0x18009FD74 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsDelayFreeContextFlush @ 0x18009FDF8 (RtlpHpVsDelayFreeContextFlush.c)
 */

__int64 __fastcall RtlpHpVsContextFree(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v9; // rdi
  struct _SLIST_ENTRY *v10; // rdx
  struct _SLIST_ENTRY *v11; // rsi
  __int64 v12; // r9
  PSLIST_ENTRY v13; // rbx
  int v14; // ecx
  struct _SLIST_ENTRY *v15; // r8
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // r10d
  __int64 v19; // rdx
  int v20; // r9d
  int v21; // ecx
  unsigned int v22; // ecx
  bool v23; // zf
  WORD DepthSList; // ax
  union _SLIST_HEADER *v25; // rcx

  v9 = a3 - 16;
  v10 = (struct _SLIST_ENTRY *)(a3 - 16);
  v11 = (struct _SLIST_ENTRY *)(a3 - 16);
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && (a3 & 0xFFF) == 0 )
  {
    v9 = a3 - 32;
    v10 = (struct _SLIST_ENTRY *)(a3 - 32);
    v11 = (struct _SLIST_ENTRY *)(a3 - 32);
  }
  v12 = RtlpHpHeapGlobals;
  v13 = 0LL;
  if ( !a2 )
  {
    v14 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v9) ^ HIDWORD(*(_QWORD *)v9);
    v15 = (struct _SLIST_ENTRY *)v9;
    if ( (v14 & 0xFF0000) != 0 )
    {
      v16 = (unsigned int)v10 ^ *(_DWORD *)(v9 + 8);
    }
    else
    {
      if ( !(_WORD)v14 )
      {
        v17 = 0;
        goto LABEL_15;
      }
      v15 = &v10[-(unsigned __int16)((RtlpHpHeapGlobals ^ (unsigned __int64)v10 ^ *(_QWORD *)v9) >> 32)];
      v18 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v15) ^ ((unsigned __int64)v15->Next >> 32);
      if ( (v18 & 0xFF0000) == 0 )
      {
        v11 = v10;
        if ( (_WORD)v18 )
        {
          v15 -= (unsigned __int16)((RtlpHpHeapGlobals ^ (unsigned __int64)v15 ^ (unsigned __int64)v15->Next) >> 32);
          v17 = (unsigned __int8)(RtlpHpHeapGlobals ^ (unsigned __int8)v15 ^ *((_BYTE *)&v15->Next + 8));
        }
        else
        {
          v17 = 0;
        }
        goto LABEL_16;
      }
      v16 = (unsigned int)v15 ^ *((_DWORD *)&v15->Next + 2);
    }
    v17 = (unsigned __int8)(RtlpHpHeapGlobals ^ v16);
LABEL_15:
    v11 = v10;
LABEL_16:
    a2 = ((unsigned __int64)v15 - (unsigned int)(v17 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) == 0 )
  {
    if ( ((RtlpHpHeapGlobals ^ (unsigned __int64)v11 ^ *(_QWORD *)v9) & 0xFF000000000000LL) == 0 )
    {
      v20 = v9;
      v19 = a1 ^ *(_QWORD *)(a1 + 128);
      LODWORD(a2) = a3;
      v21 = 8;
      goto LABEL_19;
    }
    v22 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)v11 >> 16) ^ *(unsigned __int16 *)(v9 + 2)) - 16;
    v23 = (*(_BYTE *)(a1 + 176) & 4) == 0;
    *a5 = v22;
    if ( !v23 && v22 < 0x1000 )
    {
      DepthSList = RtlQueryDepthSList((PSLIST_HEADER)(a1 + 64));
      v25 = (union _SLIST_HEADER *)(a1 + 64);
      if ( DepthSList < 0x20u )
      {
        RtlInterlockedPushEntrySList(v25, v11 + 1);
LABEL_28:
        LODWORD(v13) = 1;
        return (unsigned int)v13;
      }
      v13 = RtlpHpVsDelayFreeContextFlush(v25);
    }
    *(_QWORD *)(v9 + 16) = v13;
    RtlpHpVsContextFreeList(a1, a4, v9 + 16, v12);
    goto LABEL_28;
  }
  v19 = a1 ^ *(_QWORD *)(a1 + 128);
  v20 = 0;
  v21 = 18;
LABEL_19:
  RtlpLogHeapFailure(v21, v19, a2, v20, 0LL, 0LL);
  return (unsigned int)v13;
}
