/*
 * XREFs of RtlpLocalInfoAllocFromCache @ 0x18006915C
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180068C90 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000E9A4 (RtlpHeapGenerateRandomValue32.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpIsSubSegmentReuseable @ 0x18001B588 (RtlpIsSubSegmentReuseable.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18005CB1C (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpLfhFindClearBitAndSet @ 0x180069524 (RtlpLfhFindClearBitAndSet.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x1800695D4 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpSetSegmentInfo @ 0x18007D61C (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A3DB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DF0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A3E60 (InterlockedPushListSList.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180105974 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1801060C8 (RtlpLogHeapSubSegmentActivate.c)
 */

__int64 __fastcall RtlpLocalInfoAllocFromCache(__int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // edx
  unsigned int v6; // r8d
  signed __int32 v7; // ebx
  __int64 v8; // r12
  struct _TEB *v9; // r15
  unsigned int v10; // r13d
  unsigned __int16 HeapData_high; // bp
  __int16 v12; // ax
  int ClearBitAndSet; // eax
  __int64 v14; // r8
  volatile signed __int32 *v16; // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // r15
  unsigned int v19; // ebp
  volatile signed __int64 *v20; // rsi
  unsigned int v21; // r13d
  __int64 v22; // rbx
  _SLIST_HEADER *v23; // rbp
  PSLIST_ENTRY v24; // rax
  _QWORD **v25; // rbx
  signed __int32 v26; // eax
  __int64 *v27; // r8
  __int64 v28; // rcx
  unsigned int v29; // r12d
  unsigned int v30; // ebp
  _SLIST_ENTRY *v31; // rbx
  _SLIST_ENTRY *v32; // r15
  _SLIST_HEADER *v33; // r12
  PSLIST_ENTRY v34; // rsi
  __int16 RandomValue32; // ax
  __int64 v36; // rbx
  char *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  PSLIST_ENTRY v40; // rax
  __int64 v41; // rcx
  signed __int32 v42; // eax
  __int64 *v43; // r8
  int v44; // r9d
  __int64 v45; // rcx
  _QWORD **v46; // rdx
  __int64 v47; // rcx
  signed __int32 v48; // eax
  __int64 *v49; // r8
  int v50; // r9d
  __int64 v51; // rcx
  int v52; // [rsp+70h] [rbp+8h]
  __int64 v53; // [rsp+70h] [rbp+8h]

  while ( 1 )
  {
LABEL_1:
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      v52 = 0;
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      if ( (*(_DWORD *)(v3 + 32) & 0x80000000) != 0 )
      {
        v36 = *(unsigned __int16 *)(a1 + 172);
        v52 = 1;
        if ( (*(_BYTE *)(v4 + 4 * v36 + 679) & 1) == 0
          && (int)RtlpAffinitizeSegmentInfoForBucket(v4, *(unsigned __int8 *)(v4 + 4 * v36 + 678)) >= 0 )
        {
          *(_BYTE *)(v4 + 4 * v36 + 679) |= 1u;
          v37 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
          if ( *v37 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v4 + 24), *(unsigned __int8 *)(v4 + 4 * v36 + 678));
        }
      }
      v5 = 0;
      v6 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v7 = *(_DWORD *)(v3 + 32);
        if ( (v7 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v7 )
            goto LABEL_49;
          if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 32), v7 | 0x80000000, v7) )
            break;
        }
        if ( ++v5 > v6 )
        {
          v7 = -1;
          break;
        }
      }
      if ( v7 == -1 )
        goto LABEL_49;
      v8 = *(_QWORD *)(v3 + 8);
      if ( !v8 || *(_QWORD *)v3 != a1 || !(_WORD)v7 )
      {
        *(_DWORD *)(v3 + 32) = v7;
        goto LABEL_49;
      }
      v9 = NtCurrentTeb();
      v10 = RtlpSearchWidth[*(unsigned __int16 *)(a1 + 172)];
      HeapData_high = (unsigned __int8)HIWORD(v9->HeapData);
      if ( HeapData_high == HIBYTE(HIWORD(v9->HeapData)) )
      {
        RandomValue32 = RtlpHeapGenerateRandomValue32();
        v12 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
      }
      else
      {
        v12 = (unsigned __int8)(HIWORD(v9->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v9->HeapData);
      }
      HIWORD(v9->HeapData) = v12;
      ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                         v8 + 32,
                         (unsigned int)(v7 >> 16),
                         RtlpLowFragHeapRandomData[HeapData_high],
                         v10);
      *(_DWORD *)(v3 + 32) = (ClearBitAndSet << 16) | ((unsigned __int16)v7 - 1);
      v14 = v8
          + ClearBitAndSet
          * (((unsigned int)RtlpLFHKey ^ (unsigned int)v8 ^ (unsigned int)v4 ^ *(_DWORD *)(v8 + 24)) >> 16)
          + (unsigned __int16)(RtlpLFHKey ^ v8 ^ v4 ^ *(_WORD *)(v8 + 24));
      if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
      {
        RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), v14, 0, 0LL, 0LL);
