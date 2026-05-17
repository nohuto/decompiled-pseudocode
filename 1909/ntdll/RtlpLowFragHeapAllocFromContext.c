/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x18003B6C0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpAllocateUserBlock @ 0x180018338 (RtlpAllocateUserBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpIsSubSegmentReuseable @ 0x180043114 (RtlpIsSubSegmentReuseable.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180043140 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpGetSubSegmentBlockCount @ 0x18004A254 (RtlpGetSubSegmentBlockCount.c)
 *     RtlpSubSegmentInitialize @ 0x18004A2C0 (RtlpSubSegmentInitialize.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18004A840 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpFreeUserBlock @ 0x18004AD04 (RtlpFreeUserBlock.c)
 *     RtlpLfhFindClearBitAndSet @ 0x18004DC08 (RtlpLfhFindClearBitAndSet.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x18006E0CC (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800701E0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x180079C38 (RtlpSetSegmentInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A0960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A09A0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A0A10 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A1920 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x18010304C (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1801037A0 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocFromContext(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 v4; // r12
  unsigned __int16 *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rdx
  signed __int32 v14; // ebx
  __int64 v15; // rbx
  struct _TEB *v16; // rdi
  __int64 HeapData_low; // rcx
  __int64 UniqueThread_low; // rsi
  int v19; // ebx
  unsigned int CurrentProcessorNumber; // eax
  __int64 v21; // r15
  struct _TEB *v22; // r14
  unsigned int v23; // r12d
  unsigned __int16 HeapData_high; // ax
  __int64 v25; // rcx
  unsigned __int16 v26; // bp
  __int16 v27; // ax
  int ClearBitAndSet; // eax
  unsigned __int64 v29; // rsi
  __int16 RandomValue32; // ax
  _QWORD *v32; // rax
  volatile signed __int32 *v33; // r12
  unsigned int v34; // edi
  volatile signed __int64 *v35; // r13
  _QWORD *v36; // rbx
  unsigned int v37; // r15d
  __int64 v38; // rbp
  union _SLIST_HEADER *v39; // rbp
  PSLIST_ENTRY v40; // rbx
  int v41; // ecx
  PSLIST_ENTRY v42; // rdi
  _SLIST_ENTRY *Next; // rcx
  __int64 v44; // rbx
  __int64 v45; // rcx
  char *v46; // rcx
  unsigned int v47; // r14d
  __int16 v48; // ax
  signed __int32 v49; // eax
  __int64 v50; // rcx
  __int64 *v51; // r8
  __int64 v52; // rcx
  signed __int32 v53; // eax
  __int64 *v54; // r9
  int v55; // r8d
  __int64 v56; // rax
  __int64 **v57; // rdx
  __int64 *v58; // rcx
  signed __int32 v59; // eax
  signed __int32 v60; // ett
  unsigned int v61; // ebp
  _SLIST_ENTRY *v62; // rbx
  PSLIST_ENTRY v63; // r15
  union _SLIST_HEADER *v64; // r14
  PSLIST_ENTRY v65; // rdi
  __int64 v66; // rcx
  unsigned int v67; // ebx
  unsigned int v68; // r9d
  BOOL v69; // r8d
  signed __int64 v70; // rax
  char v71; // r10
  char v72; // cl
  __int64 v73; // rdi
  unsigned int SubSegmentBlockCount; // eax
  unsigned int v75; // eax
  unsigned int v76; // ecx
  unsigned int v77; // eax
  unsigned int v78; // ecx
  unsigned __int8 v79; // cl
  char v80; // r9
  PSLIST_ENTRY UserBlock; // rax
  PSLIST_ENTRY v82; // rdi
  unsigned __int64 v83; // rdx
  __int64 v84; // rbp
  PSLIST_ENTRY v85; // rax
  volatile signed __int32 *v86; // rbx
  signed __int32 v87; // eax
  __int64 v88; // rcx
  __int64 *v89; // r8
  __int64 v90; // rcx
  signed __int32 v91; // eax
  __int64 *v92; // r9
  int v93; // r8d
  __int64 v94; // rax
  __int64 *v95; // rcx
  __int64 v96; // rcx
  _QWORD **v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  volatile signed __int32 *v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rcx
  signed __int32 v105; // eax
  __int64 *v106; // r9
  unsigned int j; // r8d
  __int64 v108; // rax
  __int64 *v109; // rcx
  volatile signed __int32 *v110; // rdx
  __int64 v111; // rcx
  signed __int32 v112; // eax
  __int64 *v113; // r9
  unsigned int k; // r8d
  __int64 v115; // rax
  __int64 *v116; // rcx
  signed __int32 v117; // eax
  __int64 *v118; // r9
  int v119; // r8d
  __int64 v120; // rax
  __int64 **v121; // rdx
  __int64 *v122; // rcx
  int v123; // [rsp+30h] [rbp-88h]
  __int64 i; // [rsp+30h] [rbp-88h]
  __int64 v125; // [rsp+38h] [rbp-80h]
  signed __int64 v126; // [rsp+40h] [rbp-78h]
  int v127; // [rsp+48h] [rbp-70h]
  __int64 v128; // [rsp+48h] [rbp-70h]
  unsigned __int16 *v129; // [rsp+50h] [rbp-68h]
  __int64 v130; // [rsp+60h] [rbp-58h]
  union _SLIST_HEADER *ListHead; // [rsp+68h] [rbp-50h]
  unsigned int v133; // [rsp+C8h] [rbp+10h]

  v4 = 0LL;
  v133 = 0;
  v6 = (unsigned __int16 *)(a1 + 4 * (a2 + 169LL));
  v129 = v6;
  if ( (*(_BYTE *)(a1 + 672) & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v16 = NtCurrentTeb();
    HeapData_low = LOBYTE(v16->HeapData);
    UniqueThread_low = LODWORD(v16->ClientId.UniqueThread);
    v4 = (unsigned int)(HeapData_low - 1);
    v133 = v4;
    if ( (int)v4 < 0 || RtlpAffinityState[HeapData_low] != UniqueThread_low )
    {
      v19 = HIDWORD(RtlpAffinityState[0]);
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v4 = v19 & CurrentProcessorNumber;
      v133 = v19 & CurrentProcessorNumber;
      LOBYTE(v16->HeapData) = (v19 & CurrentProcessorNumber) + 1;
      qword_1801636A8[v4] = UniqueThread_low;
    }
  }
  v7 = 16LL * *v6;
  v130 = v7;
  ListHead = (union _SLIST_HEADER *)(a1 + 48 * (v4 + 68));
  v8 = *((unsigned __int8 *)v6 + 2);
  if ( (_DWORD)v4 )
    v9 = *(_QWORD *)(a1 + 8 * v8 + 2224) - 192LL + 192 * v4;
  else
    v9 = *(_QWORD *)(a1 + 8 * v8 + 1192);
  v125 = v9;
LABEL_6:
  while ( 2 )
  {
    while ( 2 )
    {
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 )
      {
        v123 = 0;
        v11 = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
        v127 = v11;
        if ( (*(_DWORD *)(v10 + 32) & 0x80000000) != 0 )
        {
          v123 = 1;
          v44 = v11 + 4LL * *(unsigned __int16 *)(v9 + 172);
          if ( (*(_BYTE *)(v44 + 679) & 1) == 0
            && (int)RtlpAffinitizeSegmentInfoForBucket(v11, *(unsigned __int8 *)(v44 + 678)) >= 0 )
          {
            v45 = *(unsigned __int8 *)(v44 + 679) | 1u;
            *(_BYTE *)(v44 + 679) |= 1u;
            v46 = (unsigned int)RtlGetCurrentServiceSessionId(v45)
                ? (char *)NtCurrentPeb()->SharedData + 550
                : (char *)2147353472;
            if ( *v46 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v11 + 24), *(unsigned __int8 *)(v44 + 678));
          }
        }
        v12 = 0LL;
        if ( MEMORY[0x7FFE036A] > 1u )
          v12 = 100LL;
        v13 = 0LL;
        while ( 1 )
        {
          v14 = *(_DWORD *)(v10 + 32);
          if ( (v14 & 0x80000000) == 0 )
          {
            if ( !(_WORD)v14 )
              goto LABEL_20;
            if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 32), v14 | 0x80000000, v14) )
              break;
          }
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 > (unsigned int)v12 )
          {
            v15 = 0LL;
            goto LABEL_29;
          }
        }
        if ( v14 == -1 )
          goto LABEL_20;
        v21 = *(_QWORD *)(v10 + 8);
        if ( !v21 || *(_QWORD *)v10 != v9 || !(_WORD)v14 )
        {
          *(_DWORD *)(v10 + 32) = v14;
LABEL_20:
          v15 = 0LL;
          goto LABEL_29;
        }
        v22 = NtCurrentTeb();
        v23 = RtlpSearchWidth[*(unsigned __int16 *)(v9 + 172)];
        HeapData_high = HIWORD(v22->HeapData);
        v25 = HeapData_high;
        v26 = (unsigned __int8)HeapData_high;
        if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
        {
          LOWORD(v25) = HIBYTE(HeapData_high);
          RandomValue32 = RtlpHeapGenerateRandomValue32(v25, v13, v12);
          v27 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
        }
        else
        {
          v27 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
        }
        HIWORD(v22->HeapData) = v27;
        ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                           v21 + 32,
                           (unsigned int)(v14 >> 16),
                           RtlpLowFragHeapRandomData[v26],
                           v23);
        *(_DWORD *)(v10 + 32) = (ClearBitAndSet << 16) | ((unsigned __int16)v14 - 1);
        v15 = v21
            + ClearBitAndSet * (((unsigned int)RtlpLFHKey ^ (unsigned int)v21 ^ v127 ^ *(_DWORD *)(v21 + 24)) >> 16)
            + (unsigned __int16)(RtlpLFHKey ^ v21 ^ v127 ^ *(_WORD *)(v21 + 24));
        if ( (*(_BYTE *)(v15 + 15) & 0x3F) != 0 )
        {
          RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL), v15, 0, 0LL, 0LL);
          goto LABEL_20;
        }
LABEL_29:
        if ( v123 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
          _InterlockedCompareExchange(
            (_DWORD *)RtlpAffinityState + 1,
            2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
            SHIDWORD(RtlpAffinityState[0]));
        if ( v15 )
        {
          if ( (a4 & 8) != 0 )
            memset((void *)(v15 + 16), 0, v7 - 8);
          v29 = v7 - a3;
          if ( v29 >= 0x3F )
          {
            *(_QWORD *)(v15 + 16LL * *v129) = v29;
            *(_BYTE *)(v15 + 15) = -65;
          }
          else
          {
            *(_BYTE *)(v15 + 15) = v29 | 0x80;
          }
          return v15 + 16;
        }
      }
      v128 = *(_QWORD *)v9;
      v32 = (_QWORD *)(v9 + 16);
      for ( i = v9 + 16; ; v32 = (_QWORD *)i )
      {
        v33 = 0LL;
        while ( 1 )
        {
          v34 = 0;
          v35 = 0LL;
          v36 = v32;
          v37 = 0;
          do
          {
            v38 = *v36;
            if ( *v36 )
            {
              v47 = *(unsigned __int16 *)(v38 + 32);
              if ( v47 > v37 && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(v125, *v36) )
              {
                v33 = (volatile signed __int32 *)v38;
                v37 = v47;
                v35 = (volatile signed __int64 *)(v125 + 8 * (v34 + 2LL));
              }
            }
            ++v34;
            ++v36;
          }
          while ( v34 < 0x10 );
          v7 = v130;
          if ( !v35 )
          {
            v9 = v125;
            v33 = 0LL;
            goto LABEL_92;
          }
          v39 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v128 + 24)
                                                  + 8LL * *(unsigned __int16 *)(v125 + 172)
                                                  + 1192)
                                      + 144LL);
          v40 = RtlpInterlockedPopEntrySList(v39);
          if ( v40 )
          {
            while ( 1 )
            {
              v41 = *((_DWORD *)&v40[-1].Next + 3);
              v42 = v40;
              v40 -= 3;
              if ( (v41 & 1) != 0 )
                break;
              _m_prefetchw((char *)&v40[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v40[2].Next + 3, 0xFFFFFFFD) == 2 )
              {
                Next = v40->Next->Next;
                v40->Next = 0LL;
                RtlpInterlockedPushEntrySList(Next, v42);
              }
              v40 = RtlpInterlockedPopEntrySList(v39);
              if ( !v40 )
                goto LABEL_48;
            }
            if ( !(unsigned int)RtlpSetSegmentInfo(v40, v125) )
            {
              RtlpInterlockedPushEntrySList(v39, v42);
              v40 = 0LL;
            }
          }
LABEL_48:
          if ( v33 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                   v35,
                                                   (signed __int64)v40,
                                                   (signed __int64)v33) )
            break;
          v32 = (_QWORD *)i;
          if ( v40 )
          {
            RtlpInterlockedPushEntrySList(v39, &v40[3]);
            v32 = (_QWORD *)i;
          }
        }
        if ( v40 )
        {
          v9 = v125;
        }
        else
        {
          v48 = (unsigned __int8)(((__int64)v35 - v125 - 16) >> 3);
          v9 = v125;
          *(_WORD *)(v125 + 174) = v48;
        }
        if ( !v33 )
          break;
        _m_prefetchw((const void *)(v33 + 11));
        if ( _InterlockedAnd(v33 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_69;
        v102 = **(_QWORD **)v33;
        *(_QWORD *)v33 = 0LL;
        RtlpInterlockedPushEntrySList(v102, v33 + 12);
      }
LABEL_92:
      v61 = 0;
      v62 = 0LL;
      v63 = 0LL;
      v64 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v128 + 24) + 8LL * *(unsigned __int16 *)(v9 + 172) + 1192)
                                  + 144LL);
      v65 = RtlpInterlockedPopEntrySList(v64);
      if ( !v65 )
        goto LABEL_69;
      while ( 1 )
      {
        v33 = (volatile signed __int32 *)&v65[-3];
        if ( (*((_DWORD *)&v65[-1].Next + 3) & 1) != 0 )
          break;
        _m_prefetchw((const void *)(v33 + 11));
        if ( _InterlockedAnd(v33 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_95;
LABEL_96:
        v33 = 0LL;
        v65 = RtlpInterlockedPopEntrySList(v64);
        if ( !v65 )
          goto LABEL_97;
      }
      if ( !(unsigned int)RtlpSetSegmentInfo(&v65[-3], v9) )
      {
        if ( !v61 )
          v63 = v65;
        v65->Next = v62;
        ++v61;
        v62 = v65;
        goto LABEL_96;
      }
      _m_prefetchw((const void *)(v33 + 11));
      if ( _InterlockedAnd(v33 + 11, 0xFFFFFFFD) == 2 )
      {
LABEL_95:
        v66 = **(_QWORD **)v33;
        *(_QWORD *)v33 = 0LL;
        RtlpInterlockedPushEntrySList(v66, v65);
        goto LABEL_96;
      }
      if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v9, &v65[-3]) )
        goto LABEL_96;
