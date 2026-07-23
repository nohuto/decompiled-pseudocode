/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x18000FEB0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000E9A4 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpAllocateUserBlock @ 0x18000EB80 (RtlpAllocateUserBlock.c)
 *     RtlpSubSegmentInitialize @ 0x18000ED20 (RtlpSubSegmentInitialize.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpIsSubSegmentReuseable @ 0x18001B588 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x18001B65C (RtlpFreeUserBlock.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18005CB1C (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x1800695D4 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180075CA4 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpSetSegmentInfo @ 0x18007D61C (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A3DB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DF0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A3E60 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A4C70 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180105974 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180106024 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1801060C8 (RtlpLogHeapSubSegmentActivate.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocFromContext(PRTL_SRWLOCK SRWLock, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 v5; // r15
  unsigned __int16 *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 Value; // r12
  PSLIST_HEADER v10; // r10
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // r8d
  int v14; // edx
  signed __int32 v15; // ebx
  __int64 v16; // rax
  struct _TEB *v17; // r12
  unsigned __int16 HeapData_high; // r15
  __int16 v19; // ax
  unsigned __int64 Alignment; // rdx
  unsigned __int64 Region; // r11
  int v22; // r8d
  __int64 *v23; // r15
  __int64 *v24; // r9
  unsigned int v25; // ecx
  __int64 v26; // r11
  unsigned int v27; // r8d
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rbx
  unsigned __int64 v34; // rdi
  unsigned __int64 v36; // rdx
  struct _TEB *v37; // rdi
  __int64 HeapData_low; // rcx
  __int64 UniqueThread_low; // rsi
  int v40; // ebx
  ULONG CurrentProcessorNumber; // eax
  __int64 *v42; // rax
  _SLIST_ENTRY **v43; // rdx
  unsigned int v44; // ecx
  volatile signed __int64 *v45; // rax
  unsigned int v46; // r8d
  _SLIST_ENTRY **v47; // rsi
  _SLIST_ENTRY *v48; // rbx
  _SLIST_HEADER *v49; // r14
  _SLIST_ENTRY *v50; // rbx
  PSLIST_ENTRY v51; // rdx
  unsigned int v52; // r9d
  unsigned int v53; // r10d
  BOOL v54; // r8d
  unsigned __int64 v55; // rax
  char v56; // r11
  char v57; // cl
  __int64 v58; // r10
  char v59; // r8
  unsigned int v60; // edx
  unsigned int v61; // eax
  unsigned int v62; // ecx
  unsigned int v63; // eax
  unsigned int v64; // ecx
  unsigned __int8 v65; // cl
  PSLIST_ENTRY UserBlock; // rax
  __int64 v67; // rsi
  unsigned __int64 v68; // rdx
  PSLIST_ENTRY v69; // rax
  signed __int32 v70; // eax
  _SLIST_ENTRY *v71; // r8
  _DWORD *v72; // rcx
  __int64 v73; // rcx
  char v74; // al
  signed __int32 v75; // eax
  _SLIST_ENTRY *v76; // r9
  int v77; // r8d
  __int64 v78; // rax
  __int64 **v79; // rdx
  __int64 v80; // rcx
  unsigned int v81; // edx
  _DWORD *SharedData; // r9
  __int64 v83; // r9
  _DWORD *v84; // r9
  __int64 v85; // r9
  __int16 RandomValue32; // ax
  signed __int32 v87; // eax
  _SLIST_ENTRY *v88; // r8
  _DWORD *v89; // rcx
  __int64 v90; // rcx
  char IsSubSegmentReuseThresholdExceeded; // al
  signed __int32 v92; // eax
  _SLIST_ENTRY *v93; // r9
  int v94; // r8d
  __int64 v95; // rax
  _SLIST_ENTRY **v96; // rcx
  PSLIST_ENTRY v97; // rsi
  _SLIST_ENTRY *v98; // rcx
  _SLIST_ENTRY *v99; // rcx
  unsigned __int16 v100; // ax
  __int64 v101; // rax
  int v102; // ecx
  _SLIST_ENTRY *v103; // rcx
  __int64 v104; // rbx
  char *v105; // rcx
  unsigned int v106; // edi
  _SLIST_ENTRY *v107; // r14
  volatile signed __int32 *v108; // rsi
  __int64 v109; // rcx
  bool v110; // zf
  __int64 v111; // rcx
  _SLIST_ENTRY *v112; // rcx
  unsigned __int16 Next; // cx
  unsigned __int16 v114; // ax
  bool v115; // cf
  PSLIST_ENTRY v116; // rax
  char IsSubSegmentReuseable; // al
  signed __int32 v118; // eax
  _SLIST_ENTRY *v119; // r9
  int v120; // r8d
  __int64 v121; // rax
  _SLIST_ENTRY **v122; // rcx
  __int64 v123; // rcx
  signed __int32 v124; // eax
  _SLIST_ENTRY *v125; // r9
  int v126; // r8d
  __int64 v127; // rax
  __int64 v128; // rcx
  signed __int32 v129; // eax
  _SLIST_ENTRY *v130; // r9
  int v131; // r8d
  __int64 v132; // rax
  __int64 **v133; // rdx
  __int64 v134; // rcx
  int v135; // [rsp+30h] [rbp-A8h]
  unsigned int v136; // [rsp+30h] [rbp-A8h]
  __int64 v137; // [rsp+38h] [rbp-A0h]
  volatile signed __int64 *v138; // [rsp+38h] [rbp-A0h]
  PSLIST_ENTRY v139; // [rsp+38h] [rbp-A0h]
  _SLIST_ENTRY *v140; // [rsp+40h] [rbp-98h]
  unsigned int Next_low; // [rsp+48h] [rbp-90h]
  _SLIST_ENTRY *v142; // [rsp+48h] [rbp-90h]
  PSLIST_HEADER v143; // [rsp+50h] [rbp-88h]
  PSLIST_HEADER v144; // [rsp+50h] [rbp-88h]
  _SLIST_HEADER *v145; // [rsp+50h] [rbp-88h]
  unsigned int v146; // [rsp+58h] [rbp-80h]
  signed __int64 v147; // [rsp+60h] [rbp-78h]
  unsigned __int64 v148; // [rsp+68h] [rbp-70h]
  PSLIST_HEADER ListHead; // [rsp+70h] [rbp-68h]
  __int64 v150; // [rsp+80h] [rbp-58h]
  unsigned int v151; // [rsp+E0h] [rbp+8h]
  PSLIST_HEADER v152; // [rsp+E0h] [rbp+8h]
  int v153; // [rsp+E0h] [rbp+8h]
  _SLIST_HEADER *v154; // [rsp+E0h] [rbp+8h]
  unsigned int v155; // [rsp+E0h] [rbp+8h]
  char v156; // [rsp+E8h] [rbp+10h]

  v156 = 0;
  LODWORD(v5) = 0;
  v6 = (unsigned __int16 *)&SRWLock[84].Ptr + 2 * a2 + 2;
  if ( (*(_BYTE *)&SRWLock[84].0 & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v37 = NtCurrentTeb();
    HeapData_low = LOBYTE(v37->HeapData);
    UniqueThread_low = LODWORD(v37->ClientId.UniqueThread);
    LODWORD(v5) = HeapData_low - 1;
    v156 = HeapData_low - 1;
    if ( (int)HeapData_low - 1 < 0 || RtlpAffinityState[HeapData_low] != UniqueThread_low )
    {
      v40 = HIDWORD(RtlpAffinityState[0]);
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v5 = v40 & CurrentProcessorNumber;
      v156 = v40 & CurrentProcessorNumber;
      LOBYTE(v37->HeapData) = (v40 & CurrentProcessorNumber) + 1;
      qword_180163608[v5] = UniqueThread_low;
    }
  }
  v7 = *((unsigned __int8 *)v6 + 2);
  v8 = 16LL * *v6;
  v150 = v8;
  ListHead = (PSLIST_HEADER)&SRWLock[6 * (unsigned int)v5 + 408];
  if ( (_DWORD)v5 )
    Value = SRWLock[v7 + 278].Value - 192 + 192LL * (unsigned int)v5;
  else
    Value = SRWLock[v7 + 149].Value;
  v148 = Value;
LABEL_6:
  while ( 2 )
  {
    LODWORD(v10) = 0x8000;
LABEL_7:
    while ( 2 )
    {
      v11 = *(_QWORD *)(Value + 8);
      if ( v11 )
      {
        v135 = 0;
        v12 = *(_QWORD *)(*(_QWORD *)Value + 24LL);
        v137 = v12;
        if ( (*(_DWORD *)(v11 + 32) & 0x80000000) != 0 )
        {
          v135 = 1;
          v104 = v12 + 4LL * *(unsigned __int16 *)(Value + 172);
          if ( (*(_BYTE *)(v104 + 679) & 1) == 0 )
          {
            if ( (int)RtlpAffinitizeSegmentInfoForBucket(v12, *(unsigned __int8 *)(v104 + 678)) >= 0 )
            {
              *(_BYTE *)(v104 + 679) |= 1u;
              v105 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
              if ( *v105 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v137 + 24), *(unsigned __int8 *)(v104 + 678));
            }
            LODWORD(v10) = 0x8000;
          }
        }
        v13 = 100;
        if ( MEMORY[0x7FFE036A] <= 1u )
          v13 = 0;
        v14 = 0;
        while ( 1 )
        {
          v15 = *(_DWORD *)(v11 + 32);
          if ( (v15 & 0x80000000) == 0 )
          {
            if ( !(_WORD)v15 )
              goto LABEL_164;
            if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), v15 | 0x80000000, v15) )
              break;
          }
          if ( ++v14 > v13 )
            goto LABEL_164;
        }
        if ( v15 != -1 )
        {
          v10 = *(PSLIST_HEADER *)(v11 + 8);
          v143 = v10;
          if ( v10 && *(_QWORD *)v11 == Value && (_WORD)v15 )
          {
            v16 = *(unsigned __int16 *)(Value + 172);
            v17 = NtCurrentTeb();
            v151 = RtlpSearchWidth[v16];
            HeapData_high = (unsigned __int8)HIWORD(v17->HeapData);
            if ( HeapData_high == HIBYTE(HIWORD(v17->HeapData)) )
            {
              RandomValue32 = RtlpHeapGenerateRandomValue32();
              v10 = v143;
              v19 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
            }
            else
            {
              v19 = (unsigned __int8)(HIWORD(v17->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v17->HeapData);
            }
            HIWORD(v17->HeapData) = v19;
            Alignment = v10[2].Alignment;
            Region = v10[2].Region;
            v22 = RtlpLowFragHeapRandomData[HeapData_high];
            if ( Alignment < 0x40 )
            {
              v24 = (__int64 *)v10[2].Region;
              if ( Alignment >= v151 )
                LODWORD(Alignment) = v151;
              v25 = Alignment;
            }
            else
            {
              v23 = (__int64 *)(Region + 8 * ((Alignment - 1) >> 6));
              v24 = (__int64 *)(Region + 8 * ((unsigned __int64)(unsigned int)(v15 >> 16) >> 6));
              do
              {
                if ( *v24 != -1 )
                  break;
                v42 = v24++;
                if ( v42 == v23 )
                  v24 = (__int64 *)v10[2].Region;
              }
              while ( v24 != (__int64 *)(Region + 8 * ((unsigned __int64)(unsigned int)(v15 >> 16) >> 6)) );
              if ( v24 == v23 && (Alignment & 0x3F) != 0 )
              {
                v25 = v151;
                if ( (v10[2].Alignment & 0x3F) < v151 )
                  v25 = Alignment & 0x3F;
              }
              else
              {
                v25 = v151;
              }
            }
            v26 = *v24;
            v27 = (v25 * v22) >> 7;
            if ( v25 < 0x40 )
            {
              _BitScanForward64(&v36, ~v26);
              LOBYTE(v27) = v36 + v27;
              v28 = ((1LL << v25) - 1) << v36;
            }
            else
            {
              v28 = -1LL;
            }
            Value = v148;
            _BitScanForward64(&v29, ~__ROR8__(v26 | ~v28, v27));
            v30 = ((_BYTE)v27 + (_BYTE)v29) & 0x3F;
            *v24 = v26 | (1LL << v30);
            v31 = v30 + ((unsigned int)((__int64)((__int64)v24 - v10[2].Region) >> 3) << 6);
            *(_DWORD *)(v11 + 32) = (v31 << 16) | ((unsigned __int16)v15 - 1);
            v32 = (__int64)v10
                + v31
                * (((unsigned int)RtlpLFHKey ^ (unsigned int)v10 ^ (unsigned int)v137 ^ *((_DWORD *)&v10[1].HeaderX64 + 2)) >> 16);
            v33 = v32
                + (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)v10 ^ v137 ^ *((_WORD *)&v10[1].HeaderX64 + 4));
            if ( (*(_BYTE *)(v33 + 15) & 0x3F) == 0 )
            {
              LOBYTE(v5) = v156;
              goto LABEL_30;
            }
            RtlpLogHeapFailure(
              15,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v148 + 24LL) + 24LL),
              v32 + (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)v10 ^ v137 ^ *((_WORD *)&v10[1].HeaderX64 + 4)),
              0,
              0LL,
              0LL);
            LOBYTE(v5) = v156;
          }
          else
          {
            *(_DWORD *)(v11 + 32) = v15;
          }
        }
LABEL_164:
        v33 = 0LL;
LABEL_30:
        if ( v135 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
          _InterlockedCompareExchange(
            (_DWORD *)RtlpAffinityState + 1,
            2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
            SHIDWORD(RtlpAffinityState[0]));
        if ( v33 )
        {
          if ( (a4 & 8) != 0 )
            memset((void *)(v33 + 16), 0, v8 - 8);
          v34 = v8 - a3;
          if ( v34 >= 0x3F )
          {
            *(_QWORD *)(v33 + 16LL * *v6) = v34;
            *(_BYTE *)(v33 + 15) = -65;
          }
          else
          {
            *(_BYTE *)(v33 + 15) = v34 | 0x80;
          }
          return v33 + 16;
        }
      }
      v144 = *(PSLIST_HEADER *)Value;
LABEL_53:
      v140 = 0LL;
LABEL_54:
      v43 = (_SLIST_ENTRY **)(Value + 16);
      while ( 2 )
      {
        v44 = 0;
        v146 = 0;
        v45 = 0LL;
        v136 = 0;
        v138 = 0LL;
        v46 = 0;
        v47 = v43;
        do
        {
          v48 = *v47;
          if ( !*v47 )
            goto LABEL_57;
          Next_low = LOWORD(v48[2].Next);
          v81 = Next_low;
          if ( Next_low <= v46 )
            goto LABEL_115;
          if ( (RtlpLowFragHeapGlobalFlags & 4) == 0 )
          {
            v100 = *(_WORD *)(Value + 172);
            if ( v100 <= 0x70u )
            {
              if ( *(_DWORD *)(Value + 160) >= 16
                                             * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v100] )
              {
                Next = (unsigned __int16)v48[2].Next;
                v114 = *((_WORD *)&v48[2].Next + 4) >> 2;
                v115 = v114 < Next;
                v110 = v114 == Next;
                v44 = v136;
                LODWORD(v10) = !v115 && !v110;
                goto LABEL_119;
              }
              v44 = v136;
            }
          }
          LOBYTE(v10) = 0;
LABEL_119:
          v153 = (int)v10;
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
            v83 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v83 = 2147353482LL;
          if ( *(_BYTE *)v83
            || ((v84 = NtCurrentPeb()->SharedData) == 0LL || !*v84
              ? (v85 = 2147353472LL)
              : (v85 = (__int64)NtCurrentPeb()->SharedData + 550),
                *(_BYTE *)v85 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
          {
            if ( !(_BYTE)v10 )
              goto LABEL_126;
            RtlpLogHeapReuseThresholdActivate(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL),
              *((_QWORD *)&v48->Next + 1),
              *(unsigned __int16 *)(Value + 172));
            v44 = v136;
            v81 = Next_low;
            v46 = v146;
            LODWORD(v10) = v153;
          }
          if ( (_BYTE)v10 )
          {
LABEL_115:
            v45 = v138;
LABEL_57:
            v48 = v140;
            goto LABEL_58;
          }
LABEL_126:
          v46 = v81;
          v140 = v48;
          v146 = v81;
          v45 = (volatile signed __int64 *)(Value + 8 * (v44 + 2LL));
          v138 = v45;
LABEL_58:
          ++v44;
          ++v47;
          v136 = v44;
        }
        while ( v44 < 0x10 );
        v49 = ListHead;
        if ( v45 )
        {
          v154 = (_SLIST_HEADER *)(*(_QWORD *)(v144[1].Region + 8LL * *(unsigned __int16 *)(Value + 172) + 1192) + 144LL);
          v97 = RtlpInterlockedPopEntrySList(v154);
          if ( v97 )
          {
            while ( 1 )
            {
              v102 = *((_DWORD *)&v97[-1].Next + 3);
              v97 -= 3;
              if ( (v102 & 1) != 0 )
                break;
              _m_prefetchw((char *)&v97[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v97[2].Next + 3, 0xFFFFFFFD) == 2 )
              {
                v103 = v97->Next->Next;
                v97->Next = 0LL;
                RtlpInterlockedPushEntrySList(v103);
              }
              v97 = RtlpInterlockedPopEntrySList(v154);
              if ( !v97 )
                goto LABEL_148;
            }
            if ( !(unsigned int)RtlpSetSegmentInfo(v97, Value) )
            {
              RtlpInterlockedPushEntrySList(v154);
              v97 = 0LL;
            }
          }
LABEL_148:
          if ( v48 != (_SLIST_ENTRY *)_InterlockedCompareExchange64(v138, (signed __int64)v97, (signed __int64)v48) )
          {
            v43 = (_SLIST_ENTRY **)(Value + 16);
            if ( !v97 )
              continue;
            RtlpInterlockedPushEntrySList(v154);
            goto LABEL_54;
          }
          if ( !v97 )
            *(_WORD *)(Value + 174) = (unsigned __int8)((__int64)((__int64)v138 - Value - 16) >> 3);
          if ( v48 )
          {
            _m_prefetchw((char *)&v48[2].Next + 12);
            if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFFD) != 2 )
              goto LABEL_63;
            v98 = v48->Next->Next;
            v48->Next = 0LL;
            RtlpInterlockedPushEntrySList(v98);
            goto LABEL_53;
          }
        }
        else
        {
          v140 = 0LL;
        }
        break;
      }
      v50 = 0LL;
      v145 = (_SLIST_HEADER *)(*(_QWORD *)(v144[1].Region + 8LL * *(unsigned __int16 *)(Value + 172) + 1192) + 144LL);
      v139 = RtlpInterlockedPopEntrySList(v145);
      v51 = v139;
      if ( !v139 )
        goto LABEL_62;
      v106 = 0;
      v107 = 0LL;
      while ( 2 )
      {
        v108 = (volatile signed __int32 *)&v51[-3];
        v140 = v51 - 3;
        if ( (*((_DWORD *)&v51[-1].Next + 3) & 1) == 0 )
        {
          _m_prefetchw((const void *)(v108 + 11));
          if ( _InterlockedAnd(v108 + 11, 0xFFFFFFFD) == 2 )
            goto LABEL_183;
          goto LABEL_184;
        }
        if ( !(unsigned int)RtlpSetSegmentInfo(v108, Value) )
        {
          v116 = v139;
          if ( v106 )
            v116 = v107;
          ++v106;
          v107 = v116;
          v139->Next = v50;
          v50 = v139;
          goto LABEL_184;
        }
        _m_prefetchw((const void *)(v108 + 11));
        if ( _InterlockedAnd(v108 + 11, 0xFFFFFFFD) == 2 )
        {
LABEL_183:
          v109 = **(_QWORD **)v108;
          *(_QWORD *)v108 = 0LL;
          RtlpInterlockedPushEntrySList(v109);
          goto LABEL_184;
        }
        if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(Value, v108) )
        {
LABEL_184:
          v140 = 0LL;
          v139 = RtlpInterlockedPopEntrySList(v145);
          v51 = v139;
          if ( !v139 )
            break;
          continue;
        }
        break;
      }
      LOBYTE(v5) = v156;
      v110 = v106 == 0;
      v142 = v107;
      v49 = ListHead;
      v155 = v106;
      v8 = v150;
      if ( !v110 )
        InterlockedPushListSList(v145, v50, v142, v155);