LABEL_49:
        v14 = 0LL;
      }
      if ( v52 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
        _InterlockedCompareExchange(
          (_DWORD *)RtlpAffinityState + 1,
          2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
          SHIDWORD(RtlpAffinityState[0]));
      if ( v14 )
        return v14;
    }
    v53 = *(_QWORD *)a1;
    while ( 1 )
    {
      v16 = 0LL;
LABEL_19:
      v17 = (_QWORD *)(a1 + 16);
      while ( 1 )
      {
        v18 = v17;
        v19 = 0;
        v20 = 0LL;
        v21 = 0;
        do
        {
          v22 = *v18;
          if ( *v18 )
          {
            v29 = *(unsigned __int16 *)(v22 + 32);
            if ( v29 > v21 && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(a1, *v18) )
            {
              v16 = (volatile signed __int32 *)v22;
              v21 = v29;
              v20 = (volatile signed __int64 *)(a1 + 8 * (v19 + 2LL));
            }
          }
          ++v19;
          ++v18;
        }
        while ( v19 < 0x10 );
        if ( !v20 )
        {
          v16 = 0LL;
          goto LABEL_29;
        }
        v23 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v53 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
        while ( 1 )
        {
          v24 = RtlpInterlockedPopEntrySList(v23);
          v25 = (_QWORD **)v24;
          if ( !v24 )
            break;
          v25 = (_QWORD **)&v24[-3];
          if ( (*((_DWORD *)&v24[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v25, a1) )
            {
              RtlpInterlockedPushEntrySList(v23);
              v25 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v25 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v25 + 11, 0xFFFFFFFD) == 2 )
          {
            v38 = **v25;
            *v25 = 0LL;
            RtlpInterlockedPushEntrySList(v38);
          }
        }
        if ( v16 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 v20,
                                                 (signed __int64)v25,
                                                 (signed __int64)v16) )
          break;
        v17 = (_QWORD *)(a1 + 16);
        if ( v25 )
        {
          RtlpInterlockedPushEntrySList(v23);
          goto LABEL_19;
        }
      }
      if ( !v25 )
        *(_WORD *)(a1 + 174) = (unsigned __int8)(((__int64)v20 - a1 - 16) >> 3);
LABEL_29:
      if ( !v16 )
        break;
      _m_prefetchw((const void *)(v16 + 11));
      if ( _InterlockedAnd(v16 + 11, 0xFFFFFFFD) != 2 )
        goto LABEL_31;
      v39 = **(_QWORD **)v16;
      *(_QWORD *)v16 = 0LL;
      RtlpInterlockedPushEntrySList(v39);
    }
    v30 = 0;
    v31 = 0LL;
    v32 = 0LL;
    v33 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v53 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
    v34 = RtlpInterlockedPopEntrySList(v33);
    if ( !v34 )
      return 0LL;
    do
    {
      v16 = (volatile signed __int32 *)&v34[-3];
      if ( (*((_DWORD *)&v34[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v16 + 11));
        if ( _InterlockedAnd(v16 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_84;
LABEL_83:
        v41 = **(_QWORD **)v16;
        *(_QWORD *)v16 = 0LL;
        RtlpInterlockedPushEntrySList(v41);
        goto LABEL_84;
      }
      if ( (unsigned int)RtlpSetSegmentInfo(&v34[-3], a1) )
      {
        _m_prefetchw((const void *)(v16 + 11));
        if ( _InterlockedAnd(v16 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_83;
        if ( RtlpIsSubSegmentReuseable(a1, (__int64)&v34[-3]) )
          break;
      }
      else
      {
        v34->Next = v31;
        v40 = v34;
        v31 = v34;
        if ( v30 )
          v40 = v32;
        ++v30;
        v32 = v40;
      }
LABEL_84:
      v16 = 0LL;
      v34 = RtlpInterlockedPopEntrySList(v33);
    }
    while ( v34 );
    if ( v30 )
      InterlockedPushListSList(v33, v31, v32, v30);
LABEL_31:
    if ( !v16 )
      return 0LL;
    *((_BYTE *)v16 + 43) = a2;
    do
    {
      v26 = *((_DWORD *)v16 + 11);
      if ( !v26 || (v26 & 6) != 0 )
        goto LABEL_1;
    }
    while ( v26 != _InterlockedCompareExchange(v16 + 11, v26 | 6, v26) );
    v27 = *(__int64 **)v16;
    if ( *(_QWORD *)v16 == a1 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v28 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v28 = 2147353472LL;
      if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), *((_QWORD *)v16 + 1));
      v16 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(a1 + 8), (__int64)v16);
      if ( v16 )
      {
        _m_prefetchw((const void *)(v16 + 11));
        if ( _InterlockedAnd(v16 + 11, 0xFFFFFFF9) == 6 )
        {
LABEL_99:
          v47 = **(_QWORD **)v16;
          *(_QWORD *)v16 = 0LL;
          goto LABEL_98;
        }
        if ( RtlpIsSubSegmentReuseable(a1, (__int64)v16) )
        {
          while ( 1 )
          {
            v48 = *((_DWORD *)v16 + 11);
            if ( !v48 || (v48 & 2) != 0 )
              break;
            if ( v48 == _InterlockedCompareExchange(v16 + 11, v48 | 2, v48) )
            {
              v49 = *(__int64 **)v16;
              v50 = 0;
              while ( 1 )
              {
                v51 = ((_BYTE)v50 + (unsigned __int8)*((_WORD *)v49 + 87)) & 0xF;
                v46 = (_QWORD **)v49[v51 + 2];
                if ( v46 )
                {
                  if ( (*((_DWORD *)v46 + 11) & 1) == 0
                    && v46 == (_QWORD **)_InterlockedCompareExchange64(
                                           &v49[v51 + 2],
                                           (signed __int64)v16,
                                           (signed __int64)v46) )
                  {
                    goto LABEL_102;
                  }
                }
                else if ( !_InterlockedCompareExchange64(&v49[v51 + 2], (signed __int64)v16, 0LL) )
                {
                  goto LABEL_1;
                }
                if ( (unsigned int)++v50 >= 0x10 )
                  goto LABEL_97;
              }
            }
          }
        }
      }
    }
    else
    {
      _m_prefetchw((const void *)(v16 + 11));
      if ( _InterlockedAnd(v16 + 11, 0xFFFFFFF9) == 6 )
        goto LABEL_99;
      if ( RtlpIsSubSegmentReuseable((__int64)v27, (__int64)v16) )
      {
        while ( 1 )
        {
          v42 = *((_DWORD *)v16 + 11);
          if ( !v42 || (v42 & 2) != 0 )
            break;
          if ( v42 == _InterlockedCompareExchange(v16 + 11, v42 | 2, v42) )
          {
            v43 = *(__int64 **)v16;
            v44 = 0;
            while ( 1 )
            {
              v45 = ((_BYTE)v44 + (unsigned __int8)*((_WORD *)v43 + 87)) & 0xF;
              v46 = (_QWORD **)v43[v45 + 2];
              if ( v46 )
              {
                if ( (*((_DWORD *)v46 + 11) & 1) == 0
                  && v46 == (_QWORD **)_InterlockedCompareExchange64(
                                         &v43[v45 + 2],
                                         (signed __int64)v16,
                                         (signed __int64)v46) )
                {
LABEL_102:
                  _m_prefetchw((char *)v46 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v46 + 11, 0xFFFFFFFD) == 2 )
                  {
                    v47 = **v46;
                    *v46 = 0LL;
LABEL_98:
                    RtlpInterlockedPushEntrySList(v47);
                  }
                  goto LABEL_1;
                }
              }
              else if ( !_InterlockedCompareExchange64(&v43[v45 + 2], (signed __int64)v16, 0LL) )
              {
                goto LABEL_1;
              }
              if ( (unsigned int)++v44 >= 0x10 )
              {
LABEL_97:
                v47 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v16 + 24LL)
                                + 8LL * *(unsigned __int16 *)(*(_QWORD *)v16 + 172LL)
                                + 1192)
                    + 144LL;
                goto LABEL_98;
              }
            }
          }
        }
      }
    }
  }
}