LABEL_97:
      if ( v61 )
        InterlockedPushListSList(v64, v62, v63, v61);
LABEL_69:
      if ( v33 )
      {
        *((_BYTE *)v33 + 43) = v133;
        do
        {
          v49 = *((_DWORD *)v33 + 11);
          if ( !v49 || (v49 & 6) != 0 )
            goto LABEL_6;
          v50 = v49 | 6u;
        }
        while ( v49 != _InterlockedCompareExchange(v33 + 11, v50, v49) );
        v51 = *(__int64 **)v33;
        if ( *(_QWORD *)v33 == v9 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v50) )
            v52 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v52 = 2147353472LL;
          if ( *(_BYTE *)v52 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL), *((_QWORD *)v33 + 1));
          v33 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v9 + 8), (__int64)v33);
          if ( !v33 )
            continue;
          _m_prefetchw((const void *)(v33 + 11));
          if ( _InterlockedAnd(v33 + 11, 0xFFFFFFF9) == 6 )
          {
            v104 = **(_QWORD **)v33;
            *(_QWORD *)v33 = 0LL;
            RtlpInterlockedPushEntrySList(v104, v33 + 12);
            continue;
          }
          if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v9, v33) )
            continue;
          do
          {
            v53 = *((_DWORD *)v33 + 11);
            if ( !v53 || (v53 & 2) != 0 )
              goto LABEL_6;
          }
          while ( v53 != _InterlockedCompareExchange(v33 + 11, v53 | 2, v53) );
          v54 = *(__int64 **)v33;
          v55 = 0;