LABEL_62:
      v48 = v140;
LABEL_63:
      if ( v48 )
      {
        *((_BYTE *)&v48[2].Next + 11) = v5;
        do
        {
          v87 = *((_DWORD *)&v48[2].Next + 3);
          LODWORD(v10) = 0x8000;
          if ( !v87 || (v87 & 6) != 0 )
            goto LABEL_7;
        }
        while ( v87 != _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v87 | 6, v87) );
        v88 = v48->Next;
        if ( v48->Next == (_SLIST_ENTRY *)Value )
        {
          v89 = NtCurrentPeb()->SharedData;
          if ( v89 && *v89 )
            v90 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v90 = 2147353472LL;
          if ( *(_BYTE *)v90 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL),
              *((_QWORD *)&v48->Next + 1));
          v48 = (_SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)(Value + 8), (__int64)v48);
          LODWORD(v10) = 0x8000;
          if ( !v48 )
            continue;
          _m_prefetchw((char *)&v48[2].Next + 12);
          if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFF9) != 6 )
          {
            if ( LOWORD(v48[2].Next) )
            {
              IsSubSegmentReuseThresholdExceeded = RtlpIsSubSegmentReuseThresholdExceeded(Value, v48);
              LODWORD(v10) = 0x8000;
              if ( !IsSubSegmentReuseThresholdExceeded )
              {
                while ( 1 )
                {
                  v92 = *((_DWORD *)&v48[2].Next + 3);
                  LODWORD(v10) = 0x8000;
                  if ( !v92 || (v92 & 2) != 0 )
                    break;
                  if ( v92 == _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v92 | 2, v92) )
                  {
                    v93 = v48->Next;
                    v94 = 0;
                    while ( 1 )
                    {
                      v95 = ((_BYTE)v94 + (unsigned __int8)*((_WORD *)&v93[10].Next + 7)) & 0xF;
                      v79 = (__int64 **)*((_QWORD *)&v93[1].Next + v95);
                      v96 = &v93->Next + v95;
                      if ( v79 )
                      {
                        if ( (*((_DWORD *)v79 + 11) & 1) == 0
                          && v79 == (__int64 **)_InterlockedCompareExchange64(
                                                  (volatile signed __int64 *)v96 + 2,
                                                  (signed __int64)v48,
                                                  (signed __int64)v79) )
                        {
                          goto LABEL_195;
                        }
                      }
                      else
                      {
                        LODWORD(v10) = 0x8000;
                        if ( !_InterlockedCompareExchange64(
                                (volatile signed __int64 *)v96 + 2,
                                (signed __int64)v48,
                                0LL) )
                          goto LABEL_7;
                      }
                      if ( (unsigned int)++v94 >= 0x10 )
                        goto LABEL_201;
                    }
                  }
                }
              }
            }
            continue;
          }
        }
        else
        {
          _m_prefetchw((char *)&v48[2].Next + 12);
          if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFF9) != 6 )
          {
            IsSubSegmentReuseable = RtlpIsSubSegmentReuseable(v88, v48);
            LODWORD(v10) = 0x8000;
            if ( IsSubSegmentReuseable )
            {
              while ( 1 )
              {
                v118 = *((_DWORD *)&v48[2].Next + 3);
                LODWORD(v10) = 0x8000;
                if ( !v118 || (v118 & 2) != 0 )
                  break;
                if ( v118 == _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v118 | 2, v118) )
                {
                  v119 = v48->Next;
                  v120 = 0;
                  while ( 1 )
                  {
                    v121 = ((_BYTE)v120 + (unsigned __int8)*((_WORD *)&v119[10].Next + 7)) & 0xF;
                    v79 = (__int64 **)*((_QWORD *)&v119[1].Next + v121);
                    v122 = &v119->Next + v121;
                    if ( v79 )
                    {
                      if ( (*((_DWORD *)v79 + 11) & 1) == 0
                        && v79 == (__int64 **)_InterlockedCompareExchange64(
                                                (volatile signed __int64 *)v122 + 2,
                                                (signed __int64)v48,
                                                (signed __int64)v79) )
                      {
LABEL_195:
                        _m_prefetchw((char *)v79 + 44);
                        LODWORD(v10) = 0x8000;
                        if ( _InterlockedAnd((volatile signed __int32 *)v79 + 11, 0xFFFFFFFD) != 2 )
                          goto LABEL_7;
                        v111 = **v79;
                        *v79 = 0LL;
                        RtlpInterlockedPushEntrySList(v111);
                        goto LABEL_6;
                      }
                    }
                    else
                    {
                      LODWORD(v10) = 0x8000;
                      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v122 + 2, (signed __int64)v48, 0LL) )
                        goto LABEL_7;
                    }
                    if ( (unsigned int)++v120 >= 0x10 )
                    {
LABEL_201:
                      RtlpInterlockedPushEntrySList(
                        *(_QWORD *)(*((_QWORD *)&v48->Next->Next[1].Next + 1)
                                  + 8LL * *((unsigned __int16 *)&v48->Next[10].Next + 6)
                                  + 1192)
                      + 144LL);
                      LODWORD(v10) = 0x8000;
                      goto LABEL_7;
                    }
                  }
                }
              }
            }
            continue;
          }
        }
        v99 = v48->Next->Next;
        v48->Next = 0LL;
        RtlpInterlockedPushEntrySList(v99);
        LODWORD(v10) = 0x8000;
        continue;
      }
      break;
    }
    v52 = *(_DWORD *)(Value + 160);
    v53 = *((unsigned __int8 *)v6 + 2);
    v54 = (*(_BYTE *)&SRWLock[84].0 & 2) != 0;
    do
    {
      v55 = SRWLock[10].Value;
      v56 = 0;
      if ( (_DWORD)v55 == v53 )
      {
        HIDWORD(v147) = HIDWORD(v55) + 1;
        if ( HIDWORD(v55) > 7 )
        {
          v56 = 1;
          HIDWORD(v147) = 0;
        }
      }
      else
      {
        v147 = v53 | 0x100000000LL;
      }
    }
    while ( v55 != _InterlockedCompareExchange64((volatile signed __int64 *)&SRWLock[10], v147, v55) );
    if ( !v56 || v54 )
    {
      v57 = 3;
      if ( v54 )
        v57 = 4;
      v52 >>= v57;
    }
    v58 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v6 + 2)];
    v59 = (*((_BYTE *)v6 + 3) & 1) - 1;
    if ( (unsigned int)v58 >= 0x100 )
      v59 = *((_BYTE *)v6 + 3) & 1;
    if ( *(_DWORD *)(Value + 164) )
      --v59;
    v60 = 1 << (3 - v59);
    if ( v52 >= v60 )
      v60 = v52;
    if ( v60 < 4 )
    {
      v60 = 4;
    }
    else if ( v60 > 0x400 )
    {
      v60 = 1024;
    }
    v61 = ((((unsigned __int64)v60 + 31) >> 3) & 0xFFFFFFFC) + v60 * (v58 + 16) + 68;
    if ( v61 >= 0xF0000 )
      v61 = 983040;
    _BitScanReverse(&v62, v61 - 1);
    v63 = 7;
    v64 = v62 + 1;
    if ( v64 > 7 )
      v63 = v64;
    v65 = 18;
    if ( v63 < 0x12 )
      v65 = v63;
    if ( (*((_BYTE *)v6 + 3) & 6) != 0 )
      v65 = 18;
    UserBlock = RtlpAllocateUserBlock((__int64)SRWLock, v65, v58 + 16);
    v67 = (__int64)UserBlock;
    if ( UserBlock )
    {
      v68 = 1LL << LOBYTE(UserBlock[1].Next);
      if ( v68 > 0xF0000 )
        v68 = 983040LL;
      v152 = (PSLIST_HEADER)(v68 + WORD1(UserBlock[1].Next));
      _InterlockedIncrement((volatile signed __int32 *)&SRWLock[7]);
      v69 = RtlpInterlockedPopEntrySList(v49);
      if ( v69 )
      {
        v48 = v69 - 3;
        goto LABEL_94;
      }
      v101 = RtlpLowFragHeapAllocateFromZone(SRWLock);
      v48 = (_SLIST_ENTRY *)v101;
      if ( v101 )
      {
        *(_QWORD *)(v101 + 8) = 0LL;
LABEL_94:
        if ( v48 )
        {
          *((_BYTE *)&v48[2].Next + 11) = v5;
          RtlpSubSegmentInitialize(
            (__int64)SRWLock,
            (__int64)v48,
            v67,
            (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v6 + 2)],
            (__int64)v152,
            (__int64)v6);
          do
          {
            v70 = *((_DWORD *)&v48[2].Next + 3);
            if ( !v70 || (v70 & 6) != 0 )
              goto LABEL_246;
          }
          while ( v70 != _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v70 | 6, v70) );
          v71 = v48->Next;
          if ( v48->Next == (_SLIST_ENTRY *)Value )
          {
            v72 = NtCurrentPeb()->SharedData;
            if ( v72 && *v72 )
              v73 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v73 = 2147353472LL;
            if ( *(_BYTE *)v73 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapSubSegmentActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL),
                *((_QWORD *)&v48->Next + 1));
            v48 = (_SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)(Value + 8), (__int64)v48);
            LODWORD(v10) = 0x8000;
            if ( v48 )
            {
              _m_prefetchw((char *)&v48[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFF9) == 6 )
              {
                v112 = v48->Next->Next;
                v48->Next = 0LL;
                RtlpInterlockedPushEntrySList(v112);
                continue;
              }
              if ( LOWORD(v48[2].Next) )
              {
                v74 = RtlpIsSubSegmentReuseThresholdExceeded(Value, v48);
                LODWORD(v10) = 0x8000;
                if ( !v74 )
                {
                  while ( 1 )
                  {
                    v75 = *((_DWORD *)&v48[2].Next + 3);
                    LODWORD(v10) = 0x8000;
                    if ( !v75 || (v75 & 2) != 0 )
                      break;
                    if ( v75 == _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v75 | 2, v75) )
                    {
                      v76 = v48->Next;
                      v77 = 0;
                      while ( 1 )
                      {
                        v78 = ((_BYTE)v77 + (unsigned __int8)*((_WORD *)&v76[10].Next + 7)) & 0xF;
                        v79 = (__int64 **)*((_QWORD *)&v76[1].Next + v78);
                        v80 = (__int64)v76 + 8 * v78;
                        if ( v79 )
                        {
                          if ( (*((_DWORD *)v79 + 11) & 1) == 0
                            && v79 == (__int64 **)_InterlockedCompareExchange64(
                                                    (volatile signed __int64 *)(v80 + 16),
                                                    (signed __int64)v48,
                                                    (signed __int64)v79) )
                          {
                            goto LABEL_195;
                          }
                        }
                        else
                        {
                          LODWORD(v10) = 0x8000;
                          if ( !_InterlockedCompareExchange64(
                                  (volatile signed __int64 *)(v80 + 16),
                                  (signed __int64)v48,
                                  0LL) )
                            goto LABEL_7;
                        }
                        if ( (unsigned int)++v77 >= 0x10 )
                          goto LABEL_201;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            _m_prefetchw((char *)&v48[2].Next + 12);
            if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFF9) == 6 )
            {
              v123 = (__int64)v48->Next->Next;
              v48->Next = 0LL;
              goto LABEL_245;
            }
            if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v71, v48) )
            {
              do
              {
                v129 = *((_DWORD *)&v48[2].Next + 3);
                if ( !v129 || (v129 & 2) != 0 )
                  goto LABEL_246;
              }
              while ( v129 != _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v129 | 2, v129) );
              v130 = v48->Next;
              v131 = 0;
              while ( 1 )
              {
                v132 = ((_BYTE)v131 + (unsigned __int8)*((_WORD *)&v130[10].Next + 7)) & 0xF;
                v133 = (__int64 **)*((_QWORD *)&v130[1].Next + v132);
                v134 = (__int64)v130 + 8 * v132;
                if ( v133 )
                {
                  if ( (*((_DWORD *)v133 + 11) & 1) == 0
                    && v133 == (__int64 **)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)(v134 + 16),
                                             (signed __int64)v48,
                                             (signed __int64)v133) )
                  {
                    _m_prefetchw((char *)v133 + 44);
                    if ( _InterlockedAnd((volatile signed __int32 *)v133 + 11, 0xFFFFFFFD) == 2 )
                    {
                      v123 = **v133;
                      *v133 = 0LL;
LABEL_245:
                      RtlpInterlockedPushEntrySList(v123);
                    }
                    break;
                  }
                }
                else if ( !_InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v134 + 16),
                             (signed __int64)v48,
                             0LL) )
                {
                  break;
                }
                if ( (unsigned int)++v131 >= 0x10 )
                {
                  v123 = *(_QWORD *)(*((_QWORD *)&v48->Next->Next[1].Next + 1)
                                   + 8LL * *((unsigned __int16 *)&v48->Next[10].Next + 6)
                                   + 1192)
                       + 144LL;
                  goto LABEL_245;
                }
              }
            }
