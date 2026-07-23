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
  ULONG CurrentProcessorNumber; // eax
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
  _SLIST_HEADER *v39; // rbp
  PSLIST_ENTRY v40; // rbx
  int v41; // ecx
  PSLIST_ENTRY v42; // rdi
  _SLIST_ENTRY *Next; // rcx
  __int64 v44; // rbx
  char *v45; // rcx
  unsigned int v46; // r14d
  __int16 v47; // ax
  signed __int32 v48; // eax
  __int64 *v49; // r8
  __int64 v50; // rcx
  signed __int32 v51; // eax
  __int64 *v52; // r9
  int v53; // r8d
  __int64 v54; // rax
  __int64 **v55; // rdx
  __int64 *v56; // rcx
  signed __int32 v57; // eax
  signed __int32 v58; // ett
  unsigned int v59; // ebp
  _SLIST_ENTRY *v60; // rbx
  PSLIST_ENTRY v61; // r15
  _SLIST_HEADER *v62; // r14
  PSLIST_ENTRY v63; // rdi
  __int64 v64; // rcx
  unsigned int v65; // ebx
  unsigned int v66; // r9d
  BOOL v67; // r8d
  signed __int64 v68; // rax
  char v69; // r10
  char v70; // cl
  __int64 v71; // rdi
  unsigned int SubSegmentBlockCount; // eax
  unsigned int v73; // eax
  unsigned int v74; // ecx
  unsigned int v75; // eax
  unsigned int v76; // ecx
  unsigned __int8 v77; // cl
  PSLIST_ENTRY UserBlock; // rax
  PSLIST_ENTRY v79; // rdi
  unsigned __int64 v80; // rdx
  __int64 v81; // rbp
  PSLIST_ENTRY v82; // rax
  volatile signed __int32 *v83; // rbx
  signed __int32 v84; // eax
  __int64 *v85; // r8
  __int64 v86; // rcx
  signed __int32 v87; // eax
  __int64 *v88; // r9
  int v89; // r8d
  __int64 v90; // rax
  __int64 *v91; // rcx
  __int64 v92; // rcx
  _QWORD **v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  volatile signed __int32 *v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  signed __int32 v101; // eax
  __int64 *v102; // r9
  unsigned int j; // r8d
  __int64 v104; // rax
  __int64 *v105; // rcx
  volatile signed __int32 *v106; // rdx
  __int64 v107; // rcx
  signed __int32 v108; // eax
  __int64 *v109; // r9
  unsigned int k; // r8d
  __int64 v111; // rax
  __int64 *v112; // rcx
  signed __int32 v113; // eax
  __int64 *v114; // r9
  int v115; // r8d
  __int64 v116; // rax
  __int64 **v117; // rdx
  __int64 *v118; // rcx
  int v119; // [rsp+30h] [rbp-88h]
  __int64 i; // [rsp+30h] [rbp-88h]
  __int64 v121; // [rsp+38h] [rbp-80h]
  signed __int64 v122; // [rsp+40h] [rbp-78h]
  int v123; // [rsp+48h] [rbp-70h]
  __int64 v124; // [rsp+48h] [rbp-70h]
  unsigned __int16 *v125; // [rsp+50h] [rbp-68h]
  __int64 v126; // [rsp+60h] [rbp-58h]
  _SLIST_HEADER *ListHead; // [rsp+68h] [rbp-50h]
  char v129; // [rsp+C8h] [rbp+10h]

  v4 = 0LL;
  v129 = 0;
  v6 = (unsigned __int16 *)(a1 + 4 * (a2 + 169LL));
  v125 = v6;
  if ( (*(_BYTE *)(a1 + 672) & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v16 = NtCurrentTeb();
    HeapData_low = LOBYTE(v16->HeapData);
    UniqueThread_low = LODWORD(v16->ClientId.UniqueThread);
    v4 = (unsigned int)(HeapData_low - 1);
    v129 = HeapData_low - 1;
    if ( (int)v4 < 0 || RtlpAffinityState[HeapData_low] != UniqueThread_low )
    {
      v19 = HIDWORD(RtlpAffinityState[0]);
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v4 = v19 & CurrentProcessorNumber;
      v129 = v19 & CurrentProcessorNumber;
      LOBYTE(v16->HeapData) = (v19 & CurrentProcessorNumber) + 1;
      qword_1801636A8[v4] = UniqueThread_low;
    }
  }
  v7 = 16LL * *v6;
  v126 = v7;
  ListHead = (_SLIST_HEADER *)(a1 + 48 * (v4 + 68));
  v8 = *((unsigned __int8 *)v6 + 2);
  if ( (_DWORD)v4 )
    v9 = *(_QWORD *)(a1 + 8 * v8 + 2224) - 192LL + 192 * v4;
  else
    v9 = *(_QWORD *)(a1 + 8 * v8 + 1192);
  v121 = v9;
LABEL_6:
  while ( 2 )
  {
    while ( 2 )
    {
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 )
      {
        v119 = 0;
        v11 = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
        v123 = v11;
        if ( (*(_DWORD *)(v10 + 32) & 0x80000000) != 0 )
        {
          v119 = 1;
          v44 = v11 + 4LL * *(unsigned __int16 *)(v9 + 172);
          if ( (*(_BYTE *)(v44 + 679) & 1) == 0
            && (int)RtlpAffinitizeSegmentInfoForBucket(v11, *(unsigned __int8 *)(v44 + 678)) >= 0 )
          {
            *(_BYTE *)(v44 + 679) |= 1u;
            v45 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
            if ( *v45 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
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
            + ClearBitAndSet * (((unsigned int)RtlpLFHKey ^ (unsigned int)v21 ^ v123 ^ *(_DWORD *)(v21 + 24)) >> 16)
            + (unsigned __int16)(RtlpLFHKey ^ v21 ^ v123 ^ *(_WORD *)(v21 + 24));
        if ( (*(_BYTE *)(v15 + 15) & 0x3F) != 0 )
        {
          RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL), v15, 0, 0LL, 0LL);
          goto LABEL_20;
        }
LABEL_29:
        if ( v119 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
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
            *(_QWORD *)(v15 + 16LL * *v125) = v29;
            *(_BYTE *)(v15 + 15) = -65;
          }
          else
          {
            *(_BYTE *)(v15 + 15) = v29 | 0x80;
          }
          return v15 + 16;
        }
      }
      v124 = *(_QWORD *)v9;
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
              v46 = *(unsigned __int16 *)(v38 + 32);
              if ( v46 > v37 && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(v121, *v36) )
              {
                v33 = (volatile signed __int32 *)v38;
                v37 = v46;
                v35 = (volatile signed __int64 *)(v121 + 8 * (v34 + 2LL));
              }
            }
            ++v34;
            ++v36;
          }
          while ( v34 < 0x10 );
          v7 = v126;
          if ( !v35 )
          {
            v9 = v121;
            v33 = 0LL;
            goto LABEL_92;
          }
          v39 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v124 + 24) + 8LL * *(unsigned __int16 *)(v121 + 172) + 1192)
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
            if ( !(unsigned int)RtlpSetSegmentInfo(v40, v121) )
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
          v9 = v121;
        }
        else
        {
          v47 = (unsigned __int8)(((__int64)v35 - v121 - 16) >> 3);
          v9 = v121;
          *(_WORD *)(v121 + 174) = v47;
        }
        if ( !v33 )
          break;
        _m_prefetchw((const void *)(v33 + 11));
        if ( _InterlockedAnd(v33 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_69;
        v98 = **(_QWORD **)v33;
        *(_QWORD *)v33 = 0LL;
        RtlpInterlockedPushEntrySList(v98, v33 + 12);
      }
LABEL_92:
      v59 = 0;
      v60 = 0LL;
      v61 = 0LL;
      v62 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v124 + 24) + 8LL * *(unsigned __int16 *)(v9 + 172) + 1192) + 144LL);
      v63 = RtlpInterlockedPopEntrySList(v62);
      if ( !v63 )
        goto LABEL_69;
      while ( 1 )
      {
        v33 = (volatile signed __int32 *)&v63[-3];
        if ( (*((_DWORD *)&v63[-1].Next + 3) & 1) != 0 )
          break;
        _m_prefetchw((const void *)(v33 + 11));
        if ( _InterlockedAnd(v33 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_95;
LABEL_96:
        v33 = 0LL;
        v63 = RtlpInterlockedPopEntrySList(v62);
        if ( !v63 )
          goto LABEL_97;
      }
      if ( !(unsigned int)RtlpSetSegmentInfo(&v63[-3], v9) )
      {
        if ( !v59 )
          v61 = v63;
        v63->Next = v60;
        ++v59;
        v60 = v63;
        goto LABEL_96;
      }
      _m_prefetchw((const void *)(v33 + 11));
      if ( _InterlockedAnd(v33 + 11, 0xFFFFFFFD) == 2 )
      {
LABEL_95:
        v64 = **(_QWORD **)v33;
        *(_QWORD *)v33 = 0LL;
        RtlpInterlockedPushEntrySList(v64, v63);
        goto LABEL_96;
      }
      if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v9, &v63[-3]) )
        goto LABEL_96;