LABEL_85:
          v56 = ((_BYTE)v55 + (unsigned __int8)*((_WORD *)v54 + 87)) & 0xF;
          v57 = (__int64 **)v54[v56 + 2];
          v58 = &v54[v56];
          if ( !v57 )
          {
            if ( !_InterlockedCompareExchange64(v58 + 2, (signed __int64)v33, 0LL) )
              continue;
LABEL_161:
            if ( (unsigned int)++v55 >= 0x10 )
              goto LABEL_162;
            goto LABEL_85;
          }
          if ( (*((_DWORD *)v57 + 11) & 1) != 0
            || v57 != (__int64 **)_InterlockedCompareExchange64(v58 + 2, (signed __int64)v33, (signed __int64)v57) )
          {
            goto LABEL_161;
          }
          _m_prefetchw((char *)v57 + 44);
          v59 = *((_DWORD *)v57 + 11);
          do
          {
            v60 = v59;
            v59 = _InterlockedCompareExchange((volatile signed __int32 *)v57 + 11, v59 & 0xFFFFFFFD, v59);
          }
          while ( v60 != v59 );
LABEL_143:
          if ( v59 == 2 )
          {
            v96 = **v57;
            *v57 = 0LL;
            v97 = v57 + 6;
            goto LABEL_145;
          }
          continue;
        }
        _m_prefetchw((const void *)(v33 + 11));
        if ( _InterlockedAnd(v33 + 11, 0xFFFFFFF9) == 6 )
        {
          v97 = (_QWORD **)(v33 + 12);
          v96 = **(_QWORD **)v33;
          *(_QWORD *)v33 = 0LL;
LABEL_145:
          RtlpInterlockedPushEntrySList(v96, v97);
          continue;
        }
        if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v51, v33) )
          continue;
        do
        {
          v105 = *((_DWORD *)v33 + 11);
          if ( !v105 || (v105 & 2) != 0 )
            goto LABEL_6;
        }
        while ( v105 != _InterlockedCompareExchange(v33 + 11, v105 | 2, v105) );
        v106 = *(__int64 **)v33;
        for ( j = 0; j < 0x10; ++j )
        {
          v108 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v106 + 87)) & 0xF;
          v57 = (__int64 **)v106[v108 + 2];
          v109 = &v106[v108];
          if ( v57 )
          {
            if ( (*((_DWORD *)v57 + 11) & 1) == 0
              && v57 == (__int64 **)_InterlockedCompareExchange64(v109 + 2, (signed __int64)v33, (signed __int64)v57) )
            {
              goto LABEL_142;
            }
          }
          else if ( !_InterlockedCompareExchange64(v109 + 2, (signed __int64)v33, 0LL) )
          {
            goto LABEL_6;
          }
        }
