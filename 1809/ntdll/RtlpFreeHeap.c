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
 *     RtlpUpdateHeapRates @ 0x18007F5DC (RtlpUpdateHeapRates.c)
 *     RtlpUpdateHeapWatermarks @ 0x180088C34 (RtlpUpdateHeapWatermarks.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     ZwSetEvent @ 0x1800A04A0 (ZwSetEvent.c)
 *     RtlCompareMemoryUlong @ 0x1800A4AE0 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E9920 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x1800F3FEC (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x180103E70 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x180105BF0 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x180105E78 (RtlpLogHeapFreeEvent.c)
 *     RtlDebugFreeHeap @ 0x180107BB4 (RtlDebugFreeHeap.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpFreeHeap(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v6; // r12
  int v8; // edi
  __int64 v9; // r8
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rsi
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
  __int64 v31; // rdi
  int v32; // edx
  __int64 v33; // r10
  __int64 v34; // r14
  __int64 *v35; // r15
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // r14
  int v44; // edx
  char v45; // al
  unsigned __int64 v46; // rsi
  __int64 v47; // r14
  __int64 v48; // r8
  __int64 v49; // r15
  __int64 *v50; // r12
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rdx
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r9
  char v58; // al
  unsigned __int64 v59; // rdi
  __int64 v60; // r15
  unsigned int v61; // r14d
  unsigned __int64 v62; // rdx
  _QWORD *v63; // rax
  __int64 *v64; // r13
  unsigned __int64 v65; // rcx
  unsigned int v66; // r15d
  unsigned int v67; // r15d
  __int64 v68; // r9
  _QWORD *v69; // r14
  _QWORD *v70; // r12
  _QWORD *v71; // rax
  int v72; // edi
  __int64 v73; // r8
  int v74; // edi
  __int64 v75; // rcx
  _QWORD *v76; // rdi
  __int64 v77; // rdi
  unsigned int v78; // r9d
  unsigned int *v79; // r8
  unsigned int v80; // edx
  int v81; // ecx
  __int64 v82; // rdi
  int v83; // ecx
  _QWORD *v84; // rcx
  __int64 *v85; // rax
  __int64 *v86; // rdi
  unsigned __int64 v87; // r14
  unsigned __int64 v88; // rcx
  unsigned int v89; // ecx
  unsigned int v90; // r15d
  __int64 v91; // r12
  __int64 v92; // r13
  int v93; // esi
  int v94; // ecx
  int v95; // ecx
  unsigned __int64 v96; // r14
  _DWORD *v97; // r8
  unsigned __int64 v98; // rdx
  _QWORD *v99; // rdi
  _QWORD *Entry; // r8
  int v101; // ecx
  int v102; // eax
  _QWORD *v103; // r14
  __int64 *v104; // rax
  __int64 **v105; // rdx
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rdi
  int v108; // eax
  int v109; // edx
  unsigned __int16 v110; // cx
  __int64 v111; // rdi
  unsigned __int64 v112; // rsi
  __int64 v113; // rax
  __int64 *v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // r9
  __int64 v117; // r8
  __int64 v118; // rdi
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rdi
  __int64 v122; // rcx
  unsigned int v123; // edx
  unsigned __int64 v124; // rcx
  __int64 v125; // rsi
  signed __int32 v126; // edi
  __int64 DeferredCriticalSectionEvent; // r8
  int v128; // edx
  signed __int32 v129; // eax
  int v130; // eax
  signed __int32 v131[8]; // [rsp+0h] [rbp-198h] BYREF
  __int64 v132; // [rsp+20h] [rbp-178h]
  char v133; // [rsp+40h] [rbp-158h]
  char v134; // [rsp+41h] [rbp-157h]
  __int16 updated; // [rsp+44h] [rbp-154h]
  char v136; // [rsp+48h] [rbp-150h]
  unsigned __int64 v137; // [rsp+50h] [rbp-148h] BYREF
  _QWORD *v138; // [rsp+58h] [rbp-140h]
  unsigned __int64 v139; // [rsp+60h] [rbp-138h]
  unsigned __int8 v140; // [rsp+68h] [rbp-130h]
  __int16 v141; // [rsp+6Ah] [rbp-12Eh]
  __int16 v142; // [rsp+6Ch] [rbp-12Ch]
  unsigned int v143; // [rsp+70h] [rbp-128h]
  unsigned int v144; // [rsp+74h] [rbp-124h]
  __int64 v145; // [rsp+78h] [rbp-120h]
  unsigned __int64 v146; // [rsp+80h] [rbp-118h] BYREF
  unsigned __int64 v147; // [rsp+88h] [rbp-110h]
  __int64 v148; // [rsp+90h] [rbp-108h]
  unsigned int v149; // [rsp+98h] [rbp-100h]
  unsigned int NtGlobalFlag; // [rsp+9Ch] [rbp-FCh]
  __int64 v151; // [rsp+A0h] [rbp-F8h]
  unsigned __int64 v152; // [rsp+A8h] [rbp-F0h]
  __int64 v153; // [rsp+B0h] [rbp-E8h]
  __int64 v154; // [rsp+C8h] [rbp-D0h]
  unsigned __int64 v155; // [rsp+D0h] [rbp-C8h]
  unsigned int *v156; // [rsp+D8h] [rbp-C0h]
  __int64 v157; // [rsp+E0h] [rbp-B8h]
  __int64 v158; // [rsp+E8h] [rbp-B0h]
  __int64 v159; // [rsp+F0h] [rbp-A8h]
  __int64 v160; // [rsp+F8h] [rbp-A0h]
  struct _TEB *v161; // [rsp+100h] [rbp-98h]
  unsigned __int64 v162; // [rsp+108h] [rbp-90h]
  int v163; // [rsp+118h] [rbp-80h]
  int v164; // [rsp+128h] [rbp-70h]
  int v165; // [rsp+138h] [rbp-60h]
  int v166; // [rsp+148h] [rbp-50h]
  int v167; // [rsp+158h] [rbp-40h]
  int v168; // [rsp+168h] [rbp-30h]
  __int64 v169; // [rsp+1B0h] [rbp+18h]

  v169 = a3;
  v6 = 1;
  v134 = 1;
  v133 = 0;
  v144 = 1;
  v146 = 0LL;
  updated = 0;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x7D010F60) != 0 )
  {
    v6 = 0;
    v134 = 0;
    v9 = 4LL;
    if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
      return RtlDebugFreeHeap((void *)a1);
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
    v13 = v169;
    if ( ((*(_BYTE *)(v169 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
      RtlpLogHeapFreeEvent(a1, a4, v9);
  }
  else
  {
    v13 = v169;
  }
  if ( (v8 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v20 = *(_DWORD *)(v13 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v13 + 8) = v20;
      if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
        RtlpAnalyzeHeapFailure(a1, v13);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 352);
    v15 = NtCurrentTeb();
    v16 = _interlockedbittestandreset((volatile signed __int32 *)(v14 + 8), 0);
    UniqueThread = v15->ClientId.UniqueThread;
    if ( v16 )
    {
      *(_QWORD *)(v14 + 16) = UniqueThread;
      *(_DWORD *)(v14 + 12) = 1;
      ++*(_DWORD *)(a1 + 616);
    }
    else if ( *(void **)(v14 + 16) == UniqueThread )
    {
      ++*(_DWORD *)(v14 + 12);
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_180165408 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v161 = NtCurrentTeb();
        v161->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        v144 = 0;
LABEL_277:
        v61 = 256;
        goto LABEL_278;
      }
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1LL);
    }
    v133 = 1;
    v13 = v169;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v18 = *(_DWORD *)(v169 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v169 + 8) = v18;
      if ( HIBYTE(v18) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE1(v18) ^ BYTE2(v18))) )
        RtlpAnalyzeHeapFailure(a1, v169);
    }
    v19 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(v169 + 8) < (unsigned __int64)*((unsigned int *)v19 + 2) )
        break;
      v19 = (__int64 **)*v19;
    }
    while ( v19 );
  }
  v21 = (_BYTE *)(v13 + 10);
  v22 = *(_BYTE *)(v13 + 10);
  if ( (v22 & 8) != 0 )
    *v21 = v22 & 0xF7;
  if ( *(_BYTE *)(v13 + 15) == 4 )
  {
    v112 = v13 - 48;
    v138 = (_QWORD *)v112;
    v148 = *(_QWORD *)(v112 + 32);
    v146 = v112 & 0xFFFFFFFFFFFF0000uLL;
    *(_QWORD *)(a1 + 592) -= v148;
    v113 = *(_QWORD *)v112;
    v114 = *(__int64 **)(v112 + 8);
    v115 = *v114;
    v116 = *(_QWORD *)(*(_QWORD *)v112 + 8LL);
    if ( *v114 == v116 && v115 == v112 )
    {
      *v114 = v113;
      *(_QWORD *)(v113 + 8) = v114;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, v112, v116, v115, 0LL);
    }
    if ( !v6 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v117 = *(_QWORD *)(v112 + 32) >> 4;
        v112 = (unsigned __int64)v138;
        RtlpUpdateTagEntry(a1, *((unsigned __int16 *)v138 + 9), v117, 0, 3);
      }
      else
      {
        v112 = (unsigned __int64)v138;
      }
    }
    if ( v133 )
    {
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v133 = 0;
    }
    v118 = *(_QWORD *)(v112 + 40);
    v160 = v118;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v119 = (__int64)NtCurrentPeb()->SharedData + 558;
      LODWORD(v112) = (_DWORD)v138;
      v118 = v160;
    }
    else
    {
      v119 = 2147353480LL;
    }
    if ( *(_BYTE *)v119 )
      RtlpHeapLogRangeRelease(a1, v146, v118);
    v137 = 0LL;
    RtlpSecMemFreeVirtualMemory(v119, &v146, &v137, 0x8000LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v120 = (__int64)NtCurrentPeb()->SharedData + 550;
      LODWORD(v112) = (_DWORD)v138;
    }
    else
    {
      v120 = 2147353472LL;
    }
    if ( *(_BYTE *)v120 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v12 = (__int64)NtCurrentPeb()->SharedData + 550;
        LODWORD(v112) = (_DWORD)v138;
        RtlpLogHeapContractEvent(a1, (_DWORD)v138, v148, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v12);
      }
      else
      {
        LODWORD(v112) = (_DWORD)v138;
      }
    }
    v121 = 2147353482LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v122 = (__int64)NtCurrentPeb()->SharedData + 560;
      LODWORD(v112) = (_DWORD)v138;
    }
    else
    {
      v122 = 2147353482LL;
    }
    if ( *(_BYTE *)v122 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v121 = (__int64)NtCurrentPeb()->SharedData + 560;
        LODWORD(v112) = (_DWORD)v138;
      }
      RtlpLogHeapContractEvent(a1, v112, v148, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v121);
    }
    goto LABEL_277;
  }
  v23 = (unsigned __int16 *)(v13 + 8);
  v24 = *(_WORD *)(v13 + 8);
  if ( v24 < *(_WORD *)(a1 + 432) )
  {
    if ( ((unsigned __int8)(1 << (v24 & 7)) & *(_BYTE *)(((unsigned __int64)v24 >> 3) + a1 + 434)) == 0 )
    {
      v25 = (_WORD *)(*(_QWORD *)(a1 + 424) + 2LL * *v23);
      if ( *v25 > 1u )
        --*v25;
    }
    v13 = v169;
  }
  if ( !v6 )
  {
    v149 = NtCurrentPeb()->NtGlobalFlag;
    v13 = v169;
    if ( (v149 & 0x800) != 0 )
    {
      LODWORD(v132) = 2;
      v26 = (*v21 & 2) == 0;
      v27 = *(unsigned __int16 *)(a3 + 8);
      if ( v26 )
      {
        v140 = *(_BYTE *)(v169 + 11);
        v28 = v140;
      }
      else
      {
        v28 = *(unsigned __int16 *)(v169 + 16LL * *(unsigned __int16 *)(a3 + 8) - 14);
      }
      updated = RtlpUpdateTagEntry(a1, v28, v27, 0, v132);
    }
  }
  v29 = *v23;
  v137 = v29;
  if ( *(char *)(a1 + 112) >= 0 )
  {
    v136 = 0;
    v153 = v13;
    v30 = 16 * (*(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140));
    v31 = v13 - v30;
    if ( v13 - v30 != v13
      && ((*(_BYTE *)(v31 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v32 = *(_DWORD *)(v31 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v31 + 8) = v32;
        if ( HIBYTE(v32) != ((unsigned __int8)v32 ^ (unsigned __int8)(BYTE1(v32) ^ BYTE2(v32))) )
          RtlpAnalyzeHeapFailure(a1, v31);
      }
      v33 = v31 + 16;
      v34 = *(_QWORD *)(v31 + 16);
      v35 = *(__int64 **)(v31 + 24);
      v36 = *v35;
      v37 = *(_QWORD *)(v34 + 8);
      if ( *v35 == v37 && v36 == v33 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v31 + 8);
        v38 = *(_QWORD *)(a1 + 312);
        if ( v38 )
        {
          v39 = *(unsigned __int16 *)(v31 + 8);
          while ( 1 )
          {
            v40 = *(unsigned int *)(v38 + 8);
            if ( v39 < v40 )
            {
              v41 = *(unsigned __int16 *)(v31 + 8);
              goto LABEL_63;
            }
            if ( !*(_QWORD *)v38 )
              break;
            v38 = *(_QWORD *)v38;
          }
          v41 = (unsigned int)(v40 - 1);
LABEL_63:
          v151 = v41;
          RtlpHeapRemoveListEntry(a1, v38, 1, (__int64 *)(v31 + 16), v41, v39);
        }
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
        if ( (*(_BYTE *)(v31 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v31) )
        {
          v45 = *(_BYTE *)(v31 + 10);
          if ( (v45 & 4) != 0 )
          {
            v46 = 16LL * *(unsigned __int16 *)(v31 + 8) - 32;
            v152 = v46;
            if ( (v45 & 2) != 0 && v46 > 4 )
            {
              v46 -= 4LL;
              v152 = v46;
            }
            v47 = RtlCompareMemoryUlong(v31 + 32, v46, 4277075694LL);
            if ( v47 != v46 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v31,
                (const void *)(v47 + v31 + 32));
              RtlpBreakPointHeap();
            }
          }
          *(_BYTE *)(v31 + 10) = 0;
          *(_BYTE *)(v31 + 15) = 0;
          v13 = v31;
          v153 = v31;
          v137 += *(unsigned __int16 *)(v31 + 8);
          *(_WORD *)(v31 + 8) = v137;
          *(_WORD *)(v31 + 16 * v137 + 12) = v137 ^ *(_WORD *)(a1 + 140);
        }
        else
        {
          LOBYTE(v42) = 1;
          RtlpDeCommitFreeBlock(a1, v31, *(unsigned __int16 *)(v31 + 8), v42);
        }
        v29 = v137;
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v33, v37, v36, 0LL);
        v29 = v137;
      }
    }
    v43 = v13 + 16 * v29;
    if ( !*(_DWORD *)(a1 + 124) )
      goto LABEL_72;
    v163 = *(_DWORD *)(v43 + 8) ^ *(_DWORD *)(a1 + 136);
    if ( HIBYTE(v163) != ((unsigned __int8)v163 ^ (unsigned __int8)(BYTE1(v163) ^ BYTE2(v163))) )
      RtlpLogHeapFailure(3, a1, v13 + 16 * v29, 0, 0LL, 0LL);
    while ( 1 )
    {
      v29 = v137;
LABEL_72:
      if ( ((*(_BYTE *)(v43 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
        break;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v44 = *(_DWORD *)(v43 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v43 + 8) = v44;
        if ( HIBYTE(v44) != ((unsigned __int8)v44 ^ (unsigned __int8)(BYTE1(v44) ^ BYTE2(v44))) )
          RtlpAnalyzeHeapFailure(a1, v43);
      }
      v48 = v43 + 16;
      v49 = *(_QWORD *)(v43 + 16);
      v50 = *(__int64 **)(v43 + 24);
      v51 = *v50;
      v52 = *(_QWORD *)(v49 + 8);
      if ( *v50 == v52 && v51 == v48 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v43 + 8);
        v53 = *(_QWORD *)(a1 + 312);
        if ( v53 )
        {
          v54 = *(unsigned __int16 *)(v43 + 8);
          while ( 1 )
          {
            v55 = *(unsigned int *)(v53 + 8);
            if ( v54 < v55 )
            {
              v56 = *(unsigned __int16 *)(v43 + 8);
              goto LABEL_97;
            }
            if ( !*(_QWORD *)v53 )
              break;
            v53 = *(_QWORD *)v53;
          }
          v56 = (unsigned int)(v55 - 1);
LABEL_97:
          v154 = v56;
          RtlpHeapRemoveListEntry(a1, v53, 1, (__int64 *)(v43 + 16), v56, v54);
        }
        *v50 = v49;
        *(_QWORD *)(v49 + 8) = v50;
        if ( (*(_BYTE *)(v43 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v43) )
        {
          v58 = *(_BYTE *)(v43 + 10);
          if ( (v58 & 4) != 0 )
          {
            v59 = 16LL * *(unsigned __int16 *)(v43 + 8) - 32;
            v155 = v59;
            if ( (v58 & 2) != 0 && v59 > 4 )
            {
              v59 -= 4LL;
              v155 = v59;
            }
            v60 = RtlCompareMemoryUlong(v43 + 32, v59, 4277075694LL);
            if ( v60 != v59 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v43,
                (const void *)(v60 + v43 + 32));
              RtlpBreakPointHeap();
            }
          }
          *(_BYTE *)(v13 + 10) = 0;
          *(_BYTE *)(v13 + 15) = 0;
          v137 += *(unsigned __int16 *)(v43 + 8);
          *(_WORD *)(v13 + 8) = v137;
          *(_WORD *)(v13 + 16 * v137 + 12) = v137 ^ *(_WORD *)(a1 + 140);
          v29 = v137;
          break;
        }
        LOBYTE(v57) = 1;
        RtlpDeCommitFreeBlock(a1, v43, *(unsigned __int16 *)(v43 + 8), v57);
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v48, v52, v51, 0LL);
      }
    }
    v169 = v13;
    v6 = v134;
  }
  if ( v29 < *(_QWORD *)(a1 + 176) || v29 + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( v29 + *(_QWORD *)(a1 + 192) > *(_QWORD *)(a1 + 184) )
    {
      v61 = 256;
      if ( v29 >= 0x100 && *(_WORD *)(a1 + 140) == *(_WORD *)(v13 + 12) )
      {
        RtlpDeCommitFreeBlock(a1, v13, v29, 0LL);
        updated = 0;
        goto LABEL_278;
      }
    }
    if ( v29 > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v13);
      goto LABEL_237;
    }
    if ( v6 )
    {
      v62 = (unsigned __int16)v29;
      v139 = (unsigned __int16)v29;
      *(_BYTE *)(v13 + 10) = 0;
      *(_BYTE *)(v13 + 15) = 0;
      v63 = (_QWORD *)(a1 + 336);
      v64 = *(__int64 **)(a1 + 312);
      if ( v64 )
      {
        while ( 1 )
        {
          v65 = *((unsigned int *)v64 + 2);
          if ( (unsigned __int16)v29 < v65 )
          {
            v66 = (unsigned __int16)v29;
            v145 = (unsigned __int16)v29;
            goto LABEL_129;
          }
          if ( !*v64 )
            break;
          v64 = (__int64 *)*v64;
        }
        v66 = v65 - 1;
        v145 = (unsigned int)(v65 - 1);
        while ( 1 )
        {
LABEL_129:
          v67 = v66 - *((_DWORD *)v64 + 6);
          v68 = 0LL;
          v69 = 0LL;
          v70 = (_QWORD *)v64[4];
          v71 = (_QWORD *)v70[1];
          if ( v70 == v71 )
          {
            v69 = (_QWORD *)v64[4];
          }
          else
          {
            v72 = *((_DWORD *)v71 - 2);
            v164 = v72;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v72 ^= *(_DWORD *)(a1 + 136);
              v164 = v72;
              if ( HIBYTE(v72) != ((unsigned __int8)v72 ^ (unsigned __int8)(BYTE1(v72) ^ BYTE2(v72))) )
              {
                RtlpLogHeapFailure(3, a1, (_DWORD)v71 - 16, 0, 0LL, 0LL);
                v62 = v139;
                v68 = 0LL;
              }
            }
            if ( (int)(v62 - (unsigned __int16)v72) <= 0 )
            {
              v73 = *v70 - 16LL;
              v74 = *(_DWORD *)(v73 + 8);
              v165 = v74;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v74 ^= *(_DWORD *)(a1 + 136);
                v165 = v74;
                if ( HIBYTE(v74) != ((unsigned __int8)v74 ^ (unsigned __int8)(BYTE1(v74) ^ BYTE2(v74))) )
                {
                  RtlpLogHeapFailure(3, a1, v73, 0, 0LL, 0LL);
                  v62 = v139;
                }
              }
              if ( (int)(v62 - (unsigned __int16)v74) > 0 )
              {
                if ( *v64 || (_DWORD)v145 != *((_DWORD *)v64 + 2) - 1 )
                {
                  v77 = v67 >> 5;
                  v143 = v67 >> 5;
                  v78 = ((unsigned int)(*((_DWORD *)v64 + 2) - *((_DWORD *)v64 + 6)) >> 5) - 1;
                  v79 = (unsigned int *)(v64[5] + 4 * v77);
                  v156 = v79;
                  v80 = *v79 & (-1 << (v67 & 0x1F));
                  while ( !v80 )
                  {
                    if ( (unsigned int)v77 > v78 )
                    {
                      v13 = v169;
                      goto LABEL_170;
                    }
                    v156 = ++v79;
                    v80 = *v79;
                    LODWORD(v77) = v77 + 1;
                    v143 = v77;
                  }
                  if ( (_WORD)v80 )
                  {
                    if ( (_BYTE)v80 )
                      v81 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v80];
                    else
                      v81 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v80)] + 8;
                  }
                  else if ( (v80 & 0xFF0000) != 0 )
                  {
                    v81 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v80)] + 16;
                  }
                  else
                  {
                    v81 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v80 >> 24] + 24;
                  }
                  v82 = (unsigned int)(v81 + 32 * v77);
                  v143 = v82;
                  if ( *((_DWORD *)v64 + 3) )
                    v82 = (unsigned int)(2 * v82);
                  v69 = *(_QWORD **)(v64[6] + 8 * v82);
