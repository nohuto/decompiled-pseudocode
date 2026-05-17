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
 *     RtlpLowFragHeapAllocateFromZone @ 0x180075C94 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpSetSegmentInfo @ 0x18007D60C (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A3D90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DD0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A3E40 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A4C50 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180105974 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180106024 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1801060C8 (RtlpLogHeapSubSegmentActivate.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocFromContext(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 v5; // r15
  unsigned __int16 *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r12
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
  unsigned int CurrentProcessorNumber; // eax
  __int64 *v42; // rax
  struct _SLIST_ENTRY **v43; // rdx
  unsigned int v44; // ecx
  volatile signed __int64 *v45; // rax
  unsigned int v46; // r8d
  struct _SLIST_ENTRY **v47; // rsi
  struct _SLIST_ENTRY *v48; // rbx
  union _SLIST_HEADER *v49; // r14
  _SLIST_ENTRY *v50; // rbx
  PSLIST_ENTRY v51; // rdx
  unsigned int v52; // r9d
  unsigned int v53; // r10d
  BOOL v54; // r8d
  signed __int64 v55; // rax
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
  char v66; // r9
  PSLIST_ENTRY UserBlock; // rax
  __int64 v68; // rsi
  unsigned __int64 v69; // rdx
  PSLIST_ENTRY v70; // rax
  signed __int32 v71; // eax
  _SLIST_ENTRY *v72; // r8
  _DWORD *v73; // rcx
  __int64 v74; // rcx
  char v75; // al
  signed __int32 v76; // eax
  _SLIST_ENTRY *v77; // r9
  int v78; // r8d
  __int64 v79; // rax
  __int64 **v80; // rdx
  __int64 v81; // rcx
  unsigned int v82; // edx
  _DWORD *SharedData; // r9
  __int64 v84; // r9
  _DWORD *v85; // r9
  __int64 v86; // r9
  __int16 RandomValue32; // ax
  signed __int32 v88; // eax
  _SLIST_ENTRY *v89; // r8
  _DWORD *v90; // rcx
  __int64 v91; // rcx
  char IsSubSegmentReuseThresholdExceeded; // al
  signed __int32 v93; // eax
  _SLIST_ENTRY *v94; // r9
  int v95; // r8d
  __int64 v96; // rax
  _SLIST_ENTRY **v97; // rcx
  PSLIST_ENTRY v98; // rsi
  _SLIST_ENTRY *v99; // rcx
  _SLIST_ENTRY *v100; // rcx
  unsigned __int16 v101; // ax
  __int64 v102; // rax
  int v103; // ecx
  _SLIST_ENTRY *v104; // rcx
  __int64 v105; // rbx
  char *v106; // rcx
  unsigned int v107; // edi
  struct _SLIST_ENTRY *v108; // r14
  volatile signed __int32 *v109; // rsi
  __int64 v110; // rcx
  bool v111; // zf
  __int64 v112; // rcx
  _SLIST_ENTRY *v113; // rcx
  unsigned __int16 Next; // cx
  unsigned __int16 v115; // ax
  bool v116; // cf
  PSLIST_ENTRY v117; // rax
  char IsSubSegmentReuseable; // al
  signed __int32 v119; // eax
  _SLIST_ENTRY *v120; // r9
  int v121; // r8d
  __int64 v122; // rax
  _SLIST_ENTRY **v123; // rcx
  __int64 v124; // rcx
  signed __int32 v125; // eax
  _SLIST_ENTRY *v126; // r9
  int v127; // r8d
  __int64 v128; // rax
  __int64 v129; // rcx
  signed __int32 v130; // eax
  _SLIST_ENTRY *v131; // r9
  int v132; // r8d
  __int64 v133; // rax
  __int64 **v134; // rdx
  __int64 v135; // rcx
  int v136; // [rsp+30h] [rbp-A8h]
  unsigned int v137; // [rsp+30h] [rbp-A8h]
  __int64 v138; // [rsp+38h] [rbp-A0h]
  volatile signed __int64 *v139; // [rsp+38h] [rbp-A0h]
  PSLIST_ENTRY v140; // [rsp+38h] [rbp-A0h]
  struct _SLIST_ENTRY *v141; // [rsp+40h] [rbp-98h]
  unsigned int Next_low; // [rsp+48h] [rbp-90h]
  struct _SLIST_ENTRY *v143; // [rsp+48h] [rbp-90h]
  PSLIST_HEADER v144; // [rsp+50h] [rbp-88h]
  PSLIST_HEADER v145; // [rsp+50h] [rbp-88h]
  union _SLIST_HEADER *v146; // [rsp+50h] [rbp-88h]
  unsigned int v147; // [rsp+58h] [rbp-80h]
  signed __int64 v148; // [rsp+60h] [rbp-78h]
  __int64 v149; // [rsp+68h] [rbp-70h]
  PSLIST_HEADER ListHead; // [rsp+70h] [rbp-68h]
  __int64 v151; // [rsp+80h] [rbp-58h]
  unsigned int v152; // [rsp+E0h] [rbp+8h]
  PSLIST_HEADER v153; // [rsp+E0h] [rbp+8h]
  int v154; // [rsp+E0h] [rbp+8h]
  union _SLIST_HEADER *v155; // [rsp+E0h] [rbp+8h]
  unsigned int v156; // [rsp+E0h] [rbp+8h]
  int v157; // [rsp+E8h] [rbp+10h]

  v157 = 0;
  LODWORD(v5) = 0;
  v6 = (unsigned __int16 *)(a1 + 676 + 4LL * a2);
  if ( (*(_BYTE *)(a1 + 672) & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v37 = NtCurrentTeb();
    HeapData_low = LOBYTE(v37->HeapData);
    UniqueThread_low = LODWORD(v37->ClientId.UniqueThread);
    LODWORD(v5) = HeapData_low - 1;
    v157 = HeapData_low - 1;
    if ( (int)HeapData_low - 1 < 0 || RtlpAffinityState[HeapData_low] != UniqueThread_low )
    {
      v40 = HIDWORD(RtlpAffinityState[0]);
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v5 = v40 & CurrentProcessorNumber;
      v157 = v40 & CurrentProcessorNumber;
      LOBYTE(v37->HeapData) = (v40 & CurrentProcessorNumber) + 1;
      qword_180163608[v5] = UniqueThread_low;
    }
  }
  v7 = *((unsigned __int8 *)v6 + 2);
  v8 = 16LL * *v6;
  v151 = v8;
  ListHead = (PSLIST_HEADER)(a1 + 48 * ((unsigned int)v5 + 68LL));
  if ( (_DWORD)v5 )
    v9 = *(_QWORD *)(a1 + 8 * v7 + 2224) - 192LL + 192LL * (unsigned int)v5;
  else
    v9 = *(_QWORD *)(a1 + 8 * v7 + 1192);
  v149 = v9;
LABEL_6:
  while ( 2 )
  {
    LODWORD(v10) = 0x8000;
LABEL_7:
    while ( 2 )
    {
      v11 = *(_QWORD *)(v9 + 8);
      if ( v11 )
      {
        v136 = 0;
        v12 = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
        v138 = v12;
        if ( (*(_DWORD *)(v11 + 32) & 0x80000000) != 0 )
        {
          v136 = 1;
          v105 = v12 + 4LL * *(unsigned __int16 *)(v9 + 172);
          if ( (*(_BYTE *)(v105 + 679) & 1) == 0 )
          {
            if ( (int)RtlpAffinitizeSegmentInfoForBucket(v12, *(unsigned __int8 *)(v105 + 678)) >= 0 )
            {
              *(_BYTE *)(v105 + 679) |= 1u;
              v106 = (unsigned int)RtlGetCurrentServiceSessionId()
                   ? (char *)NtCurrentPeb()->SharedData + 550
                   : (char *)2147353472;
              if ( *v106 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v138 + 24), *(unsigned __int8 *)(v105 + 678));
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
              goto LABEL_167;
            if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), v15 | 0x80000000, v15) )
              break;
          }
          if ( ++v14 > v13 )
            goto LABEL_167;
        }
        if ( v15 != -1 )
        {
          v10 = *(PSLIST_HEADER *)(v11 + 8);
          v144 = v10;
          if ( v10 && *(_QWORD *)v11 == v9 && (_WORD)v15 )
          {
            v16 = *(unsigned __int16 *)(v9 + 172);
            v17 = NtCurrentTeb();
            v152 = RtlpSearchWidth[v16];
            HeapData_high = (unsigned __int8)HIWORD(v17->HeapData);
            if ( HeapData_high == HIBYTE(HIWORD(v17->HeapData)) )
            {
              RandomValue32 = RtlpHeapGenerateRandomValue32();
              v10 = v144;
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
              if ( Alignment >= v152 )
                LODWORD(Alignment) = v152;
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
                v25 = v152;
                if ( (v10[2].Alignment & 0x3F) < v152 )
                  v25 = Alignment & 0x3F;
              }
              else
              {
                v25 = v152;
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
            v9 = v149;
            _BitScanForward64(&v29, ~__ROR8__(v26 | ~v28, v27));
            v30 = ((_BYTE)v27 + (_BYTE)v29) & 0x3F;
            *v24 = v26 | (1LL << v30);
            v31 = v30 + ((unsigned int)((__int64)((__int64)v24 - v10[2].Region) >> 3) << 6);
            *(_DWORD *)(v11 + 32) = (v31 << 16) | ((unsigned __int16)v15 - 1);
            v32 = (__int64)v10
                + v31
                * (((unsigned int)RtlpLFHKey ^ (unsigned int)v10 ^ (unsigned int)v138 ^ *((_DWORD *)&v10[1].HeaderX64 + 2)) >> 16);
            v33 = v32
                + (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)v10 ^ v138 ^ *((_WORD *)&v10[1].HeaderX64 + 4));
            if ( (*(_BYTE *)(v33 + 15) & 0x3F) == 0 )
            {
              LODWORD(v5) = v157;
              goto LABEL_30;
            }
            RtlpLogHeapFailure(
              15,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v149 + 24LL) + 24LL),
              v32 + (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)v10 ^ v138 ^ *((_WORD *)&v10[1].HeaderX64 + 4)),
              0,
              0LL,
              0LL);
            LODWORD(v5) = v157;
          }
          else
          {
            *(_DWORD *)(v11 + 32) = v15;
          }
        }
LABEL_167:
        v33 = 0LL;
LABEL_30:
        if ( v136 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
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
      v145 = *(PSLIST_HEADER *)v9;
LABEL_53:
      v141 = 0LL;
LABEL_54:
      v43 = (struct _SLIST_ENTRY **)(v9 + 16);
      while ( 2 )
      {
        v44 = 0;
        v147 = 0;
        v45 = 0LL;
        v137 = 0;
        v139 = 0LL;
        v46 = 0;
        v47 = v43;
        do
        {
          v48 = *v47;
          if ( !*v47 )
            goto LABEL_57;
          Next_low = LOWORD(v48[2].Next);
          v82 = Next_low;
          if ( Next_low <= v46 )
            goto LABEL_118;
          if ( (RtlpLowFragHeapGlobalFlags & 4) == 0 )
          {
            v101 = *(_WORD *)(v9 + 172);
            if ( v101 <= 0x70u )
            {
              if ( *(_DWORD *)(v9 + 160) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v101] )
              {
                Next = (unsigned __int16)v48[2].Next;
                v115 = *((_WORD *)&v48[2].Next + 4) >> 2;
                v116 = v115 < Next;
                v111 = v115 == Next;
                v44 = v137;
                LODWORD(v10) = !v116 && !v111;
                goto LABEL_122;
              }
              v44 = v137;
            }
          }
          LOBYTE(v10) = 0;
LABEL_122:
          v154 = (int)v10;
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
            v84 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v84 = 2147353482LL;
          if ( *(_BYTE *)v84
            || ((v85 = NtCurrentPeb()->SharedData) == 0LL || !*v85
              ? (v86 = 2147353472LL)
              : (v86 = (__int64)NtCurrentPeb()->SharedData + 550),
                *(_BYTE *)v86 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
          {
            if ( !(_BYTE)v10 )
              goto LABEL_129;
            RtlpLogHeapReuseThresholdActivate(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL),
              *((_QWORD *)&v48->Next + 1),
              *(unsigned __int16 *)(v9 + 172));
            v44 = v137;
            v82 = Next_low;
            v46 = v147;
            LODWORD(v10) = v154;
          }
          if ( (_BYTE)v10 )
          {
LABEL_118:
            v45 = v139;
LABEL_57:
            v48 = v141;
            goto LABEL_58;
          }
LABEL_129:
          v46 = v82;
          v141 = v48;
          v147 = v82;
          v45 = (volatile signed __int64 *)(v9 + 8 * (v44 + 2LL));
          v139 = v45;
LABEL_58:
          ++v44;
          ++v47;
          v137 = v44;
        }
        while ( v44 < 0x10 );
        v49 = ListHead;
        if ( v45 )
        {
          v155 = (union _SLIST_HEADER *)(*(_QWORD *)(v145[1].Region + 8LL * *(unsigned __int16 *)(v9 + 172) + 1192)
                                       + 144LL);
          v98 = RtlpInterlockedPopEntrySList(v155);
          if ( v98 )
          {
            while ( 1 )
            {
              v103 = *((_DWORD *)&v98[-1].Next + 3);
              v98 -= 3;
              if ( (v103 & 1) != 0 )
                break;
              _m_prefetchw((char *)&v98[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v98[2].Next + 3, 0xFFFFFFFD) == 2 )
              {
                v104 = v98->Next->Next;
                v98->Next = 0LL;
                RtlpInterlockedPushEntrySList(v104);
              }
              v98 = RtlpInterlockedPopEntrySList(v155);
              if ( !v98 )
                goto LABEL_151;
            }
            if ( !(unsigned int)RtlpSetSegmentInfo(v98, v9) )
            {
              RtlpInterlockedPushEntrySList(v155);
              v98 = 0LL;
            }
          }
LABEL_151:
          if ( v48 != (struct _SLIST_ENTRY *)_InterlockedCompareExchange64(
                                               v139,
                                               (signed __int64)v98,
                                               (signed __int64)v48) )
          {
            v43 = (struct _SLIST_ENTRY **)(v9 + 16);
            if ( !v98 )
              continue;
            RtlpInterlockedPushEntrySList(v155);
            goto LABEL_54;
          }
          if ( !v98 )
            *(_WORD *)(v9 + 174) = (unsigned __int8)(((__int64)v139 - v9 - 16) >> 3);
          if ( v48 )
          {
            _m_prefetchw((char *)&v48[2].Next + 12);
            if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFFD) != 2 )
              goto LABEL_63;
            v99 = v48->Next->Next;
            v48->Next = 0LL;
            RtlpInterlockedPushEntrySList(v99);
            goto LABEL_53;
          }
        }
        else
        {
          v141 = 0LL;
        }
        break;
      }
      v50 = 0LL;
      v146 = (union _SLIST_HEADER *)(*(_QWORD *)(v145[1].Region + 8LL * *(unsigned __int16 *)(v9 + 172) + 1192) + 144LL);
      v140 = RtlpInterlockedPopEntrySList(v146);
      v51 = v140;
      if ( !v140 )
        goto LABEL_62;
      v107 = 0;
      v108 = 0LL;
      while ( 2 )
      {
        v109 = (volatile signed __int32 *)&v51[-3];
        v141 = v51 - 3;
        if ( (*((_DWORD *)&v51[-1].Next + 3) & 1) == 0 )
        {
          _m_prefetchw((const void *)(v109 + 11));
          if ( _InterlockedAnd(v109 + 11, 0xFFFFFFFD) == 2 )
            goto LABEL_187;
          goto LABEL_188;
        }
        if ( !(unsigned int)RtlpSetSegmentInfo(v109, v9) )
        {
          v117 = v140;
          if ( v107 )
            v117 = v108;
          ++v107;
          v108 = v117;
          v140->Next = v50;
          v50 = v140;
          goto LABEL_188;
        }
        _m_prefetchw((const void *)(v109 + 11));
        if ( _InterlockedAnd(v109 + 11, 0xFFFFFFFD) == 2 )
        {
LABEL_187:
          v110 = **(_QWORD **)v109;
          *(_QWORD *)v109 = 0LL;
          RtlpInterlockedPushEntrySList(v110);
          goto LABEL_188;
        }
        if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v9, v109) )
        {
LABEL_188:
          v141 = 0LL;
          v140 = RtlpInterlockedPopEntrySList(v146);
          v51 = v140;
          if ( !v140 )
            break;
          continue;
        }
        break;
      }
      LODWORD(v5) = v157;
      v111 = v107 == 0;
      v143 = v108;
      v49 = ListHead;
      v156 = v107;
      v8 = v151;
      if ( !v111 )
        InterlockedPushListSList(v146, v50, v143, v156);