LABEL_162:
        v99 = *(_QWORD *)(**(_QWORD **)v33 + 24LL);
        v100 = *(unsigned __int16 *)(*(_QWORD *)v33 + 172LL);
        v101 = v33 + 12;
LABEL_155:
        RtlpInterlockedPushEntrySList(*(_QWORD *)(v99 + 8 * v100 + 1192) + 144LL, v101);
        continue;
      }
      break;
    }
    v67 = *(_DWORD *)(v9 + 160);
    v68 = *((unsigned __int8 *)v129 + 2);
    v69 = (*(_BYTE *)(a1 + 672) & 2) != 0;
    do
    {
      v70 = *(_QWORD *)(a1 + 80);
      v71 = 0;
      if ( (_DWORD)v70 == v68 )
      {
        HIDWORD(v126) = HIDWORD(v70) + 1;
        if ( HIDWORD(v70) > 7 )
        {
          v71 = 1;
          HIDWORD(v126) = 0;
        }
      }
      else
      {
        v126 = v68 | 0x100000000LL;
      }
    }
    while ( v70 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v126, v70) );
    if ( !v71 || v69 )
    {
      v72 = 3;
      if ( v69 )
        v72 = 4;
      v67 >>= v72;
    }
    v73 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v129 + 2)];
    SubSegmentBlockCount = RtlpGetSubSegmentBlockCount(v73, v67, *((_BYTE *)v129 + 3) & 1, *(unsigned int *)(v9 + 164));
    v75 = ((((unsigned __int64)SubSegmentBlockCount + 31) >> 3) & 0xFFFFFFFC) + 68 + (v73 + 16) * SubSegmentBlockCount;
    if ( v75 >= 0xF0000 )
      v75 = 983040;
    _BitScanReverse(&v76, v75 - 1);
    v77 = 7;
    v78 = v76 + 1;
    if ( v78 > 7 )
      v77 = v78;
    v79 = 18;
    if ( v77 < 0x12 )
      v79 = v77;
    if ( (*((_BYTE *)v129 + 3) & 6) != 0 )
      v79 = 18;
    v80 = v67 >= 0x400 || v79 == 18;
    UserBlock = RtlpAllocateUserBlock(a1, v79, v73 + 16, v80);
    v82 = UserBlock;
    if ( UserBlock )
    {
      v83 = 1LL << LOBYTE(UserBlock[1].Next);
      if ( v83 > 0xF0000 )
        v83 = 983040LL;
      v84 = v83 + WORD1(UserBlock[1].Next);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
      v85 = RtlpInterlockedPopEntrySList(ListHead);
      if ( v85 )
      {
        v86 = (volatile signed __int32 *)&v85[-3];
LABEL_123:
        if ( v86 )
        {
          *((_BYTE *)v86 + 43) = v133;
          RtlpSubSegmentInitialize(
            a1,
            (_DWORD)v86,
            (_DWORD)v82,
            (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v129 + 2)],
            v84,
            (__int64)v129);
          do
          {
            v87 = *((_DWORD *)v86 + 11);
            if ( !v87 || (v87 & 6) != 0 )
              goto LABEL_195;
            v88 = v87 | 6u;
          }
          while ( v87 != _InterlockedCompareExchange(v86 + 11, v88, v87) );
          v89 = *(__int64 **)v86;
          if ( *(_QWORD *)v86 == v9 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v88) )
              v90 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v90 = 2147353472LL;
            if ( *(_BYTE *)v90 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL), *((_QWORD *)v86 + 1));
            v86 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v9 + 8), (__int64)v86);
            if ( !v86 )
              continue;
            _m_prefetchw((const void *)(v86 + 11));
            if ( _InterlockedAnd(v86 + 11, 0xFFFFFFF9) == 6 )
            {
              v103 = **(_QWORD **)v86;
              *(_QWORD *)v86 = 0LL;
              RtlpInterlockedPushEntrySList(v103, v86 + 12);
              continue;
            }
            if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v9, v86) )
              continue;
            do
            {
              v91 = *((_DWORD *)v86 + 11);
              if ( !v91 || (v91 & 2) != 0 )
                goto LABEL_6;
            }
            while ( v91 != _InterlockedCompareExchange(v86 + 11, v91 | 2, v91) );
            v92 = *(__int64 **)v86;
            v93 = 0;
            while ( 1 )
            {
              v94 = ((_BYTE)v93 + (unsigned __int8)*((_WORD *)v92 + 87)) & 0xF;
              v57 = (__int64 **)v92[v94 + 2];
              v95 = &v92[v94];
              if ( v57 )
              {
                if ( (*((_DWORD *)v57 + 11) & 1) == 0
                  && v57 == (__int64 **)_InterlockedCompareExchange64(v95 + 2, (signed __int64)v86, (signed __int64)v57) )
                {
                  goto LABEL_142;
                }
              }
              else if ( !_InterlockedCompareExchange64(v95 + 2, (signed __int64)v86, 0LL) )
              {
                goto LABEL_6;
              }
              if ( (unsigned int)++v93 >= 0x10 )
                goto LABEL_154;
            }
          }
          _m_prefetchw((const void *)(v86 + 11));
          if ( _InterlockedAnd(v86 + 11, 0xFFFFFFF9) == 6 )
          {
            v110 = v86 + 12;
            v111 = **(_QWORD **)v86;
            *(_QWORD *)v86 = 0LL;
            goto LABEL_194;
          }
          if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v89, v86) )
          {
            do
            {
              v117 = *((_DWORD *)v86 + 11);
              if ( !v117 || (v117 & 2) != 0 )
                goto LABEL_195;
            }
            while ( v117 != _InterlockedCompareExchange(v86 + 11, v117 | 2, v117) );
            v118 = *(__int64 **)v86;
            v119 = 0;
            while ( 1 )
            {
              v120 = ((_BYTE)v119 + (unsigned __int8)*((_WORD *)v118 + 87)) & 0xF;
              v121 = (__int64 **)v118[v120 + 2];
              v122 = &v118[v120];
              if ( v121 )
              {
                if ( (*((_DWORD *)v121 + 11) & 1) == 0
                  && v121 == (__int64 **)_InterlockedCompareExchange64(
                                           v122 + 2,
                                           (signed __int64)v86,
                                           (signed __int64)v121) )
                {
                  _m_prefetchw((char *)v121 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v121 + 11, 0xFFFFFFFD) == 2 )
                  {
                    v111 = **v121;
                    *v121 = 0LL;
                    v110 = (volatile signed __int32 *)(v121 + 6);
LABEL_194:
                    RtlpInterlockedPushEntrySList(v111, v110);
                  }
                  goto LABEL_195;
                }
              }
              else if ( !_InterlockedCompareExchange64(v122 + 2, (signed __int64)v86, 0LL) )
              {
                goto LABEL_195;
              }
              if ( (unsigned int)++v119 >= 0x10 )
              {
                v110 = v86 + 12;
                v111 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v86 + 24LL)
                                 + 8LL * *(unsigned __int16 *)(*(_QWORD *)v86 + 172LL)
                                 + 1192)
                     + 144LL;
                goto LABEL_194;
              }
            }
          }
          do
          {
LABEL_195:
            v112 = *((_DWORD *)v86 + 11);
            if ( !v112 || (v112 & 2) != 0 )
              goto LABEL_6;
          }
          while ( v112 != _InterlockedCompareExchange(v86 + 11, v112 | 2, v112) );
          v113 = *(__int64 **)v86;
          for ( k = 0; k < 0x10; ++k )
          {
            v115 = ((_BYTE)k + (unsigned __int8)*((_WORD *)v113 + 87)) & 0xF;
            v57 = (__int64 **)v113[v115 + 2];
            v116 = &v113[v115];
            if ( v57 )
            {
              if ( (*((_DWORD *)v57 + 11) & 1) == 0
                && v57 == (__int64 **)_InterlockedCompareExchange64(v116 + 2, (signed __int64)v86, (signed __int64)v57) )
              {
LABEL_142:
                _m_prefetchw((char *)v57 + 44);
                v59 = _InterlockedAnd((volatile signed __int32 *)v57 + 11, 0xFFFFFFFD);
                goto LABEL_143;
              }
            }
            else if ( !_InterlockedCompareExchange64(v116 + 2, (signed __int64)v86, 0LL) )
            {
              goto LABEL_6;
            }
          }
LABEL_154:
          v99 = *(_QWORD *)(**(_QWORD **)v86 + 24LL);
          v100 = *(unsigned __int16 *)(*(_QWORD *)v86 + 172LL);
          v101 = v86 + 12;
          goto LABEL_155;
        }
      }
      else
      {
        v98 = RtlpLowFragHeapAllocateFromZone(a1, v133);
        v86 = (volatile signed __int32 *)v98;
        if ( v98 )
        {
          *(_QWORD *)(v98 + 8) = 0LL;
          goto LABEL_123;
        }
      }
      RtlpFreeUserBlock(a1, v82);
    }
    return 0LL;
  }
}