LABEL_165:
                  v62 = v139;
                }
                else
                {
                  v75 = 2 * v67;
                  if ( !*((_DWORD *)v64 + 3) )
                    v75 = v67;
                  v76 = *(_QWORD **)(v64[6] + 8 * v75);
                  while ( v70 != v76 )
                  {
                    LOBYTE(v68) = 1;
                    if ( (int)RtlpHeapListCompare(a1, v76, v62, v68) <= 0 )
                    {
                      v69 = v76;
                      goto LABEL_165;
                    }
                    v76 = (_QWORD *)*v76;
                    v62 = v139;
                  }
                }
              }
              else
              {
                v69 = (_QWORD *)*v70;
              }
            }
            else
            {
              v69 = v70;
            }
            v13 = v169;
          }
          if ( v69 )
            break;
LABEL_170:
          v64 = (__int64 *)*v64;
          v66 = *((_DWORD *)v64 + 6);
          v145 = v66;
          v62 = v139;
        }
        v63 = (_QWORD *)(a1 + 336);
      }
      else
      {
        v69 = (_QWORD *)*v63;
      }
      while ( v63 != v69 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v83 = *((_DWORD *)v69 - 2);
          v166 = v83;
          if ( (v83 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v166 = v83 ^ *(_DWORD *)(a1 + 136);
            LOWORD(v83) = v166;
          }
          v13 = v169;
        }
        else
        {
          LOWORD(v83) = *((_WORD *)v69 - 4);
        }
        v141 = v83;
        if ( v62 <= (unsigned __int16)v83 )
          break;
        v69 = (_QWORD *)*v69;
        v63 = (_QWORD *)(a1 + 336);
      }
      v84 = (_QWORD *)(v13 + 16);
      v139 = v13 + 16;
      v85 = (__int64 *)v69[1];
      if ( (_QWORD *)*v85 == v69 )
      {
        *v84 = v69;
        *(_QWORD *)(v13 + 24) = v85;
        *v85 = (__int64)v84;
        v69[1] = v84;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v69, 0, *v85, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v13 + 8);
      v86 = *(__int64 **)(a1 + 312);
      if ( v86 )
      {
        v87 = *(unsigned __int16 *)(v13 + 8);
        while ( 1 )
        {
          v88 = *((unsigned int *)v86 + 2);
          if ( v87 < v88 )
          {
            v157 = *(unsigned __int16 *)(v13 + 8);
            v89 = v87;
            goto LABEL_190;
          }
          if ( !*v86 )
            break;
          v86 = (__int64 *)*v86;
        }
        v89 = v88 - 1;
        v157 = v89;
LABEL_190:
        v162 = v87;
        v90 = v89 - *((_DWORD *)v86 + 6);
        ++*((_DWORD *)v86 + 4);
        v91 = 2 * v90;
        if ( !*((_DWORD *)v86 + 3) )
          v91 = v90;
        v92 = *(_QWORD *)(v86[6] + 8 * v91);
        if ( v89 == *((_DWORD *)v86 + 2) - 1 )
          ++*((_DWORD *)v86 + 5);
        if ( !v92 )
          goto LABEL_199;
        v93 = *(_DWORD *)(v92 - 16 + 8);
        v167 = v93;
        v94 = v87;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v93 ^= *(_DWORD *)(a1 + 136);
          v167 = v93;
          if ( HIBYTE(v93) != ((unsigned __int8)v93 ^ (unsigned __int8)(BYTE1(v93) ^ BYTE2(v93))) )
          {
            RtlpLogHeapFailure(3, a1, v92 - 16, 0, 0LL, 0LL);
            v94 = v87;
          }
        }
        v95 = v94 - (unsigned __int16)v93;
        v13 = v169;
        if ( v95 <= 0 )