LABEL_246:
            while ( 1 )
            {
              v124 = *((_DWORD *)&v48[2].Next + 3);
              LODWORD(v10) = 0x8000;
              if ( !v124 || (v124 & 2) != 0 )
                break;
              if ( v124 == _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v124 | 2, v124) )
              {
                v125 = v48->Next;
                v126 = 0;
                while ( 1 )
                {
                  v127 = ((_BYTE)v126 + (unsigned __int8)*((_WORD *)&v125[10].Next + 7)) & 0xF;
                  v79 = (__int64 **)*((_QWORD *)&v125[1].Next + v127);
                  v128 = (__int64)v125 + 8 * v127;
                  if ( v79 )
                  {
                    if ( (*((_DWORD *)v79 + 11) & 1) == 0
                      && v79 == (__int64 **)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)(v128 + 16),
                                              (signed __int64)v48,
                                              (signed __int64)v79) )
                    {
                      goto LABEL_195;
                    }
                  }
                  else
                  {
                    LODWORD(v10) = 0x8000;
                    if ( !_InterlockedCompareExchange64(
                            (volatile signed __int64 *)(v128 + 16),
                            (signed __int64)v48,
                            0LL) )
                      goto LABEL_7;
                  }
                  if ( (unsigned int)++v126 >= 0x10 )
                    goto LABEL_201;
                }
              }
            }
          }
          goto LABEL_7;
        }
      }
      RtlpFreeUserBlock(SRWLock, v67);
    }
    return 0LL;
  }
}