LABEL_62:
      v48 = v141;
LABEL_63:
      if ( v48 )
      {
        *((_BYTE *)&v48[2].Next + 11) = v5;
        do
        {
          v88 = *((_DWORD *)&v48[2].Next + 3);
          LODWORD(v10) = 0x8000;
          if ( !v88 || (v88 & 6) != 0 )
            goto LABEL_7;
        }
        while ( v88 != _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v88 | 6, v88) );
        v89 = v48->Next;
        if ( v48->Next == (_SLIST_ENTRY *)v9 )
        {
          v90 = NtCurrentPeb()->SharedData;
          if ( v90 && *v90 )
            v91 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v91 = 2147353472LL;
          if ( *(_BYTE *)v91 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL),
              *((_QWORD *)&v48->Next + 1));
          v48 = (struct _SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)(v9 + 8), (__int64)v48);
          LODWORD(v10) = 0x8000;
          if ( !v48 )
            continue;
          _m_prefetchw((char *)&v48[2].Next + 12);
          if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFF9) != 6 )
          {
            if ( LOWORD(v48[2].Next) )
            {
              IsSubSegmentReuseThresholdExceeded = RtlpIsSubSegmentReuseThresholdExceeded(v9, v48);
              LODWORD(v10) = 0x8000;
              if ( !IsSubSegmentReuseThresholdExceeded )
              {
                while ( 1 )
                {
                  v93 = *((_DWORD *)&v48[2].Next + 3);
                  LODWORD(v10) = 0x8000;
                  if ( !v93 || (v93 & 2) != 0 )
                    break;
                  if ( v93 == _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v93 | 2, v93) )
                  {
                    v94 = v48->Next;
                    v95 = 0;
                    while ( 1 )
                    {
                      v96 = ((_BYTE)v95 + (unsigned __int8)*((_WORD *)&v94[10].Next + 7)) & 0xF;
                      v80 = (__int64 **)*((_QWORD *)&v94[1].Next + v96);
                      v97 = &v94->Next + v96;
                      if ( v80 )
                      {
                        if ( (*((_DWORD *)v80 + 11) & 1) == 0
                          && v80 == (__int64 **)_InterlockedCompareExchange64(
                                                  (volatile signed __int64 *)v97 + 2,
                                                  (signed __int64)v48,
                                                  (signed __int64)v80) )
                        {
                          goto LABEL_199;
                        }
                      }
                      else
                      {
                        LODWORD(v10) = 0x8000;
                        if ( !_InterlockedCompareExchange64(
                                (volatile signed __int64 *)v97 + 2,
                                (signed __int64)v48,
                                0LL) )
                          goto LABEL_7;
                      }
                      if ( (unsigned int)++v95 >= 0x10 )
                        goto LABEL_205;
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
            IsSubSegmentReuseable = RtlpIsSubSegmentReuseable(v89, v48);
            LODWORD(v10) = 0x8000;
            if ( IsSubSegmentReuseable )
            {
              while ( 1 )
              {
                v119 = *((_DWORD *)&v48[2].Next + 3);
                LODWORD(v10) = 0x8000;
                if ( !v119 || (v119 & 2) != 0 )
                  break;
                if ( v119 == _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v119 | 2, v119) )
                {
                  v120 = v48->Next;
                  v121 = 0;
                  while ( 1 )
                  {
                    v122 = ((_BYTE)v121 + (unsigned __int8)*((_WORD *)&v120[10].Next + 7)) & 0xF;
                    v80 = (__int64 **)*((_QWORD *)&v120[1].Next + v122);
                    v123 = &v120->Next + v122;
                    if ( v80 )
                    {
                      if ( (*((_DWORD *)v80 + 11) & 1) == 0
                        && v80 == (__int64 **)_InterlockedCompareExchange64(
                                                (volatile signed __int64 *)v123 + 2,
                                                (signed __int64)v48,
                                                (signed __int64)v80) )
                      {
LABEL_199:
                        _m_prefetchw((char *)v80 + 44);
                        LODWORD(v10) = 0x8000;
                        if ( _InterlockedAnd((volatile signed __int32 *)v80 + 11, 0xFFFFFFFD) != 2 )
                          goto LABEL_7;
                        v112 = **v80;
                        *v80 = 0LL;
                        RtlpInterlockedPushEntrySList(v112);
                        goto LABEL_6;
                      }
                    }
                    else
                    {
                      LODWORD(v10) = 0x8000;
                      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v123 + 2, (signed __int64)v48, 0LL) )
                        goto LABEL_7;
                    }
                    if ( (unsigned int)++v121 >= 0x10 )
                    {
LABEL_205:
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
        v100 = v48->Next->Next;
        v48->Next = 0LL;
        RtlpInterlockedPushEntrySList(v100);
        LODWORD(v10) = 0x8000;
        continue;
      }
      break;
    }
    v52 = *(_DWORD *)(v9 + 160);
    v53 = *((unsigned __int8 *)v6 + 2);
    v54 = (*(_BYTE *)(a1 + 672) & 2) != 0;
    do
    {
      v55 = *(_QWORD *)(a1 + 80);
      v56 = 0;
      if ( (_DWORD)v55 == v53 )
      {
        HIDWORD(v148) = HIDWORD(v55) + 1;
        if ( HIDWORD(v55) > 7 )
        {
          v56 = 1;
          HIDWORD(v148) = 0;
        }
      }
      else
      {
        v148 = v53 | 0x100000000LL;
      }
    }
    while ( v55 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v148, v55) );
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
    if ( *(_DWORD *)(v9 + 164) )
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
    v66 = v52 >= 0x400 || v65 == 18;
    UserBlock = RtlpAllocateUserBlock(a1, v65, v58 + 16, v66);
    v68 = (__int64)UserBlock;
    if ( UserBlock )
    {
      v69 = 1LL << LOBYTE(UserBlock[1].Next);
      if ( v69 > 0xF0000 )
        v69 = 983040LL;
      v153 = (PSLIST_HEADER)(v69 + WORD1(UserBlock[1].Next));
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
      v70 = RtlpInterlockedPopEntrySList(v49);
      if ( v70 )
      {
        v48 = v70 - 3;
        goto LABEL_97;
      }
      v102 = RtlpLowFragHeapAllocateFromZone(a1, (unsigned int)v5);
      v48 = (struct _SLIST_ENTRY *)v102;
      if ( v102 )
      {
        *(_QWORD *)(v102 + 8) = 0LL;
LABEL_97:
        if ( v48 )
        {
          *((_BYTE *)&v48[2].Next + 11) = v5;
          RtlpSubSegmentInitialize(
            a1,
            (__int64)v48,
            v68,
            (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v6 + 2)],
            (__int64)v153,
            (__int64)v6);
          do
          {
            v71 = *((_DWORD *)&v48[2].Next + 3);
            if ( !v71 || (v71 & 6) != 0 )
              goto LABEL_250;
          }
          while ( v71 != _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v71 | 6, v71) );
          v72 = v48->Next;
          if ( v48->Next == (_SLIST_ENTRY *)v9 )
          {
            v73 = NtCurrentPeb()->SharedData;
            if ( v73 && *v73 )
              v74 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v74 = 2147353472LL;
            if ( *(_BYTE *)v74 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapSubSegmentActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL),
                *((_QWORD *)&v48->Next + 1));
            v48 = (struct _SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)(v9 + 8), (__int64)v48);
            LODWORD(v10) = 0x8000;
            if ( v48 )
            {
              _m_prefetchw((char *)&v48[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFF9) == 6 )
              {
                v113 = v48->Next->Next;
                v48->Next = 0LL;
                RtlpInterlockedPushEntrySList(v113);
                continue;
              }
              if ( LOWORD(v48[2].Next) )
              {
                v75 = RtlpIsSubSegmentReuseThresholdExceeded(v9, v48);
                LODWORD(v10) = 0x8000;
                if ( !v75 )
                {
                  while ( 1 )
                  {
                    v76 = *((_DWORD *)&v48[2].Next + 3);
                    LODWORD(v10) = 0x8000;
                    if ( !v76 || (v76 & 2) != 0 )
                      break;
                    if ( v76 == _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v76 | 2, v76) )
                    {
                      v77 = v48->Next;
                      v78 = 0;
                      while ( 1 )
                      {
                        v79 = ((_BYTE)v78 + (unsigned __int8)*((_WORD *)&v77[10].Next + 7)) & 0xF;
                        v80 = (__int64 **)*((_QWORD *)&v77[1].Next + v79);
                        v81 = (__int64)v77 + 8 * v79;
                        if ( v80 )
                        {
                          if ( (*((_DWORD *)v80 + 11) & 1) == 0
                            && v80 == (__int64 **)_InterlockedCompareExchange64(
                                                    (volatile signed __int64 *)(v81 + 16),
                                                    (signed __int64)v48,
                                                    (signed __int64)v80) )
                          {
                            goto LABEL_199;
                          }
                        }
                        else
                        {
                          LODWORD(v10) = 0x8000;
                          if ( !_InterlockedCompareExchange64(
                                  (volatile signed __int64 *)(v81 + 16),
                                  (signed __int64)v48,
                                  0LL) )
                            goto LABEL_7;
                        }
                        if ( (unsigned int)++v78 >= 0x10 )
                          goto LABEL_205;
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
              v124 = (__int64)v48->Next->Next;
              v48->Next = 0LL;
              goto LABEL_249;
            }
            if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v72, v48) )
            {
              do
              {
                v130 = *((_DWORD *)&v48[2].Next + 3);
                if ( !v130 || (v130 & 2) != 0 )
                  goto LABEL_250;
              }
              while ( v130 != _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v130 | 2, v130) );
              v131 = v48->Next;
              v132 = 0;
              while ( 1 )
              {
                v133 = ((_BYTE)v132 + (unsigned __int8)*((_WORD *)&v131[10].Next + 7)) & 0xF;
                v134 = (__int64 **)*((_QWORD *)&v131[1].Next + v133);
                v135 = (__int64)v131 + 8 * v133;
                if ( v134 )
                {
                  if ( (*((_DWORD *)v134 + 11) & 1) == 0
                    && v134 == (__int64 **)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)(v135 + 16),
                                             (signed __int64)v48,
                                             (signed __int64)v134) )
                  {
                    _m_prefetchw((char *)v134 + 44);
                    if ( _InterlockedAnd((volatile signed __int32 *)v134 + 11, 0xFFFFFFFD) == 2 )
                    {
                      v124 = **v134;
                      *v134 = 0LL;
LABEL_249:
                      RtlpInterlockedPushEntrySList(v124);
                    }
                    break;
                  }
                }
                else if ( !_InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v135 + 16),
                             (signed __int64)v48,
                             0LL) )
                {
                  break;
                }
                if ( (unsigned int)++v132 >= 0x10 )
                {
                  v124 = *(_QWORD *)(*((_QWORD *)&v48->Next->Next[1].Next + 1)
                                   + 8LL * *((unsigned __int16 *)&v48->Next[10].Next + 6)
                                   + 1192)
                       + 144LL;
                  goto LABEL_249;
                }
              }
            }
LABEL_250:
            while ( 1 )
            {
              v125 = *((_DWORD *)&v48[2].Next + 3);
              LODWORD(v10) = 0x8000;
              if ( !v125 || (v125 & 2) != 0 )
                break;
              if ( v125 == _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v125 | 2, v125) )
              {
                v126 = v48->Next;
                v127 = 0;
                while ( 1 )
                {
                  v128 = ((_BYTE)v127 + (unsigned __int8)*((_WORD *)&v126[10].Next + 7)) & 0xF;
                  v80 = (__int64 **)*((_QWORD *)&v126[1].Next + v128);
                  v129 = (__int64)v126 + 8 * v128;
                  if ( v80 )
                  {
                    if ( (*((_DWORD *)v80 + 11) & 1) == 0
                      && v80 == (__int64 **)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)(v129 + 16),
                                              (signed __int64)v48,
                                              (signed __int64)v80) )
                    {
                      goto LABEL_199;
                    }
                  }
                  else
                  {
                    LODWORD(v10) = 0x8000;
                    if ( !_InterlockedCompareExchange64(
                            (volatile signed __int64 *)(v129 + 16),
                            (signed __int64)v48,
                            0LL) )
                      goto LABEL_7;
                  }
                  if ( (unsigned int)++v127 >= 0x10 )
                    goto LABEL_205;
                }
              }
            }
          }
          goto LABEL_7;
        }
      }
      RtlpFreeUserBlock(a1, v68);
    }
    return 0LL;
  }
}