LABEL_97:
      if ( v59 )
        InterlockedPushListSList(v62, v60, v61, v59);
LABEL_69:
      if ( v33 )
      {
        *((_BYTE *)v33 + 43) = v129;
        do
        {
          v48 = *((_DWORD *)v33 + 11);
          if ( !v48 || (v48 & 6) != 0 )
            goto LABEL_6;
        }
        while ( v48 != _InterlockedCompareExchange(v33 + 11, v48 | 6, v48) );
        v49 = *(__int64 **)v33;
        if ( *(_QWORD *)v33 == v9 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v50 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v50 = 2147353472LL;
          if ( *(_BYTE *)v50 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL), *((_QWORD *)v33 + 1));
          v33 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v9 + 8), (__int64)v33);
          if ( !v33 )
            continue;
          _m_prefetchw((const void *)(v33 + 11));
          if ( _InterlockedAnd(v33 + 11, 0xFFFFFFF9) == 6 )
          {
            v100 = **(_QWORD **)v33;
            *(_QWORD *)v33 = 0LL;
            RtlpInterlockedPushEntrySList(v100, v33 + 12);
            continue;
          }
          if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v9, v33) )
            continue;
          do
          {
            v51 = *((_DWORD *)v33 + 11);
            if ( !v51 || (v51 & 2) != 0 )
              goto LABEL_6;
          }
          while ( v51 != _InterlockedCompareExchange(v33 + 11, v51 | 2, v51) );
          v52 = *(__int64 **)v33;
          v53 = 0;
