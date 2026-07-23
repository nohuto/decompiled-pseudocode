/*
 * XREFs of RtlpFreeHeap @ 0x180019FC0
 * Callers:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180018460 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlpHeapRemoveListEntry @ 0x1800141C0 (RtlpHeapRemoveListEntry.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18001C380 (RtlpInsertFreeBlock.c)
 *     RtlpFindEntry @ 0x18001D898 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x18002070C (RtlpHeapAddListEntry.c)
 *     RtlpHeapListCompare @ 0x180021A60 (RtlpHeapListCompare.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpWakeByAddress @ 0x18005E81C (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18005F030 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800611AC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlLogStackBackTraceEx @ 0x180061BC0 (RtlLogStackBackTraceEx.c)
 *     RtlpUpdateHeapRates @ 0x18007F5EC (RtlpUpdateHeapRates.c)
 *     RtlpUpdateHeapWatermarks @ 0x180088C44 (RtlpUpdateHeapWatermarks.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     ZwSetEvent @ 0x1800A04C0 (ZwSetEvent.c)
 *     RtlCompareMemoryUlong @ 0x1800A4B00 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E9920 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x1800F3FEC (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x180103E70 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x180105BF0 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x180105E78 (RtlpLogHeapFreeEvent.c)
 *     RtlDebugFreeHeap @ 0x180107BB4 (RtlDebugFreeHeap.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpFreeHeap(unsigned __int16 *BaseAddress, int a2, unsigned __int16 *a3, __int64 a4)
{
  char v6; // r12
  int v8; // edi
  __int64 v9; // r8
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int16 *v13; // rsi
  __int64 v14; // rcx
  struct _TEB *v15; // rax
  signed __int8 v16; // cf
  void *UniqueThread; // rax
  int v18; // edx
  __int64 **v19; // rcx
  int v20; // edx
  _BYTE *v21; // r8
  char v22; // al
  unsigned __int16 *v23; // rdi
  unsigned __int16 v24; // ax
  _WORD *v25; // rdx
  bool v26; // zf
  int v27; // r8d
  int v28; // edx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned __int16 *v31; // rdi
  int v32; // edx
  unsigned __int16 *v33; // r10
  __int64 v34; // r14
  __int64 *v35; // r15
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int16 *v42; // r14
  int v43; // edx
  char v44; // al
  SIZE_T v45; // rsi
  SIZE_T v46; // r14
  unsigned __int16 *v47; // r8
  __int64 v48; // r15
  __int64 *v49; // r12
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rdx
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  char v56; // al
  SIZE_T v57; // rdi
  SIZE_T v58; // r15
  unsigned int v59; // r14d
  unsigned __int64 v60; // rdx
  _QWORD *v61; // rax
  __int64 *v62; // r13
  unsigned __int64 v63; // rcx
  unsigned int v64; // r15d
  unsigned int v65; // r15d
  __int64 v66; // r9
  _QWORD *v67; // r14
  _QWORD *v68; // r12
  _QWORD *v69; // rax
  int v70; // edi
  __int64 v71; // r8
  int v72; // edi
  __int64 v73; // rcx
  _QWORD *v74; // rdi
  __int64 v75; // rdi
  unsigned int v76; // r9d
  unsigned int *v77; // r8
  unsigned int v78; // edx
  int v79; // ecx
  __int64 v80; // rdi
  int v81; // ecx
  _QWORD *v82; // rcx
  __int64 *v83; // rax
  __int64 *v84; // rdi
  unsigned __int64 v85; // r14
  unsigned __int64 v86; // rcx
  unsigned int v87; // ecx
  unsigned int v88; // r15d
  __int64 v89; // r12
  __int64 v90; // r13
  int v91; // esi
  int v92; // ecx
  int v93; // ecx
  unsigned __int64 v94; // r14
  _DWORD *v95; // r8
  unsigned __int64 v96; // rdx
  _QWORD *v97; // rdi
  _QWORD *Entry; // r8
  int v99; // ecx
  int v100; // eax
  _QWORD *v101; // r14
  __int64 *v102; // rax
  __int64 **v103; // rdx
  unsigned __int64 v104; // rcx
  unsigned __int64 v105; // rdi
  int v106; // eax
  int v107; // edx
  unsigned __int16 v108; // cx
  unsigned __int16 *v109; // rdi
  unsigned __int64 v110; // rsi
  __int64 v111; // rax
  __int64 *v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // r9
  __int64 v115; // r8
  __int64 v116; // rdi
  __int64 v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rdi
  __int64 v120; // rcx
  unsigned int v121; // edx
  unsigned __int64 v122; // rcx
  __int64 v123; // rsi
  signed __int32 v124; // edi
  void *DeferredCriticalSectionEvent; // r8
  int v126; // edx
  signed __int32 v127; // eax
  int v128; // eax
  signed __int32 v129[8]; // [rsp+0h] [rbp-198h] BYREF
  char v130[8]; // [rsp+20h] [rbp-178h]
  char v131; // [rsp+40h] [rbp-158h]
  char v132; // [rsp+41h] [rbp-157h]
  unsigned __int16 updated; // [rsp+44h] [rbp-154h]
  char v134; // [rsp+48h] [rbp-150h]
  unsigned __int64 v135; // [rsp+50h] [rbp-148h] BYREF
  int v136[2]; // [rsp+58h] [rbp-140h]
  unsigned __int64 v137; // [rsp+60h] [rbp-138h]
  unsigned __int8 v138; // [rsp+68h] [rbp-130h]
  __int16 v139; // [rsp+6Ah] [rbp-12Eh]
  __int16 v140; // [rsp+6Ch] [rbp-12Ch]
  unsigned int v141; // [rsp+70h] [rbp-128h]
  unsigned int v142; // [rsp+74h] [rbp-124h]
  __int64 v143; // [rsp+78h] [rbp-120h]
  unsigned __int64 v144; // [rsp+80h] [rbp-118h] BYREF
  unsigned __int64 v145; // [rsp+88h] [rbp-110h]
  int v146[2]; // [rsp+90h] [rbp-108h]
  unsigned int v147; // [rsp+98h] [rbp-100h]
  unsigned int NtGlobalFlag; // [rsp+9Ch] [rbp-FCh]
  __int64 v149; // [rsp+A0h] [rbp-F8h]
  SIZE_T v150; // [rsp+A8h] [rbp-F0h]
  unsigned __int16 *v151; // [rsp+B0h] [rbp-E8h]
  __int64 v152; // [rsp+C8h] [rbp-D0h]
  SIZE_T v153; // [rsp+D0h] [rbp-C8h]
  unsigned int *v154; // [rsp+D8h] [rbp-C0h]
  __int64 v155; // [rsp+E0h] [rbp-B8h]
  unsigned __int16 *v156; // [rsp+E8h] [rbp-B0h]
  __int64 v157; // [rsp+F0h] [rbp-A8h]
  __int64 v158; // [rsp+F8h] [rbp-A0h]
  struct _TEB *v159; // [rsp+100h] [rbp-98h]
  unsigned __int64 v160; // [rsp+108h] [rbp-90h]
  int v161; // [rsp+118h] [rbp-80h]
  int v162; // [rsp+128h] [rbp-70h]
  int v163; // [rsp+138h] [rbp-60h]
  int v164; // [rsp+148h] [rbp-50h]
  int v165; // [rsp+158h] [rbp-40h]
  int v166; // [rsp+168h] [rbp-30h]
  unsigned __int16 *v167; // [rsp+1B0h] [rbp+18h]

  v167 = a3;
  v6 = 1;
  v132 = 1;
  v131 = 0;
  v142 = 1;
  v144 = 0LL;
  updated = 0;
  if ( BaseAddress == a3 )
  {
    RtlpLogHeapFailure(9, (_DWORD)BaseAddress, (_DWORD)a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v8 = *((_DWORD *)BaseAddress + 29) | a2;
  if ( (v8 & 0x7D010F60) != 0 )
  {
    v6 = 0;
    v132 = 0;
    v9 = 4LL;
    if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
      return RtlDebugFreeHeap(BaseAddress);
  }
  else
  {
    v9 = 3LL;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    v12 = 2147353472LL;
  }
  else
  {
    v12 = 2147353472LL;
    v11 = 2147353472LL;
  }
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v13 = v167;
    if ( ((*((_BYTE *)v167 + 10) ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 17))) & 8) == 0 )
      RtlpLogHeapFreeEvent(BaseAddress, a4, v9);
  }
  else
  {
    v13 = v167;
  }
  if ( (v8 & 1) != 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v20 = *((_DWORD *)v13 + 2) ^ *((_DWORD *)BaseAddress + 34);
      *((_DWORD *)v13 + 2) = v20;
      if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v13);
    }
  }
  else
  {
    v14 = *((_QWORD *)BaseAddress + 44);
    v15 = NtCurrentTeb();
    v16 = _interlockedbittestandreset((volatile signed __int32 *)(v14 + 8), 0);
    UniqueThread = v15->ClientId.UniqueThread;
    if ( v16 )
    {
      *(_QWORD *)(v14 + 16) = UniqueThread;
      *(_DWORD *)(v14 + 12) = 1;
      ++*((_DWORD *)BaseAddress + 154);
    }
    else if ( *(void **)(v14 + 16) == UniqueThread )
    {
      ++*(_DWORD *)(v14 + 12);
      ++*((_DWORD *)BaseAddress + 154);
    }
    else
    {
      if ( byte_180165408 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v159 = NtCurrentTeb();
        v159->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        v142 = 0;
LABEL_277:
        v59 = 256;
        goto LABEL_278;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      RtlpUpdateHeapRates(BaseAddress, 1LL);
    }
    v131 = 1;
    v13 = v167;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v18 = *((_DWORD *)v167 + 2) ^ *((_DWORD *)BaseAddress + 34);
      *((_DWORD *)v167 + 2) = v18;
      if ( HIBYTE(v18) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE1(v18) ^ BYTE2(v18))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v167);
    }
    v19 = (__int64 **)*((_QWORD *)BaseAddress + 39);
    do
    {
      if ( v167[4] < (unsigned __int64)*((unsigned int *)v19 + 2) )
        break;
      v19 = (__int64 **)*v19;
    }
    while ( v19 );
  }
  v21 = v13 + 5;
  v22 = *((_BYTE *)v13 + 10);
  if ( (v22 & 8) != 0 )
    *v21 = v22 & 0xF7;
  if ( *((_BYTE *)v13 + 15) == 4 )
  {
    v110 = (unsigned __int64)(v13 - 24);
    *(_QWORD *)v136 = v110;
    *(_QWORD *)v146 = *(_QWORD *)(v110 + 32);
    v144 = v110 & 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)BaseAddress + 74) -= *(_QWORD *)v146;
    v111 = *(_QWORD *)v110;
    v112 = *(__int64 **)(v110 + 8);
    v113 = *v112;
    v114 = *(_QWORD *)(*(_QWORD *)v110 + 8LL);
    if ( *v112 == v114 && v113 == v110 )
    {
      *v112 = v111;
      *(_QWORD *)(v111 + 8) = v112;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, v110, v114, v113, 0LL);
    }
    if ( !v6 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v115 = *(_QWORD *)(v110 + 32) >> 4;
        v110 = *(_QWORD *)v136;
        RtlpUpdateTagEntry((_DWORD)BaseAddress, *(unsigned __int16 *)(*(_QWORD *)v136 + 18LL), v115, 0, 3);
      }
      else
      {
        v110 = *(_QWORD *)v136;
      }
    }
    if ( v131 )
    {
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      v131 = 0;
    }
    v116 = *(_QWORD *)(v110 + 40);
    v158 = v116;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v117 = (__int64)NtCurrentPeb()->SharedData + 558;
      LODWORD(v110) = v136[0];
      v116 = v158;
    }
    else
    {
      v117 = 2147353480LL;
    }
    if ( *(_BYTE *)v117 )
      RtlpHeapLogRangeRelease(BaseAddress, v144, v116);
    v135 = 0LL;
    RtlpSecMemFreeVirtualMemory(v117, &v144, &v135, 0x8000LL);
    if ( RtlGetCurrentServiceSessionId() )
    {
      v118 = (__int64)NtCurrentPeb()->SharedData + 550;
      LODWORD(v110) = v136[0];
    }
    else
    {
      v118 = 2147353472LL;
    }
    if ( *(_BYTE *)v118 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v12 = (__int64)NtCurrentPeb()->SharedData + 550;
        LODWORD(v110) = v136[0];
        RtlpLogHeapContractEvent(
          (int)BaseAddress,
          v136[0],
          v146[0],
          16 * *((_QWORD *)BaseAddress + 24),
          0,
          0LL,
          (HANDLE)*(unsigned __int8 *)v12);
      }
      else
      {
        LODWORD(v110) = v136[0];
      }
    }
    v119 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v120 = (__int64)NtCurrentPeb()->SharedData + 560;
      LODWORD(v110) = v136[0];
    }
    else
    {
      v120 = 2147353482LL;
    }
    if ( *(_BYTE *)v120 )
    {
      if ( RtlGetCurrentServiceSessionId() )
      {
        v119 = (__int64)NtCurrentPeb()->SharedData + 560;
        LODWORD(v110) = v136[0];
      }
      RtlpLogHeapContractEvent(
        (int)BaseAddress,
        v110,
        v146[0],
        16 * *((_QWORD *)BaseAddress + 24),
        0,
        0LL,
        (HANDLE)*(unsigned __int8 *)v119);
    }
    goto LABEL_277;
  }
  v23 = v13 + 4;
  v24 = v13[4];
  if ( v24 < BaseAddress[216] )
  {
    if ( ((unsigned __int8)(1 << (v24 & 7)) & *((_BYTE *)BaseAddress + ((unsigned __int64)v24 >> 3) + 434)) == 0 )
    {
      v25 = (_WORD *)(*((_QWORD *)BaseAddress + 53) + 2LL * *v23);
      if ( *v25 > 1u )
        --*v25;
    }
    v13 = v167;
  }
  if ( !v6 )
  {
    v147 = NtCurrentPeb()->NtGlobalFlag;
    v13 = v167;
    if ( (v147 & 0x800) != 0 )
    {
      *(_DWORD *)v130 = 2;
      v26 = (*v21 & 2) == 0;
      v27 = a3[4];
      if ( v26 )
      {
        v138 = *((_BYTE *)v167 + 11);
        v28 = v138;
      }
      else
      {
        v28 = v167[8 * a3[4] - 7];
      }
      updated = RtlpUpdateTagEntry((_DWORD)BaseAddress, v28, v27, 0, *(_DWORD *)v130);
    }
  }
  v29 = *v23;
  v135 = v29;
  if ( *((char *)BaseAddress + 112) >= 0 )
  {
    v134 = 0;
    v151 = v13;
    v30 = 16 * (v13[6] ^ (unsigned __int64)BaseAddress[70]);
    v31 = &v13[v30 / 0xFFFFFFFFFFFFFFFEuLL];
    if ( &v13[v30 / 0xFFFFFFFFFFFFFFFEuLL] != v13
      && ((*((_BYTE *)v31 + 10) ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) == 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v32 = *((_DWORD *)v31 + 2) ^ *((_DWORD *)BaseAddress + 34);
        *((_DWORD *)v31 + 2) = v32;
        if ( HIBYTE(v32) != ((unsigned __int8)v32 ^ (unsigned __int8)(BYTE1(v32) ^ BYTE2(v32))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v31);
      }
      v33 = v31 + 8;
      v34 = *((_QWORD *)v31 + 2);
      v35 = (__int64 *)*((_QWORD *)v31 + 3);
      v36 = *v35;
      v37 = *(_QWORD *)(v34 + 8);
      if ( *v35 == v37 && (unsigned __int16 *)v36 == v33 )
      {
        *((_QWORD *)BaseAddress + 24) -= v31[4];
        v38 = *((_QWORD *)BaseAddress + 39);
        if ( v38 )
        {
          v39 = v31[4];
          while ( 1 )
          {
            v40 = *(unsigned int *)(v38 + 8);
            if ( v39 < v40 )
            {
              v41 = v31[4];
              goto LABEL_63;
            }
            if ( !*(_QWORD *)v38 )
              break;
            v38 = *(_QWORD *)v38;
          }
          v41 = (unsigned int)(v40 - 1);
LABEL_63:
          v149 = v41;
          RtlpHeapRemoveListEntry((__int64)BaseAddress, v38, 1, (__int64 *)v31 + 2, v41, v39);
        }
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
        if ( (v31[5] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
        {
          v44 = *((_BYTE *)v31 + 10);
          if ( (v44 & 4) != 0 )
          {
            v45 = 16LL * v31[4] - 32;
            v150 = v45;
            if ( (v44 & 2) != 0 && v45 > 4 )
            {
              v45 -= 4LL;
              v150 = v45;
            }
            v46 = RtlCompareMemoryUlong(v31 + 16, v45, 0xFEEEFEEE);
            if ( v46 != v45 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v31, (char *)v31 + v46 + 32);
              RtlpBreakPointHeap();
            }
          }
          *((_BYTE *)v31 + 10) = 0;
          *((_BYTE *)v31 + 15) = 0;
          v13 = v31;
          v151 = v31;
          v135 += v31[4];
          v31[4] = v135;
          v31[8 * v135 + 6] = v135 ^ BaseAddress[70];
        }
        else
        {
          RtlpDeCommitFreeBlock(BaseAddress);
        }
        v29 = v135;
      }
      else
      {
        RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v33, v37, v36, 0LL);
        v29 = v135;
      }
    }
    v42 = &v13[8 * v29];
    if ( !*((_DWORD *)BaseAddress + 31) )
      goto LABEL_72;
    v161 = *((_DWORD *)v42 + 2) ^ *((_DWORD *)BaseAddress + 34);
    if ( HIBYTE(v161) != ((unsigned __int8)v161 ^ (unsigned __int8)(BYTE1(v161) ^ BYTE2(v161))) )
      RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)v13 + 16 * v29, 0, 0LL, 0LL);
    while ( 1 )
    {
      v29 = v135;
LABEL_72:
      if ( ((*((_BYTE *)v42 + 10) ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
        break;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v43 = *((_DWORD *)v42 + 2) ^ *((_DWORD *)BaseAddress + 34);
        *((_DWORD *)v42 + 2) = v43;
        if ( HIBYTE(v43) != ((unsigned __int8)v43 ^ (unsigned __int8)(BYTE1(v43) ^ BYTE2(v43))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v42);
      }
      v47 = v42 + 8;
      v48 = *((_QWORD *)v42 + 2);
      v49 = (__int64 *)*((_QWORD *)v42 + 3);
      v50 = *v49;
      v51 = *(_QWORD *)(v48 + 8);
      if ( *v49 == v51 && (unsigned __int16 *)v50 == v47 )
      {
        *((_QWORD *)BaseAddress + 24) -= v42[4];
        v52 = *((_QWORD *)BaseAddress + 39);
        if ( v52 )
        {
          v53 = v42[4];
          while ( 1 )
          {
            v54 = *(unsigned int *)(v52 + 8);
            if ( v53 < v54 )
            {
              v55 = v42[4];
              goto LABEL_97;
            }
            if ( !*(_QWORD *)v52 )
              break;
            v52 = *(_QWORD *)v52;
          }
          v55 = (unsigned int)(v54 - 1);
LABEL_97:
          v152 = v55;
          RtlpHeapRemoveListEntry((__int64)BaseAddress, v52, 1, (__int64 *)v42 + 2, v55, v53);
        }
        *v49 = v48;
        *(_QWORD *)(v48 + 8) = v49;
        if ( (v42[5] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
        {
          v56 = *((_BYTE *)v42 + 10);
          if ( (v56 & 4) != 0 )
          {
            v57 = 16LL * v42[4] - 32;
            v153 = v57;
            if ( (v56 & 2) != 0 && v57 > 4 )
            {
              v57 -= 4LL;
              v153 = v57;
            }
            v58 = RtlCompareMemoryUlong(v42 + 16, v57, 0xFEEEFEEE);
            if ( v58 != v57 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v42, (char *)v42 + v58 + 32);
              RtlpBreakPointHeap();
            }
          }
          *((_BYTE *)v13 + 10) = 0;
          *((_BYTE *)v13 + 15) = 0;
          v135 += v42[4];
          v13[4] = v135;
          v13[8 * v135 + 6] = v135 ^ BaseAddress[70];
          v29 = v135;
          break;
        }
        RtlpDeCommitFreeBlock(BaseAddress);
      }
      else
      {
        RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v47, v51, v50, 0LL);
      }
    }
    v167 = v13;
    v6 = v132;
  }
  if ( v29 < *((_QWORD *)BaseAddress + 22) || v29 + *((_QWORD *)BaseAddress + 24) < *((_QWORD *)BaseAddress + 23) )
  {
    if ( v29 + *((_QWORD *)BaseAddress + 24) > *((_QWORD *)BaseAddress + 23) )
    {
      v59 = 256;
      if ( v29 >= 0x100 && BaseAddress[70] == v13[6] )
      {
        RtlpDeCommitFreeBlock(BaseAddress);
        updated = 0;
        goto LABEL_278;
      }
    }
    if ( v29 > 0xFF00 )
    {
      RtlpInsertFreeBlock(BaseAddress, v13);
      goto LABEL_237;
    }
    if ( v6 )
    {
      v60 = (unsigned __int16)v29;
      v137 = (unsigned __int16)v29;
      *((_BYTE *)v13 + 10) = 0;
      *((_BYTE *)v13 + 15) = 0;
      v61 = BaseAddress + 168;
      v62 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( v62 )
      {
        while ( 1 )
        {
          v63 = *((unsigned int *)v62 + 2);
          if ( (unsigned __int16)v29 < v63 )
          {
            v64 = (unsigned __int16)v29;
            v143 = (unsigned __int16)v29;
            goto LABEL_129;
          }
          if ( !*v62 )
            break;
          v62 = (__int64 *)*v62;
        }
        v64 = v63 - 1;
        v143 = (unsigned int)(v63 - 1);
        while ( 1 )
        {
LABEL_129:
          v65 = v64 - *((_DWORD *)v62 + 6);
          v66 = 0LL;
          v67 = 0LL;
          v68 = (_QWORD *)v62[4];
          v69 = (_QWORD *)v68[1];
          if ( v68 == v69 )
          {
            v67 = (_QWORD *)v62[4];
          }
          else
          {
            v70 = *((_DWORD *)v69 - 2);
            v162 = v70;
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v70 ^= *((_DWORD *)BaseAddress + 34);
              v162 = v70;
              if ( HIBYTE(v70) != ((unsigned __int8)v70 ^ (unsigned __int8)(BYTE1(v70) ^ BYTE2(v70))) )
              {
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)v69 - 16, 0, 0LL, 0LL);
                v60 = v137;
                v66 = 0LL;
              }
            }
            if ( (int)(v60 - (unsigned __int16)v70) <= 0 )
            {
              v71 = *v68 - 16LL;
              v72 = *(_DWORD *)(v71 + 8);
              v163 = v72;
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v72 ^= *((_DWORD *)BaseAddress + 34);
                v163 = v72;
                if ( HIBYTE(v72) != ((unsigned __int8)v72 ^ (unsigned __int8)(BYTE1(v72) ^ BYTE2(v72))) )
                {
                  RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v71, 0, 0LL, 0LL);
                  v60 = v137;
                }
              }
              if ( (int)(v60 - (unsigned __int16)v72) > 0 )
              {
                if ( *v62 || (_DWORD)v143 != *((_DWORD *)v62 + 2) - 1 )
                {
                  v75 = v65 >> 5;
                  v141 = v65 >> 5;
                  v76 = ((unsigned int)(*((_DWORD *)v62 + 2) - *((_DWORD *)v62 + 6)) >> 5) - 1;
                  v77 = (unsigned int *)(v62[5] + 4 * v75);
                  v154 = v77;
                  v78 = *v77 & (-1 << (v65 & 0x1F));
                  while ( !v78 )
                  {
                    if ( (unsigned int)v75 > v76 )
                    {
                      v13 = v167;
                      goto LABEL_170;
                    }
                    v154 = ++v77;
                    v78 = *v77;
                    LODWORD(v75) = v75 + 1;
                    v141 = v75;
                  }
                  if ( (_WORD)v78 )
                  {
                    if ( (_BYTE)v78 )
                      v79 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v78];
                    else
                      v79 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v78)] + 8;
                  }
                  else if ( (v78 & 0xFF0000) != 0 )
                  {
                    v79 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v78)] + 16;
                  }
                  else
                  {
                    v79 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v78 >> 24] + 24;
                  }
                  v80 = (unsigned int)(v79 + 32 * v75);
                  v141 = v80;
                  if ( *((_DWORD *)v62 + 3) )
                    v80 = (unsigned int)(2 * v80);
                  v67 = *(_QWORD **)(v62[6] + 8 * v80);
LABEL_165:
                  v60 = v137;
                }
                else
                {
                  v73 = 2 * v65;
                  if ( !*((_DWORD *)v62 + 3) )
                    v73 = v65;
                  v74 = *(_QWORD **)(v62[6] + 8 * v73);
                  while ( v68 != v74 )
                  {
                    LOBYTE(v66) = 1;
                    if ( (int)RtlpHeapListCompare(BaseAddress, v74, v60, v66) <= 0 )
                    {
                      v67 = v74;
                      goto LABEL_165;
                    }
                    v74 = (_QWORD *)*v74;
                    v60 = v137;
                  }
                }
              }
              else
              {
                v67 = (_QWORD *)*v68;
              }
            }
            else
            {
              v67 = v68;
            }
            v13 = v167;
          }
          if ( v67 )
            break;
LABEL_170:
          v62 = (__int64 *)*v62;
          v64 = *((_DWORD *)v62 + 6);
          v143 = v64;
          v60 = v137;
        }
        v61 = BaseAddress + 168;
      }
      else
      {
        v67 = (_QWORD *)*v61;
      }
      while ( v61 != v67 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v81 = *((_DWORD *)v67 - 2);
          v164 = v81;
          if ( (v81 & *((_DWORD *)BaseAddress + 31)) != 0 )
          {
            v164 = v81 ^ *((_DWORD *)BaseAddress + 34);
            LOWORD(v81) = v164;
          }
          v13 = v167;
        }
        else
        {
          LOWORD(v81) = *((_WORD *)v67 - 4);
        }
        v139 = v81;
        if ( v60 <= (unsigned __int16)v81 )
          break;
        v67 = (_QWORD *)*v67;
        v61 = BaseAddress + 168;
      }
      v82 = v13 + 8;
      v137 = (unsigned __int64)(v13 + 8);
      v83 = (__int64 *)v67[1];
      if ( (_QWORD *)*v83 == v67 )
      {
        *v82 = v67;
        *((_QWORD *)v13 + 3) = v83;
        *v83 = (__int64)v82;
        v67[1] = v82;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v67, 0, *v83, 0LL);
      }
      *((_QWORD *)BaseAddress + 24) += v13[4];
      v84 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( v84 )
      {
        v85 = v13[4];
        while ( 1 )
        {
          v86 = *((unsigned int *)v84 + 2);
          if ( v85 < v86 )
          {
            v155 = v13[4];
            v87 = v85;
            goto LABEL_190;
          }
          if ( !*v84 )
            break;
          v84 = (__int64 *)*v84;
        }
        v87 = v86 - 1;
        v155 = v87;
LABEL_190:
        v160 = v85;
        v88 = v87 - *((_DWORD *)v84 + 6);
        ++*((_DWORD *)v84 + 4);
        v89 = 2 * v88;
        if ( !*((_DWORD *)v84 + 3) )
          v89 = v88;
        v90 = *(_QWORD *)(v84[6] + 8 * v89);
        if ( v87 == *((_DWORD *)v84 + 2) - 1 )
          ++*((_DWORD *)v84 + 5);
        if ( !v90 )
          goto LABEL_199;
        v91 = *(_DWORD *)(v90 - 16 + 8);
        v165 = v91;
        v92 = v85;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v91 ^= *((_DWORD *)BaseAddress + 34);
          v165 = v91;
          if ( HIBYTE(v91) != ((unsigned __int8)v91 ^ (unsigned __int8)(BYTE1(v91) ^ BYTE2(v91))) )
          {
            RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v90 - 16, 0, 0LL, 0LL);
            v92 = v85;
          }
        }
        v93 = v92 - (unsigned __int16)v91;
        v13 = v167;
        if ( v93 <= 0 )
LABEL_199:
          *(_QWORD *)(v84[6] + 8 * v89) = v137;
        if ( !v90 )
          *(_DWORD *)(v84[5] + 4LL * (v88 >> 5)) |= 1 << (v88 & 0x1F);
      }
LABEL_202:
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *((_BYTE *)v13 + 11) = *((_BYTE *)v13 + 8) ^ *((_BYTE *)v13 + 9) ^ *((_BYTE *)v13 + 10);
        *((_DWORD *)v13 + 2) ^= *((_DWORD *)BaseAddress + 34);
      }
LABEL_237:
      if ( !updated )
      {
        v59 = 256;
        goto LABEL_278;
      }
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v107 = *((_DWORD *)v13 + 2) ^ *((_DWORD *)BaseAddress + 34);
        *((_DWORD *)v13 + 2) = v107;
        if ( HIBYTE(v107) != ((unsigned __int8)v107 ^ (unsigned __int8)(BYTE1(v107) ^ BYTE2(v107))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v13);
      }
      *((_BYTE *)v13 + 10) |= 2u;
      v108 = v13[4];
      v109 = &v13[8 * v108];
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *((_BYTE *)v13 + 11) = HIBYTE(v108) ^ v108 ^ *((_BYTE *)v13 + 10);
        *((_DWORD *)v13 + 2) ^= *((_DWORD *)BaseAddress + 34);
      }
      *(v109 - 2) = updated;
      *(v109 - 1) = 0;
      if ( (*((_DWORD *)BaseAddress + 28) & 0x8000000) != 0 )
      {
        *(v109 - 1) = RtlLogStackBackTraceEx(1LL);
        v59 = 256;
        goto LABEL_278;
      }
      goto LABEL_116;
    }
    v94 = (unsigned __int16)v29;
    *((_BYTE *)v13 + 10) &= 0xF0u;
    *((_BYTE *)v13 + 15) = 0;
    if ( (BaseAddress[56] & 0x40) == 0 )
    {
LABEL_213:
      v97 = BaseAddress + 168;
      if ( *((_QWORD *)BaseAddress + 39) )
        Entry = (_QWORD *)RtlpFindEntry(BaseAddress, v94);
      else
        Entry = (_QWORD *)*v97;
      while ( v97 != Entry )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v99 = *((_DWORD *)Entry - 2);
          v166 = v99;
          if ( (v99 & *((_DWORD *)BaseAddress + 31)) != 0 )
          {
            v100 = v99 ^ *((_DWORD *)BaseAddress + 34);
            v166 = v100;
          }
          else
          {
            LOWORD(v100) = v99;
          }
          v13 = v167;
        }
        else
        {
          LOWORD(v100) = *((_WORD *)Entry - 4);
        }
        v140 = v100;
        if ( v94 <= (unsigned __int16)v100 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v101 = v13 + 8;
      v102 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v102 == Entry )
      {
        *v101 = Entry;
        *((_QWORD *)v13 + 3) = v102;
        *v102 = (__int64)v101;
        Entry[1] = v101;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v102, 0LL);
      }
      *((_QWORD *)BaseAddress + 24) += v13[4];
      v103 = (__int64 **)*((_QWORD *)BaseAddress + 39);
      if ( v103 )
      {
        v104 = v13[4];
        while ( 1 )
        {
          v105 = *((unsigned int *)v103 + 2);
          if ( v104 < v105 )
          {
            v106 = v13[4];
            v157 = v13[4];
            goto LABEL_234;
          }
          if ( !*v103 )
            break;
          v103 = (__int64 **)*v103;
        }
        v106 = v105 - 1;
        v157 = (unsigned int)(v105 - 1);
LABEL_234:
        LOBYTE(Entry) = 1;
        RtlpHeapAddListEntry((_DWORD)BaseAddress, (_DWORD)v103, (_DWORD)Entry, (_DWORD)v13 + 16, v106, v104);
      }
      goto LABEL_202;
    }
    v95 = v13 + 16;
    v156 = v13 + 16;
    v96 = (16 * (unsigned __int64)(unsigned int)v94 - 32) >> 2;
    v145 = v96;
    if ( v96 )
    {
      if ( ((unsigned __int8)v95 & 4) == 0 )
        goto LABEL_210;
      *v95 = -17891602;
      v145 = --v96;
      if ( v96 )
      {
        v95 = v13 + 18;
        v156 = v13 + 18;
LABEL_210:
        memset64(v95, 0xFEEEFEEEFEEEFEEEuLL, v96 >> 1);
        if ( (v96 & 1) != 0 )
          v95[v96 - 1] = -17891602;
      }
    }
    *((_BYTE *)v13 + 10) |= 4u;
    goto LABEL_213;
  }
  RtlpDeCommitFreeBlock(BaseAddress);
LABEL_116:
  v59 = 256;
LABEL_278:
  if ( v131 )
  {
    if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) == 0 )
    {
      ++*((_DWORD *)BaseAddress + 160);
      v121 = *((_DWORD *)BaseAddress + 162);
      if ( *((_DWORD *)BaseAddress + 160) > v121 )
      {
        *((_DWORD *)BaseAddress + 160) = 0;
        v122 = *((_QWORD *)BaseAddress + 72) - 16LL * *((_QWORD *)BaseAddress + 24);
        if ( v122 > *((_QWORD *)BaseAddress + 84) )
          *((_QWORD *)BaseAddress + 84) = v122;
        *((_QWORD *)BaseAddress + 85) = v122;
      }
      if ( ++*((_DWORD *)BaseAddress + 163) >= 0x1000u )
      {
        if ( *((_BYTE *)BaseAddress + 418) != 2 || *((_DWORD *)BaseAddress + 164) <= 0x10u )
          v59 = 16;
        if ( *((_DWORD *)BaseAddress + 161) > v59 && v121 < 0x10000 )
          *((_DWORD *)BaseAddress + 162) = 2 * v121;
        *((_DWORD *)BaseAddress + 161) = 0;
        *((_DWORD *)BaseAddress + 163) = 0;
      }
    }
    v123 = *((_QWORD *)BaseAddress + 44);
    v26 = (*(_DWORD *)(v123 + 12))-- == 1;
    if ( v26 )
    {
      *(_QWORD *)(v123 + 16) = 0LL;
      v124 = _InterlockedCompareExchange((volatile signed __int32 *)(v123 + 8), -1, -2);
      if ( v124 != -2 )
      {
        if ( (*(_BYTE *)(v123 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v123);
        DeferredCriticalSectionEvent = *(void **)(v123 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v123);
        do
        {
          v126 = v124 & 2 | 1;
          v127 = _InterlockedCompareExchange((volatile signed __int32 *)(v123 + 8), v124 + v126, v124);
          v26 = v124 == v127;
          v124 = v127;
        }
        while ( !v26 );
        if ( (v126 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (void *)-1LL )
          {
            _InterlockedOr(v129, 0);
            RtlpWakeByAddress(v123 + 8, 0LL);
          }
          else
          {
            v128 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
            if ( v128 < 0 )
              RtlRaiseStatus(v128);
          }
        }
      }
    }
  }
  return v142;
}
