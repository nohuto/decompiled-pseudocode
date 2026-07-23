/*
 * XREFs of RtlpLocalInfoAllocFromCache @ 0x18004D7D0
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18004D0C4 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpIsSubSegmentReuseable @ 0x180043114 (RtlpIsSubSegmentReuseable.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180043140 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18004A840 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpLfhFindClearBitAndSet @ 0x18004DC08 (RtlpLfhFindClearBitAndSet.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800701E0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x180079C38 (RtlpSetSegmentInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A0960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A09A0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A0A10 (InterlockedPushListSList.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x18010304C (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1801037A0 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpLocalInfoAllocFromCache(__int64 a1, char a2)
{
  _SLIST_ENTRY *v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // edx
  unsigned int v7; // r8d
  signed __int32 v8; // ebx
  __int64 v9; // r12
  struct _TEB *v10; // r15
  unsigned int v11; // r13d
  unsigned __int16 HeapData_high; // bp
  __int16 v13; // ax
  int ClearBitAndSet; // eax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  volatile signed __int32 *v19; // rdi
  __int64 *v20; // rax
  __int64 *v21; // r15
  unsigned int v22; // ebp
  volatile signed __int64 *v23; // rsi
  unsigned int v24; // r13d
  __int64 v25; // rbx
  unsigned int v26; // r12d
  _SLIST_HEADER *v27; // rbp
  __int64 v28; // rcx
  PSLIST_ENTRY v29; // rax
  _QWORD **v30; // rbx
  PSLIST_ENTRY v31; // r15
  signed __int32 v32; // eax
  __int64 *v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // ebp
  _SLIST_ENTRY *v36; // rbx
  _SLIST_HEADER *v37; // r15
  PSLIST_ENTRY v38; // rsi
  __int16 RandomValue32; // ax
  __int64 v40; // rbx
  char *v41; // rcx
  __int64 v42; // rcx
  PSLIST_ENTRY v43; // rax
  __int64 v44; // rcx
  signed __int32 v45; // eax
  __int64 *v46; // r8
  int v47; // r9d
  __int64 v48; // rcx
  _QWORD **v49; // rdx
  __int64 v50; // rcx
  _QWORD **v51; // rdx
  signed __int32 v52; // eax
  __int64 *v53; // r8
  int v54; // r9d
  __int64 v55; // rcx
  int v56; // [rsp+70h] [rbp+8h]
  __int64 v57; // [rsp+70h] [rbp+8h]

  v2 = 0LL;
  while ( 1 )
  {
LABEL_2:
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      v56 = 0;
      v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      if ( (*(_DWORD *)(v4 + 32) & 0x80000000) != 0 )
      {
        v40 = *(unsigned __int16 *)(a1 + 172);
        v56 = 1;
        if ( (*(_BYTE *)(v5 + 4 * v40 + 679) & 1) == 0
          && (int)RtlpAffinitizeSegmentInfoForBucket(v5, *(unsigned __int8 *)(v5 + 4 * v40 + 678)) >= 0 )
        {
          *(_BYTE *)(v5 + 4 * v40 + 679) |= 1u;
          v41 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
          if ( *v41 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v5 + 24), *(unsigned __int8 *)(v5 + 4 * v40 + 678));
        }
      }
      v6 = 0;
      v7 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v4 + 32);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v8 )
            goto LABEL_20;
          if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 32), v8 | 0x80000000, v8) )
            break;
        }
        if ( ++v6 > v7 )
        {
          v8 = -1;
          break;
        }
      }
      if ( v8 == -1 )
        goto LABEL_20;
      v9 = *(_QWORD *)(v4 + 8);
      if ( !v9 || *(_QWORD *)v4 != a1 || !(_WORD)v8 )
      {
        *(_DWORD *)(v4 + 32) = v8;
        v2 = 0LL;
        goto LABEL_20;
      }
      v10 = NtCurrentTeb();
      v11 = RtlpSearchWidth[*(unsigned __int16 *)(a1 + 172)];
      HeapData_high = (unsigned __int8)HIWORD(v10->HeapData);
      if ( HeapData_high == HIBYTE(HIWORD(v10->HeapData)) )
      {
        RandomValue32 = RtlpHeapGenerateRandomValue32();
        v13 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
      }
      else
      {
        v13 = (unsigned __int8)(HIWORD(v10->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v10->HeapData);
      }
      HIWORD(v10->HeapData) = v13;
      ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                         v9 + 32,
                         (unsigned int)(v8 >> 16),
                         RtlpLowFragHeapRandomData[HeapData_high],
                         v11);
      *(_DWORD *)(v4 + 32) = (ClearBitAndSet << 16) | ((unsigned __int16)v8 - 1);
      v15 = (unsigned __int16)(RtlpLFHKey ^ v5 ^ v9 ^ *(_WORD *)(v9 + 24));
      v16 = v9
          + ClearBitAndSet
          * (((unsigned int)RtlpLFHKey ^ (unsigned int)v5 ^ (unsigned int)v9 ^ *(_DWORD *)(v9 + 24)) >> 16);
      v2 = 0LL;
      v17 = v16 + v15;
      if ( (*(_BYTE *)(v17 + 15) & 0x3F) != 0 )
      {
        RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), v17, 0, 0LL, 0LL);
LABEL_20:
        v17 = 0LL;
      }
      if ( v56 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
        _InterlockedCompareExchange(
          (_DWORD *)RtlpAffinityState + 1,
          2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
          SHIDWORD(RtlpAffinityState[0]));
      if ( v17 )
        return v17;
    }
    v57 = *(_QWORD *)a1;
    while ( 1 )
    {
      v19 = 0LL;
LABEL_23:
      v20 = (__int64 *)(a1 + 16);
      while ( 1 )
      {
        v21 = v20;
        v22 = 0;
        v23 = 0LL;
        v24 = 0;
        do
        {
          v25 = *v21;
          if ( *v21 )
          {
            v26 = *(unsigned __int16 *)(v25 + 32);
            if ( v26 > v24 && !RtlpIsSubSegmentReuseThresholdExceeded(a1, *v21) )
            {
              v19 = (volatile signed __int32 *)v25;
              v24 = v26;
              v23 = (volatile signed __int64 *)(a1 + 8 * (v22 + 2LL));
            }
            v2 = 0LL;
          }
          ++v22;
          ++v21;
        }
        while ( v22 < 0x10 );
        if ( !v23 )
        {
          v19 = 0LL;
          goto LABEL_43;
        }
        v27 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v57 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
        while ( 1 )
        {
          v29 = RtlpInterlockedPopEntrySList(v27);
          v30 = (_QWORD **)v29;
          if ( !v29 )
            break;
          v30 = (_QWORD **)&v29[-3];
          v31 = v29;
          if ( (*((_DWORD *)&v29[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v30, a1) )
            {
              RtlpInterlockedPushEntrySList(v27, v31);
              v30 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v30 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v30 + 11, 0xFFFFFFFD) == 2 )
          {
            v28 = **v30;
            *v30 = 0LL;
            RtlpInterlockedPushEntrySList(v28, v29);
          }
        }
        if ( v19 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 v23,
                                                 (signed __int64)v30,
                                                 (signed __int64)v19) )
          break;
        v20 = (__int64 *)(a1 + 16);
        if ( v30 )
        {
          RtlpInterlockedPushEntrySList(v27, v30 + 6);
          goto LABEL_23;
        }
      }
      if ( !v30 )
        *(_WORD *)(a1 + 174) = (unsigned __int8)(((__int64)v23 - a1 - 16) >> 3);
LABEL_43:
      if ( !v19 )
        break;
      _m_prefetchw((const void *)(v19 + 11));
      if ( _InterlockedAnd(v19 + 11, 0xFFFFFFFD) != 2 )
        goto LABEL_45;
      v42 = **(_QWORD **)v19;
      *(_QWORD *)v19 = 0LL;
      RtlpInterlockedPushEntrySList(v42, v19 + 12);
    }
    v35 = 0;
    v36 = 0LL;
    v37 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v57 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
    v38 = RtlpInterlockedPopEntrySList(v37);
    if ( !v38 )
      return 0LL;
    do
    {
      v19 = (volatile signed __int32 *)&v38[-3];
      if ( (*((_DWORD *)&v38[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v19 + 11));
        if ( _InterlockedAnd(v19 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_85;
LABEL_84:
        v44 = **(_QWORD **)v19;
        *(_QWORD *)v19 = 0LL;
        RtlpInterlockedPushEntrySList(v44, v38);
        goto LABEL_85;
      }
      if ( (unsigned int)RtlpSetSegmentInfo(&v38[-3], a1) )
      {
        _m_prefetchw((const void *)(v19 + 11));
        if ( _InterlockedAnd(v19 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_84;
        if ( RtlpIsSubSegmentReuseable(a1, (__int64)&v38[-3]) )
          break;
      }
      else
      {
        v38->Next = v36;
        v43 = v38;
        v36 = v38;
        if ( v35 )
          v43 = v2;
        ++v35;
        v2 = v43;
      }
LABEL_85:
      v19 = 0LL;
      v38 = RtlpInterlockedPopEntrySList(v37);
    }
    while ( v38 );
    if ( v35 )
      InterlockedPushListSList(v37, v36, v2, v35);
    v2 = 0LL;
LABEL_45:
    if ( !v19 )
      return 0LL;
    *((_BYTE *)v19 + 43) = a2;
    do
    {
      v32 = *((_DWORD *)v19 + 11);
      if ( !v32 || (v32 & 6) != 0 )
        goto LABEL_2;
    }
    while ( v32 != _InterlockedCompareExchange(v19 + 11, v32 | 6, v32) );
    v33 = *(__int64 **)v19;
    if ( *(_QWORD *)v19 == a1 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v34 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v34 = 2147353472LL;
      if ( *(_BYTE *)v34 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), *((_QWORD *)v19 + 1));
      v19 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(a1 + 8), (__int64)v19);
      if ( v19 )
      {
        _m_prefetchw((const void *)(v19 + 11));
        if ( _InterlockedAnd(v19 + 11, 0xFFFFFFF9) == 6 )
        {
LABEL_101:
          v50 = **(_QWORD **)v19;
          *(_QWORD *)v19 = 0LL;
LABEL_99:
          v51 = (_QWORD **)(v19 + 12);
LABEL_100:
          RtlpInterlockedPushEntrySList(v50, v51);
        }
        else if ( RtlpIsSubSegmentReuseable(a1, (__int64)v19) )
        {
          while ( 1 )
          {
            v52 = *((_DWORD *)v19 + 11);
            if ( !v52 || (v52 & 2) != 0 )
              break;
            if ( v52 == _InterlockedCompareExchange(v19 + 11, v52 | 2, v52) )
            {
              v53 = *(__int64 **)v19;
              v54 = 0;
              while ( 1 )
              {
                v55 = ((_BYTE)v54 + (unsigned __int8)*((_WORD *)v53 + 87)) & 0xF;
                v49 = (_QWORD **)v53[v55 + 2];
                if ( v49 )
                {
                  if ( (*((_DWORD *)v49 + 11) & 1) == 0
                    && v49 == (_QWORD **)_InterlockedCompareExchange64(
                                           &v53[v55 + 2],
                                           (signed __int64)v19,
                                           (signed __int64)v49) )
                  {
                    goto LABEL_104;
                  }
                }
                else if ( !_InterlockedCompareExchange64(&v53[v55 + 2], (signed __int64)v19, 0LL) )
                {
                  goto LABEL_2;
                }
                if ( (unsigned int)++v54 >= 0x10 )
                  goto LABEL_98;
              }
            }
          }
        }
      }
    }
    else
    {
      _m_prefetchw((const void *)(v19 + 11));
      if ( _InterlockedAnd(v19 + 11, 0xFFFFFFF9) == 6 )
        goto LABEL_101;
      if ( !RtlpIsSubSegmentReuseable((__int64)v33, (__int64)v19) )
        continue;
      do
      {
        v45 = *((_DWORD *)v19 + 11);
        if ( !v45 || (v45 & 2) != 0 )
          goto LABEL_2;
      }
      while ( v45 != _InterlockedCompareExchange(v19 + 11, v45 | 2, v45) );
      v46 = *(__int64 **)v19;
      v47 = 0;
      while ( 1 )
      {
        v48 = ((_BYTE)v47 + (unsigned __int8)*((_WORD *)v46 + 87)) & 0xF;
        v49 = (_QWORD **)v46[v48 + 2];
        if ( !v49 )
        {
          if ( !_InterlockedCompareExchange64(&v46[v48 + 2], (signed __int64)v19, 0LL) )
            goto LABEL_2;
          goto LABEL_97;
        }
        if ( (*((_DWORD *)v49 + 11) & 1) == 0
          && v49 == (_QWORD **)_InterlockedCompareExchange64(&v46[v48 + 2], (signed __int64)v19, (signed __int64)v49) )
        {
          break;
        }
LABEL_97:
        if ( (unsigned int)++v47 >= 0x10 )
        {
LABEL_98:
          v50 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v19 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v19 + 172LL)
                          + 1192)
              + 144LL;
          goto LABEL_99;
        }
      }
LABEL_104:
      _m_prefetchw((char *)v49 + 44);
      if ( _InterlockedAnd((volatile signed __int32 *)v49 + 11, 0xFFFFFFFD) == 2 )
      {
        v50 = **v49;
        *v49 = 0LL;
        v51 = v49 + 6;
        goto LABEL_100;
      }
    }
  }
}