LABEL_85:
          v54 = ((_BYTE)v53 + (unsigned __int8)*((_WORD *)v52 + 87)) & 0xF;
          v55 = (__int64 **)v52[v54 + 2];
          v56 = &v52[v54];
          if ( !v55 )
          {
            if ( !_InterlockedCompareExchange64(v56 + 2, (signed __int64)v33, 0LL) )
              continue;
LABEL_157:
            if ( (unsigned int)++v53 >= 0x10 )
              goto LABEL_158;
            goto LABEL_85;
          }
          if ( (*((_DWORD *)v55 + 11) & 1) != 0
            || v55 != (__int64 **)_InterlockedCompareExchange64(v56 + 2, (signed __int64)v33, (signed __int64)v55) )
          {
            goto LABEL_157;
          }
          _m_prefetchw((char *)v55 + 44);
          v57 = *((_DWORD *)v55 + 11);
          do
          {
            v58 = v57;
            v57 = _InterlockedCompareExchange((volatile signed __int32 *)v55 + 11, v57 & 0xFFFFFFFD, v57);
          }
          while ( v58 != v57 );
LABEL_140:
          if ( v57 == 2 )
          {
            v92 = **v55;
            *v55 = 0LL;
            v93 = v55 + 6;
            goto LABEL_142;
          }
          continue;
        }
        _m_prefetchw((const void *)(v33 + 11));
        if ( _InterlockedAnd(v33 + 11, 0xFFFFFFF9) == 6 )
        {
          v93 = (_QWORD **)(v33 + 12);
          v92 = **(_QWORD **)v33;
          *(_QWORD *)v33 = 0LL;
LABEL_142:
          RtlpInterlockedPushEntrySList(v92, v93);
          continue;
        }
        if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v49, v33) )
          continue;
        do
        {
          v101 = *((_DWORD *)v33 + 11);
          if ( !v101 || (v101 & 2) != 0 )
            goto LABEL_6;
        }
        while ( v101 != _InterlockedCompareExchange(v33 + 11, v101 | 2, v101) );
        v102 = *(__int64 **)v33;
        for ( j = 0; j < 0x10; ++j )
        {
          v104 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v102 + 87)) & 0xF;
          v55 = (__int64 **)v102[v104 + 2];
          v105 = &v102[v104];
          if ( v55 )
          {
            if ( (*((_DWORD *)v55 + 11) & 1) == 0
              && v55 == (__int64 **)_InterlockedCompareExchange64(v105 + 2, (signed __int64)v33, (signed __int64)v55) )
            {
              goto LABEL_139;
            }
          }
          else if ( !_InterlockedCompareExchange64(v105 + 2, (signed __int64)v33, 0LL) )
          {
            goto LABEL_6;
          }
        }