LABEL_199:
          *(_QWORD *)(v86[6] + 8 * v91) = v139;
        if ( !v92 )
          *(_DWORD *)(v86[5] + 4LL * (v90 >> 5)) |= 1 << (v90 & 0x1F);
      }
LABEL_202:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
      }
LABEL_237:
      if ( !updated )
      {
        v61 = 256;
        goto LABEL_278;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        v109 = *(_DWORD *)(v13 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v13 + 8) = v109;
        if ( HIBYTE(v109) != ((unsigned __int8)v109 ^ (unsigned __int8)(BYTE1(v109) ^ BYTE2(v109))) )
          RtlpAnalyzeHeapFailure(a1, v13);
      }
      *(_BYTE *)(v13 + 10) |= 2u;
      v110 = *(_WORD *)(v13 + 8);
      v111 = 16LL * v110 + v13;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v13 + 11) = HIBYTE(v110) ^ v110 ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      *(_WORD *)(v111 - 4) = updated;
      *(_WORD *)(v111 - 2) = 0;
      if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
      {
        *(_WORD *)(v111 - 2) = RtlLogStackBackTraceEx(1LL);
        v61 = 256;
        goto LABEL_278;
      }
      goto LABEL_116;
    }
    v96 = (unsigned __int16)v29;
    *(_BYTE *)(v13 + 10) &= 0xF0u;
    *(_BYTE *)(v13 + 15) = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_213:
      v99 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v96);
      else
        Entry = (_QWORD *)*v99;
      while ( v99 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v101 = *((_DWORD *)Entry - 2);
          v168 = v101;
          if ( (v101 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v102 = v101 ^ *(_DWORD *)(a1 + 136);
            v168 = v102;
          }
          else
          {
            LOWORD(v102) = v101;
          }
          v13 = v169;
        }
        else
        {
          LOWORD(v102) = *((_WORD *)Entry - 4);
        }
        v142 = v102;
        if ( v96 <= (unsigned __int16)v102 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v103 = (_QWORD *)(v13 + 16);
      v104 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v104 == Entry )
      {
        *v103 = Entry;
        *(_QWORD *)(v13 + 24) = v104;
        *v104 = (__int64)v103;
        Entry[1] = v103;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v104, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v13 + 8);
      v105 = *(__int64 ***)(a1 + 312);
      if ( v105 )
      {
        v106 = *(unsigned __int16 *)(v13 + 8);
        while ( 1 )
        {
          v107 = *((unsigned int *)v105 + 2);
          if ( v106 < v107 )
          {
            v108 = *(unsigned __int16 *)(v13 + 8);
            v159 = *(unsigned __int16 *)(v13 + 8);
            goto LABEL_234;
          }
          if ( !*v105 )
            break;
          v105 = (__int64 **)*v105;
        }
        v108 = v107 - 1;
        v159 = (unsigned int)(v107 - 1);
LABEL_234:
        LOBYTE(Entry) = 1;
        RtlpHeapAddListEntry(a1, (_DWORD)v105, (_DWORD)Entry, v13 + 16, v108, v106);
      }
      goto LABEL_202;
    }
    v97 = (_DWORD *)(v13 + 32);
    v158 = v13 + 32;
    v98 = (16 * (unsigned __int64)(unsigned int)v96 - 32) >> 2;
    v147 = v98;
    if ( v98 )
    {
      if ( ((unsigned __int8)v97 & 4) == 0 )
        goto LABEL_210;
      *v97 = -17891602;
      v147 = --v98;
      if ( v98 )
      {
        v97 = (_DWORD *)(v13 + 36);
        v158 = v13 + 36;
LABEL_210:
        memset64(v97, 0xFEEEFEEEFEEEFEEEuLL, v98 >> 1);
        if ( (v98 & 1) != 0 )
          v97[v98 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v13 + 10) |= 4u;
    goto LABEL_213;
  }
  RtlpDeCommitFreeBlock(a1, v13, v29, 0LL);
LABEL_116:
  v61 = 256;
LABEL_278:
  if ( v133 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      ++*(_DWORD *)(a1 + 640);
      v123 = *(_DWORD *)(a1 + 648);
      if ( *(_DWORD *)(a1 + 640) > v123 )
      {
        *(_DWORD *)(a1 + 640) = 0;
        v124 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v124 > *(_QWORD *)(a1 + 672) )
          *(_QWORD *)(a1 + 672) = v124;
        *(_QWORD *)(a1 + 680) = v124;
      }
      if ( ++*(_DWORD *)(a1 + 652) >= 0x1000u )
      {
        if ( *(_BYTE *)(a1 + 418) != 2 || *(_DWORD *)(a1 + 656) <= 0x10u )
          v61 = 16;
        if ( *(_DWORD *)(a1 + 644) > v61 && v123 < 0x10000 )
          *(_DWORD *)(a1 + 648) = 2 * v123;
        *(_DWORD *)(a1 + 644) = 0;
        *(_DWORD *)(a1 + 652) = 0;
      }
    }
    v125 = *(_QWORD *)(a1 + 352);
    v26 = (*(_DWORD *)(v125 + 12))-- == 1;
    if ( v26 )
    {
      *(_QWORD *)(v125 + 16) = 0LL;
      v126 = _InterlockedCompareExchange((volatile signed __int32 *)(v125 + 8), -1, -2);
      if ( v126 != -2 )
      {
        if ( (*(_BYTE *)(v125 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v125);
        DeferredCriticalSectionEvent = *(_QWORD *)(v125 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v125);
        do
        {
          v128 = v126 & 2 | 1;
          v129 = _InterlockedCompareExchange((volatile signed __int32 *)(v125 + 8), v126 + v128, v126);
          v26 = v126 == v129;
          v126 = v129;
        }
        while ( !v26 );
        if ( (v128 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == -1 )
          {
            _InterlockedOr(v131, 0);
            RtlpWakeByAddress(v125 + 8, 0LL);
          }
          else
          {
            v130 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
            if ( v130 < 0 )
              RtlRaiseStatus((unsigned int)v130);
          }
        }
      }
    }
  }
  return v144;
}
