/*
 * XREFs of RtlpHpVsContextFree @ 0x18001E0C0
 * Callers:
 *     RtlpHpSegFree @ 0x180014AE0 (RtlpHpSegFree.c)
 *     RtlpHpFreeHeap @ 0x180018FF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlInterlockedPushEntrySList @ 0x180071AC0 (RtlInterlockedPushEntrySList.c)
 *     RtlQueryDepthSList @ 0x180074F40 (RtlQueryDepthSList.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpHpVsContextFreeList @ 0x18009FD94 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsDelayFreeContextFlush @ 0x18009FE18 (RtlpHpVsDelayFreeContextFlush.c)
 */

__int64 __fastcall RtlpHpVsContextFree(
        PRTL_SRWLOCK SRWLock,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v8; // rdi
  _SLIST_ENTRY *v9; // rdx
  _SLIST_ENTRY *v10; // rsi
  PSLIST_ENTRY v11; // rbx
  int v12; // ecx
  _SLIST_ENTRY *v13; // r8
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // r10d
  unsigned __int64 v17; // rdx
  int v18; // r9d
  int v19; // ecx
  unsigned int v20; // ecx
  bool v21; // zf
  WORD DepthSList; // ax
  _SLIST_HEADER *v23; // rcx

  v8 = a3 - 16;
  v9 = (_SLIST_ENTRY *)(a3 - 16);
  v10 = (_SLIST_ENTRY *)(a3 - 16);
  if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && (a3 & 0xFFF) == 0 )
  {
    v8 = a3 - 32;
    v9 = (_SLIST_ENTRY *)(a3 - 32);
    v10 = (_SLIST_ENTRY *)(a3 - 32);
  }
  v11 = 0LL;
  if ( !a2 )
  {
    v12 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v8) ^ HIDWORD(*(_QWORD *)v8);
    v13 = (_SLIST_ENTRY *)v8;
    if ( (v12 & 0xFF0000) != 0 )
    {
      v14 = (unsigned int)v9 ^ *(_DWORD *)(v8 + 8);
    }
    else
    {
      if ( !(_WORD)v12 )
      {
        v15 = 0;
        goto LABEL_15;
      }
      v13 = &v9[-(unsigned __int16)((RtlpHpHeapGlobals ^ (unsigned __int64)v9 ^ *(_QWORD *)v8) >> 32)];
      v16 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v13) ^ ((unsigned __int64)v13->Next >> 32);
      if ( (v16 & 0xFF0000) == 0 )
      {
        v10 = v9;
        if ( (_WORD)v16 )
        {
          v13 -= (unsigned __int16)((RtlpHpHeapGlobals ^ (unsigned __int64)v13 ^ (unsigned __int64)v13->Next) >> 32);
          v15 = (unsigned __int8)(RtlpHpHeapGlobals ^ (unsigned __int8)v13 ^ *((_BYTE *)&v13->Next + 8));
        }
        else
        {
          v15 = 0;
        }
        goto LABEL_16;
      }
      v14 = (unsigned int)v13 ^ *((_DWORD *)&v13->Next + 2);
    }
    v15 = (unsigned __int8)(RtlpHpHeapGlobals ^ v14);
LABEL_15:
    v10 = v9;
LABEL_16:
    a2 = ((unsigned __int64)v13 - (unsigned int)(v15 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) == 0 )
  {
    if ( ((RtlpHpHeapGlobals ^ (unsigned __int64)v10 ^ *(_QWORD *)v8) & 0xFF000000000000LL) == 0 )
    {
      v18 = v8;
      v17 = (unsigned __int64)SRWLock ^ SRWLock[16].Value;
      LODWORD(a2) = a3;
      v19 = 8;
      goto LABEL_19;
    }
    v20 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)v10 >> 16) ^ *(unsigned __int16 *)(v8 + 2)) - 16;
    v21 = (*(_BYTE *)&SRWLock[22].0 & 4) == 0;
    *a5 = v20;
    if ( !v21 && v20 < 0x1000 )
    {
      DepthSList = RtlQueryDepthSList((PSLIST_HEADER)&SRWLock[8]);
      v23 = (_SLIST_HEADER *)&SRWLock[8];
      if ( DepthSList < 0x20u )
      {
        RtlInterlockedPushEntrySList(v23, v10 + 1);
LABEL_28:
        LODWORD(v11) = 1;
        return (unsigned int)v11;
      }
      v11 = RtlpHpVsDelayFreeContextFlush(v23);
    }
    *(_QWORD *)(v8 + 16) = v11;
    RtlpHpVsContextFreeList(SRWLock);
    goto LABEL_28;
  }
  v17 = (unsigned __int64)SRWLock ^ SRWLock[16].Value;
  v18 = 0;
  v19 = 18;
LABEL_19:
  RtlpLogHeapFailure(v19, v17, a2, v18, 0LL, 0LL);
  return (unsigned int)v11;
}