LABEL_158:
        v95 = *(_QWORD *)(**(_QWORD **)v33 + 24LL);
        v96 = *(unsigned __int16 *)(*(_QWORD *)v33 + 172LL);
        v97 = v33 + 12;
LABEL_151:
        RtlpInterlockedPushEntrySList(*(_QWORD *)(v95 + 8 * v96 + 1192) + 144LL, v97);
        continue;
      }
      break;
    }
    v65 = *(_DWORD *)(v9 + 160);
    v66 = *((unsigned __int8 *)v125 + 2);
    v67 = (*(_BYTE *)(a1 + 672) & 2) != 0;
    do
    {
      v68 = *(_QWORD *)(a1 + 80);
      v69 = 0;
      if ( (_DWORD)v68 == v66 )
      {
        HIDWORD(v122) = HIDWORD(v68) + 1;
        if ( HIDWORD(v68) > 7 )
        {
          v69 = 1;
          HIDWORD(v122) = 0;
        }
      }
      else
      {
        v122 = v66 | 0x100000000LL;
      }
    }
    while ( v68 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v122, v68) );
    if ( !v69 || v67 )
    {
      v70 = 3;
      if ( v67 )
        v70 = 4;
      v65 >>= v70;
    }
    v71 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v125 + 2)];
    SubSegmentBlockCount = RtlpGetSubSegmentBlockCount(v71, v65, *((_BYTE *)v125 + 3) & 1, *(unsigned int *)(v9 + 164));
    v73 = ((((unsigned __int64)SubSegmentBlockCount + 31) >> 3) & 0xFFFFFFFC) + 68 + (v71 + 16) * SubSegmentBlockCount;
    if ( v73 >= 0xF0000 )
      v73 = 983040;
    _BitScanReverse(&v74, v73 - 1);
    v75 = 7;
    v76 = v74 + 1;
    if ( v76 > 7 )
      v75 = v76;
    v77 = 18;
    if ( v75 < 0x12 )
      v77 = v75;
    if ( (*((_BYTE *)v125 + 3) & 6) != 0 )
      v77 = 18;
    UserBlock = RtlpAllocateUserBlock(a1, v77, v71 + 16);
    v79 = UserBlock;
    if ( UserBlock )
    {
      v80 = 1LL << LOBYTE(UserBlock[1].Next);
      if ( v80 > 0xF0000 )
        v80 = 983040LL;
      v81 = v80 + WORD1(UserBlock[1].Next);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
      v82 = RtlpInterlockedPopEntrySList(ListHead);
      if ( v82 )
      {
        v83 = (volatile signed __int32 *)&v82[-3];
LABEL_120:
        if ( v83 )
        {
          *((_BYTE *)v83 + 43) = v129;
          RtlpSubSegmentInitialize(
            a1,
            (_DWORD)v83,
            (_DWORD)v79,
            (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v125 + 2)],
            v81,
            (__int64)v125);
          do
          {
            v84 = *((_DWORD *)v83 + 11);
            if ( !v84 || (v84 & 6) != 0 )
              goto LABEL_191;
          }
          while ( v84 != _InterlockedCompareExchange(v83 + 11, v84 | 6, v84) );
          v85 = *(__int64 **)v83;
          if ( *(_QWORD *)v83 == v9 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v86 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v86 = 2147353472LL;
            if ( *(_BYTE *)v86 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL), *((_QWORD *)v83 + 1));
            v83 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v9 + 8), (__int64)v83);
            if ( !v83 )
              continue;
            _m_prefetchw((const void *)(v83 + 11));
            if ( _InterlockedAnd(v83 + 11, 0xFFFFFFF9) == 6 )
            {
              v99 = **(_QWORD **)v83;
              *(_QWORD *)v83 = 0LL;
              RtlpInterlockedPushEntrySList(v99, v83 + 12);
              continue;
            }
            if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v9, v83) )
              continue;
            do
            {
              v87 = *((_DWORD *)v83 + 11);
              if ( !v87 || (v87 & 2) != 0 )
                goto LABEL_6;
            }
            while ( v87 != _InterlockedCompareExchange(v83 + 11, v87 | 2, v87) );
            v88 = *(__int64 **)v83;
            v89 = 0;
            while ( 1 )
            {
              v90 = ((_BYTE)v89 + (unsigned __int8)*((_WORD *)v88 + 87)) & 0xF;
              v55 = (__int64 **)v88[v90 + 2];
              v91 = &v88[v90];
              if ( v55 )
              {
                if ( (*((_DWORD *)v55 + 11) & 1) == 0
                  && v55 == (__int64 **)_InterlockedCompareExchange64(v91 + 2, (signed __int64)v83, (signed __int64)v55) )
                {
                  goto LABEL_139;
                }
              }
              else if ( !_InterlockedCompareExchange64(v91 + 2, (signed __int64)v83, 0LL) )
              {
                goto LABEL_6;
              }
              if ( (unsigned int)++v89 >= 0x10 )
                goto LABEL_150;
            }
          }
          _m_prefetchw((const void *)(v83 + 11));
          if ( _InterlockedAnd(v83 + 11, 0xFFFFFFF9) == 6 )
          {
            v106 = v83 + 12;
            v107 = **(_QWORD **)v83;
            *(_QWORD *)v83 = 0LL;
            goto LABEL_190;
          }
          if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v85, v83) )
          {
            do
            {
              v113 = *((_DWORD *)v83 + 11);
              if ( !v113 || (v113 & 2) != 0 )
                goto LABEL_191;
            }
            while ( v113 != _InterlockedCompareExchange(v83 + 11, v113 | 2, v113) );
            v114 = *(__int64 **)v83;
            v115 = 0;
            while ( 1 )
            {
              v116 = ((_BYTE)v115 + (unsigned __int8)*((_WORD *)v114 + 87)) & 0xF;
              v117 = (__int64 **)v114[v116 + 2];
              v118 = &v114[v116];
              if ( v117 )
              {
                if ( (*((_DWORD *)v117 + 11) & 1) == 0
                  && v117 == (__int64 **)_InterlockedCompareExchange64(
                                           v118 + 2,
                                           (signed __int64)v83,
                                           (signed __int64)v117) )
                {
                  _m_prefetchw((char *)v117 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v117 + 11, 0xFFFFFFFD) == 2 )
                  {
                    v107 = **v117;
                    *v117 = 0LL;
                    v106 = (volatile signed __int32 *)(v117 + 6);
LABEL_190:
                    RtlpInterlockedPushEntrySList(v107, v106);
                  }
                  goto LABEL_191;
                }
              }
              else if ( !_InterlockedCompareExchange64(v118 + 2, (signed __int64)v83, 0LL) )
              {
                goto LABEL_191;
              }
              if ( (unsigned int)++v115 >= 0x10 )
              {
                v106 = v83 + 12;
                v107 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v83 + 24LL)
                                 + 8LL * *(unsigned __int16 *)(*(_QWORD *)v83 + 172LL)
                                 + 1192)
                     + 144LL;
                goto LABEL_190;
              }
            }
          }
          do
          {
LABEL_191:
            v108 = *((_DWORD *)v83 + 11);
            if ( !v108 || (v108 & 2) != 0 )
              goto LABEL_6;
          }
          while ( v108 != _InterlockedCompareExchange(v83 + 11, v108 | 2, v108) );
          v109 = *(__int64 **)v83;
          for ( k = 0; k < 0x10; ++k )
          {
            v111 = ((_BYTE)k + (unsigned __int8)*((_WORD *)v109 + 87)) & 0xF;
            v55 = (__int64 **)v109[v111 + 2];
            v112 = &v109[v111];
            if ( v55 )
            {
              if ( (*((_DWORD *)v55 + 11) & 1) == 0
                && v55 == (__int64 **)_InterlockedCompareExchange64(v112 + 2, (signed __int64)v83, (signed __int64)v55) )
              {
LABEL_139:
                _m_prefetchw((char *)v55 + 44);
                v57 = _InterlockedAnd((volatile signed __int32 *)v55 + 11, 0xFFFFFFFD);
                goto LABEL_140;
              }
            }
            else if ( !_InterlockedCompareExchange64(v112 + 2, (signed __int64)v83, 0LL) )
            {
              goto LABEL_6;
            }
          }
LABEL_150:
          v95 = *(_QWORD *)(**(_QWORD **)v83 + 24LL);
          v96 = *(unsigned __int16 *)(*(_QWORD *)v83 + 172LL);
          v97 = v83 + 12;
          goto LABEL_151;
        }
      }
      else
      {
        v94 = RtlpLowFragHeapAllocateFromZone((PRTL_SRWLOCK)a1);
        v83 = (volatile signed __int32 *)v94;
        if ( v94 )
        {
          *(_QWORD *)(v94 + 8) = 0LL;
          goto LABEL_120;
        }
      }
      RtlpFreeUserBlock(a1, v79);
    }
    return 0LL;
  }
}
