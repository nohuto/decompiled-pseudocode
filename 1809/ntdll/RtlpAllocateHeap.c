/*
 * XREFs of RtlpAllocateHeap @ 0x180011AF0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000E9A4 (RtlpHeapGenerateRandomValue32.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlpHeapRemoveListEntry @ 0x1800141C0 (RtlpHeapRemoveListEntry.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18001C380 (RtlpInsertFreeBlock.c)
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlpFindEntry @ 0x18001D898 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x18002070C (RtlpHeapAddListEntry.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18005B1FC (RtlpGetExtraStuffPointer.c)
 *     RtlpGetLFHContext @ 0x18005F090 (RtlpGetLFHContext.c)
 *     RtlpGetHeapProtection @ 0x180060908 (RtlpGetHeapProtection.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180060BEC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlLogStackBackTraceEx @ 0x180061BC0 (RtlLogStackBackTraceEx.c)
 *     RtlpPerformHeapMaintenance @ 0x180062DE4 (RtlpPerformHeapMaintenance.c)
 *     RtlpUpdateHeapRates @ 0x18007F5DC (RtlpUpdateHeapRates.c)
 *     RtlpUpdateHeapWatermarks @ 0x180088C34 (RtlpUpdateHeapWatermarks.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1800A4AE0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800F3FEC (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x180103F14 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180105B44 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180105DCC (RtlpLogHeapExtendEvent.c)
 *     RtlDebugAllocateHeap @ 0x1801071A0 (RtlDebugAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpAllocateHeap(
        char *Src,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 **a5,
        _DWORD *a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v7; // r13
  unsigned int v8; // r14d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r12
  __int64 v12; // rcx
  struct _TEB *v13; // rax
  signed __int8 v14; // cf
  void *UniqueThread; // rax
  __int64 *i; // r15
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 *v20; // r14
  __int64 *v21; // rsi
  __int64 *v22; // rax
  int v23; // edi
  __int64 v24; // r8
  int v25; // edi
  char *v26; // r13
  int v27; // edx
  unsigned __int64 v28; // rcx
  __int64 v29; // r10
  __int64 *v30; // r11
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 *v33; // rdi
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // rdi
  unsigned int v38; // r8d
  unsigned int *v39; // r9
  unsigned int v40; // edx
  int v41; // ecx
  __int64 v42; // rdi
  unsigned int v43; // esi
  __int64 v44; // rax
  __int64 *v45; // r9
  __int64 *v46; // rdx
  unsigned int v47; // eax
  unsigned int v48; // r8d
  __int64 v49; // r14
  __int64 v50; // rdx
  char *v51; // rdi
  char v52; // r14
  int v53; // r10d
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rcx
  char v56; // r15
  unsigned __int8 v57; // al
  char *v58; // r9
  char *v59; // rsi
  char *v60; // rdx
  unsigned __int64 v61; // r14
  char *v62; // r14
  unsigned __int64 v63; // r12
  _QWORD *v64; // rax
  __int64 *v65; // r15
  unsigned __int64 v66; // rax
  unsigned int v67; // r14d
  __int64 v68; // r14
  _QWORD *v69; // rdi
  _QWORD *v70; // rdx
  _QWORD *v71; // rax
  _QWORD *v72; // r15
  __int64 *v73; // rax
  __int64 *v74; // rdi
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // rax
  int v77; // ecx
  unsigned int v78; // r14d
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // rdx
  unsigned __int16 *v82; // rsi
  __int64 v83; // rdi
  int v84; // r12d
  int v85; // eax
  __int64 v86; // r10
  int v87; // r8d
  __int64 v88; // rdi
  unsigned int v89; // r9d
  unsigned int *v90; // r8
  unsigned int v91; // edx
  unsigned int v92; // edx
  int v93; // ecx
  int v94; // eax
  unsigned __int64 v95; // r14
  char v96; // si
  unsigned __int16 *v97; // rdi
  unsigned __int16 v98; // cx
  __int64 v99; // rdx
  __int64 v100; // rcx
  unsigned __int16 LFHContext; // ax
  int v102; // r13d
  __int64 *v103; // rdi
  int v104; // edx
  __int64 v105; // rsi
  __int64 *v106; // r14
  __int64 v107; // rax
  __int64 v108; // r9
  unsigned __int64 v109; // rdx
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rax
  unsigned int v112; // eax
  __int64 v113; // r9
  unsigned __int64 v114; // rcx
  int v115; // ecx
  __int64 v116; // rdi
  _QWORD *m; // r8
  int v118; // r14d
  int v119; // r9d
  __int64 *j; // r12
  int v121; // edi
  unsigned __int64 v122; // rcx
  _QWORD *v123; // rax
  _QWORD *v124; // r8
  __int64 v125; // rdi
  __int64 *v126; // rsi
  __int64 v127; // rax
  __int64 v128; // r9
  __int64 **v129; // rdx
  unsigned __int64 v130; // rcx
  unsigned __int64 v131; // rax
  unsigned int v132; // eax
  int v133; // r9d
  __int64 v134; // r9
  __int64 v135; // rdi
  int HeapProtection; // esi
  __int64 v137; // rdi
  __int64 v138; // rcx
  __int64 v139; // rcx
  __int64 v140; // rdi
  __int64 v141; // rcx
  unsigned __int64 v142; // rcx
  unsigned __int64 *v143; // rax
  unsigned __int64 v144; // rsi
  __int64 v145; // r15
  char *v146; // r14
  _QWORD *ExtraStuffPointer; // rdi
  unsigned __int64 v148; // r14
  unsigned __int64 *v149; // rdi
  unsigned __int64 Entry; // r8
  int v151; // ecx
  int v152; // eax
  unsigned __int64 *v153; // rdi
  __int64 *v154; // rax
  unsigned __int64 v155; // rdx
  unsigned __int64 v156; // rcx
  unsigned __int64 v157; // rax
  unsigned int v158; // eax
  unsigned int v159; // eax
  int v160; // edx
  _QWORD *v161; // r8
  __int64 v162; // r12
  __int64 *v163; // rcx
  __int64 v164; // rax
  __int64 v165; // r9
  __int64 **v166; // rdx
  unsigned __int64 v167; // r9
  unsigned __int64 v168; // rcx
  __int64 v169; // rax
  unsigned __int64 v170; // r8
  unsigned __int64 v171; // r14
  _QWORD *v172; // rdi
  _QWORD *v173; // r8
  _QWORD *v174; // rdi
  __int64 *v175; // rax
  __int64 **v176; // rdx
  unsigned __int64 v177; // rcx
  unsigned __int64 v178; // r8
  int v179; // eax
  int v180; // ecx
  int v181; // eax
  _QWORD *v182; // rdi
  _QWORD *v183; // r8
  int v184; // ecx
  int v185; // eax
  __int64 *v186; // rax
  __int64 v187; // r9
  struct _TEB *v188; // rdi
  char v189; // al
  unsigned __int64 v190; // r12
  struct _TEB *v191; // rdi
  struct _TEB *v192; // rdi
  _DWORD *v193; // r8
  unsigned __int64 v194; // rdx
  _DWORD *v195; // r8
  unsigned __int64 v196; // rdx
  char *v197; // rax
  __int16 updated; // ax
  _DWORD *SharedData; // rcx
  __int64 v200; // rcx
  void *v201; // rdi
  __int64 v203; // rax
  unsigned __int64 v204; // r12
  char v205; // [rsp+30h] [rbp-238h]
  int v206; // [rsp+34h] [rbp-234h]
  unsigned __int64 v207; // [rsp+38h] [rbp-230h] BYREF
  char v208; // [rsp+40h] [rbp-228h]
  __int64 v209; // [rsp+48h] [rbp-220h]
  int v210; // [rsp+50h] [rbp-218h]
  __int64 v211; // [rsp+58h] [rbp-210h]
  int v212; // [rsp+60h] [rbp-208h]
  void *v213; // [rsp+68h] [rbp-200h]
  unsigned __int64 v214; // [rsp+70h] [rbp-1F8h]
  __int64 v215; // [rsp+78h] [rbp-1F0h]
  unsigned int v216; // [rsp+80h] [rbp-1E8h]
  unsigned int v217; // [rsp+84h] [rbp-1E4h]
  char *v218; // [rsp+88h] [rbp-1E0h]
  unsigned int v219; // [rsp+90h] [rbp-1D8h]
  char *v220; // [rsp+98h] [rbp-1D0h]
  int v221; // [rsp+A0h] [rbp-1C8h]
  __int64 k; // [rsp+A8h] [rbp-1C0h]
  __int64 *v223; // [rsp+B0h] [rbp-1B8h]
  __int64 *v224; // [rsp+B8h] [rbp-1B0h]
  unsigned __int64 v225; // [rsp+C0h] [rbp-1A8h]
  unsigned __int64 v226; // [rsp+C8h] [rbp-1A0h]
  unsigned __int64 v227; // [rsp+D0h] [rbp-198h]
  unsigned __int64 v228; // [rsp+D8h] [rbp-190h]
  __int64 v229; // [rsp+E0h] [rbp-188h] BYREF
  __int64 v230; // [rsp+E8h] [rbp-180h] BYREF
  __int64 v231; // [rsp+F0h] [rbp-178h]
  unsigned int *v232; // [rsp+F8h] [rbp-170h]
  __int64 v233; // [rsp+100h] [rbp-168h]
  __int64 v234; // [rsp+108h] [rbp-160h]
  unsigned __int64 v235; // [rsp+110h] [rbp-158h]
  unsigned int *v236; // [rsp+118h] [rbp-150h]
  __int64 v237; // [rsp+120h] [rbp-148h]
  _QWORD *v238; // [rsp+128h] [rbp-140h]
  __int64 v239; // [rsp+130h] [rbp-138h]
  unsigned __int64 v240; // [rsp+138h] [rbp-130h]
  __int64 v241; // [rsp+140h] [rbp-128h]
  _QWORD *v242; // [rsp+148h] [rbp-120h]
  __int64 v243; // [rsp+150h] [rbp-118h]
  __int64 v244; // [rsp+158h] [rbp-110h]
  unsigned __int64 v245; // [rsp+160h] [rbp-108h]
  _QWORD *v246; // [rsp+168h] [rbp-100h]
  int v247; // [rsp+170h] [rbp-F8h]
  _WORD *v248; // [rsp+178h] [rbp-F0h]
  unsigned __int64 v249; // [rsp+180h] [rbp-E8h]
  int v250; // [rsp+190h] [rbp-D8h]
  int v251; // [rsp+1A0h] [rbp-C8h]
  int v252; // [rsp+1B0h] [rbp-B8h]
  int v253; // [rsp+1C0h] [rbp-A8h]
  int v254; // [rsp+1D0h] [rbp-98h]
  int v255; // [rsp+1E0h] [rbp-88h]
  int v256; // [rsp+1F0h] [rbp-78h]
  int v257; // [rsp+200h] [rbp-68h]
  int v258; // [rsp+210h] [rbp-58h]
  int v259; // [rsp+220h] [rbp-48h]
  unsigned int v260; // [rsp+278h] [rbp+10h]
  unsigned __int64 v261; // [rsp+280h] [rbp+18h]
  unsigned __int64 v262; // [rsp+288h] [rbp+20h] BYREF

  v262 = a4;
  v261 = a3;
  v260 = a2;
  v7 = a3;
  v8 = a2;
  v206 = 1;
  v205 = 0;
  v213 = 0LL;
  v207 = 0LL;
  v212 = 0;
  v10 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v206 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return RtlDebugAllocateHeap(Src);
    if ( a3 )
      v203 = a3;
    else
      v203 = 1LL;
    v204 = *((_QWORD *)Src + 33) & (v203 + *((_QWORD *)Src + 32));
    if ( v204 < 0x20 )
      v204 = 32LL;
    v262 = v204;
    v6 = (unsigned int)a2 >> 4;
    LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    LODWORD(v214) = v6;
    if ( (a2 & 0x3C000100) != 0 || *((_QWORD *)Src + 41) )
    {
      LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      LODWORD(v214) = v6;
      v204 += 16LL;
      v262 = v204;
    }
    v11 = v204 >> 4;
    v211 = v11;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v214) = v6;
    v11 = a4 >> 4;
    v211 = a4 >> 4;
    if ( v10 < 2 )
    {
      v262 += 16LL;
      v11 = 2LL;
      v211 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v214) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    v12 = *((_QWORD *)Src + 44);
    v13 = NtCurrentTeb();
    v14 = _interlockedbittestandreset((volatile signed __int32 *)(v12 + 8), 0);
    UniqueThread = v13->ClientId.UniqueThread;
    if ( v14 )
    {
      *(_QWORD *)(v12 + 16) = UniqueThread;
      *(_DWORD *)(v12 + 12) = 1;
    }
    else
    {
      if ( *(void **)(v12 + 16) != UniqueThread )
      {
        if ( byte_180165408 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741420;
          v191 = NtCurrentTeb();
          v191->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          goto LABEL_484;
        }
        v212 = 1;
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        RtlpUpdateHeapRates(Src, 1LL);
        goto LABEL_11;
      }
      ++*(_DWORD *)(v12 + 12);
    }
    ++*((_DWORD *)Src + 154);
LABEL_11:
    v205 = 1;
    if ( (*((_DWORD *)Src + 30) & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(Src);
  }
  if ( v11 > *((unsigned int *)Src + 37) )
  {
    if ( (Src[112] & 2) != 0 )
    {
      v262 += 56LL;
      v135 = (RtlpHeapGenerateRandomValue32() & 0xF) << 12;
      v230 = 0LL;
      v229 = v135 + v262 + 4096;
      HeapProtection = RtlpGetHeapProtection(Src, 1LL);
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v230, 0LL, &v229, 0x2000, HeapProtection) < 0 )
        goto LABEL_484;
      v207 = v135 + v230;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v262 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           *((_QWORD *)Src + 72) - *((_QWORD *)Src + 83),
                           Src,
                           Src + 376)
        && (int)ZwAllocateVirtualMemory(-1LL, &v207, 0LL, &v262, 4096, HeapProtection) >= 0 )
      {
        *(_WORD *)(v207 + 56) = v262 - v7;
        *(_BYTE *)(v207 + 58) = v6 | 2;
        *(_QWORD *)(v207 + 32) = v262;
        *(_QWORD *)(v207 + 40) = v229;
        *(_BYTE *)(v207 + 63) = 4;
        *((_QWORD *)Src + 74) += v262;
        v137 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v138 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v138 = 2147353472LL;
        if ( *(_BYTE *)v138 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapCommit(Src, v207, v262, 9LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v139 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v139 = 2147353472LL;
        if ( *(_BYTE *)v139 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v137 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapExtendEvent((_DWORD)Src, v207, v262, 16 * *((_QWORD *)Src + 24), *(unsigned __int8 *)v137);
        }
        v140 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v141 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v141 = 2147353482LL;
        if ( *(_BYTE *)v141 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v140 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapExtendEvent((_DWORD)Src, v207, v262, 16 * *((_QWORD *)Src + 24), *(unsigned __int8 *)v140);
        }
        if ( (*((_DWORD *)Src + 28) & 0x8000000) != 0 )
          *(_WORD *)(v207 + 16) = RtlLogStackBackTraceEx(1LL);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          updated = RtlpUpdateTagEntry((_DWORD)Src, (unsigned __int8)(v8 >> 18), 0, *(_QWORD *)(v207 + 32) >> 4, 1);
          *(_WORD *)(v207 + 18) = updated;
        }
        v142 = v207;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v207 + 59) = *(_BYTE *)(v207 + 56) ^ *(_BYTE *)(v207 + 57) ^ *(_BYTE *)(v207 + 58);
          *(_DWORD *)(v142 + 56) ^= *((_DWORD *)Src + 34);
          v142 = v207;
        }
        a3 = (unsigned __int64)(Src + 272);
        v143 = (unsigned __int64 *)*((_QWORD *)Src + 35);
        a2 = *v143;
        if ( (char *)*v143 == Src + 272 )
        {
          *(_QWORD *)v142 = a3;
          *(_QWORD *)(v142 + 8) = v143;
          *v143 = v142;
          *((_QWORD *)Src + 35) = v142;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, a3, 0, a2, 0LL);
        }
        v213 = (void *)(v207 + 64);
        goto LABEL_484;
      }
      v207 = 0LL;
      ++*((_DWORD *)Src + 158);
    }
    goto LABEL_483;
  }
  if ( (v8 & 0x800000) == 0 )
  {
    if ( v10 >= *((unsigned __int16 *)Src + 216) )
    {
      if ( v7 > RtlpLargestLfhBlock || Src[418] == 2 && *((_QWORD *)Src + 51) || Src[419] != 2 )
        goto LABEL_19;
LABEL_331:
      *((_DWORD *)Src + 30) |= 0x20000000u;
      goto LABEL_19;
    }
    if ( v7 <= RtlpLargestLfhBlock )
    {
      v95 = v10 >> 3;
      v96 = v10 & 7;
      if ( ((unsigned __int8)(1 << (v10 & 7)) & (unsigned __int8)Src[(v10 >> 3) + 434]) == 0 )
      {
        v97 = (unsigned __int16 *)(*((_QWORD *)Src + 53) + 2 * v10);
        v248 = v97;
        v98 = *v97 + 33;
        *v97 = v98;
        if ( !v212 && (v98 & 0x1Fu) <= 0x10 )
        {
          if ( v98 <= 0xFF00u )
            goto LABEL_19;
          v7 = v261;
        }
        if ( v7 )
          v99 = v7;
        else
          v99 = 1LL;
        if ( Src[418] == 2 )
          v100 = *((_QWORD *)Src + 51);
        else
          v100 = 0LL;
        LFHContext = RtlpGetLFHContext(v100, v99);
        if ( LFHContext != 0xFFFF )
        {
          *v97 = LFHContext;
          Src[v95 + 434] |= 1 << v96;
          ++*((_DWORD *)Src + 164);
          goto LABEL_19;
        }
        if ( Src[418] != 2 || !*((_QWORD *)Src + 51) )
          goto LABEL_331;
      }
    }
  }
LABEL_19:
  if ( a5 )
  {
    v103 = *a5;
    if ( *a5 )
    {
      v26 = (char *)(v103 - 2);
      v220 = (char *)(v103 - 2);
      if ( *((_DWORD *)Src + 31) )
      {
        v104 = *((_DWORD *)v26 + 2) ^ *((_DWORD *)Src + 34);
        *((_DWORD *)v26 + 2) = v104;
        if ( HIBYTE(v104) != ((unsigned __int8)v104 ^ (unsigned __int8)(BYTE1(v104) ^ BYTE2(v104))) )
          RtlpAnalyzeHeapFailure(Src, v103 - 2);
      }
      v105 = *v103;
      v106 = (__int64 *)*((_QWORD *)v26 + 3);
      v107 = *v106;
      v108 = *(_QWORD *)(*v103 + 8);
      if ( *v106 != v108 || (__int64 *)v107 != v103 )
      {
        RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v103, v108, v107, 0LL);
        goto LABEL_419;
      }
      *((_QWORD *)Src + 24) -= *((unsigned __int16 *)v26 + 4);
      v109 = *((_QWORD *)Src + 39);
      if ( v109 )
      {
        v110 = *((unsigned __int16 *)v26 + 4);
        while ( 1 )
        {
          v111 = *(unsigned int *)(v109 + 8);
          if ( v110 < v111 )
          {
            v112 = *((unsigned __int16 *)v26 + 4);
            v231 = *((unsigned __int16 *)v26 + 4);
            goto LABEL_176;
          }
          a3 = *(_QWORD *)v109;
          if ( !*(_QWORD *)v109 )
            break;
          v109 = *(_QWORD *)v109;
        }
        v112 = v111 - 1;
        v231 = v112;
LABEL_176:
        LOBYTE(a3) = 1;
        RtlpHeapRemoveListEntry((_DWORD)Src, v109, a3, (_DWORD)v103, v112, v110);
      }
      *v106 = v105;
      *(_QWORD *)(v105 + 8) = v106;
      v51 = v26 + 10;
      if ( (v26[10] & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v26) )
      {
        LOBYTE(v113) = 1;
        RtlpDeCommitFreeBlock(Src, v26, *((unsigned __int16 *)v26 + 4), v113);
LABEL_419:
        NtCurrentTeb()->LastStatusValue = -1073741801;
        v192 = NtCurrentTeb();
        v192->LastErrorValue = RtlNtStatusToDosError(-1073741801);
        goto LABEL_484;
      }
      goto LABEL_74;
    }
  }
  v224 = (__int64 *)(Src + 336);
  for ( i = (__int64 *)*((_QWORD *)Src + 39); ; i = (__int64 *)*i )
  {
    v17 = *((unsigned int *)i + 2);
    if ( v11 < v17 )
    {
      v228 = v11;
      v18 = (unsigned int)v11;
      goto LABEL_23;
    }
    if ( !*i )
      break;
  }
  v18 = (unsigned int)(v17 - 1);
  v228 = v18;
LABEL_23:
  v209 = v18;
  while ( 1 )
  {
    v19 = (unsigned int)(v18 - *((_DWORD *)i + 6));
    v20 = 0LL;
    v21 = (__int64 *)i[4];
    v22 = (__int64 *)v21[1];
    if ( v21 == v22 )
    {
      v20 = (__int64 *)i[4];
    }
    else
    {
      v23 = *((_DWORD *)v22 - 2);
      v250 = v23;
      if ( *((_DWORD *)Src + 31) )
      {
        v23 ^= *((_DWORD *)Src + 34);
        v250 = v23;
        if ( HIBYTE(v23) != ((unsigned __int8)v23 ^ (unsigned __int8)(BYTE1(v23) ^ BYTE2(v23))) )
        {
          RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)v22 - 16, 0, 0LL, 0LL);
          LODWORD(v18) = v209;
        }
      }
      if ( (int)(v11 - (unsigned __int16)v23) > 0 )
      {
        v20 = v21;
      }
      else
      {
        v24 = *v21 - 16;
        v25 = *(_DWORD *)(v24 + 8);
        v251 = v25;
        if ( *((_DWORD *)Src + 31) )
        {
          v25 ^= *((_DWORD *)Src + 34);
          v251 = v25;
          if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(BYTE1(v25) ^ BYTE2(v25))) )
          {
            RtlpLogHeapFailure(3, (_DWORD)Src, v24, 0, 0LL, 0LL);
            LODWORD(v18) = v209;
          }
        }
        if ( (int)(v11 - (unsigned __int16)v25) > 0 )
        {
          if ( !*i && (_DWORD)v18 == *((_DWORD *)i + 2) - 1 )
          {
            if ( *((_DWORD *)i + 3) )
              v19 = (unsigned int)(2 * v19);
            for ( j = *(__int64 **)(i[6] + 8 * v19); v21 != j; j = (__int64 *)*j )
            {
              v121 = *((_DWORD *)j - 2);
              v252 = v121;
              if ( *((_DWORD *)Src + 31) )
              {
                v121 ^= *((_DWORD *)Src + 34);
                v252 = v121;
                if ( HIBYTE(v121) != ((unsigned __int8)v121 ^ (unsigned __int8)(BYTE1(v121) ^ BYTE2(v121))) )
                  RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)j - 16, 0, 0LL, 0LL);
              }
              if ( (int)(v211 - (unsigned __int16)v121) <= 0 )
              {
                v20 = j;
                break;
              }
            }
            v11 = v211;
          }
          else
          {
            v37 = (unsigned int)v19 >> 5;
            v216 = (unsigned int)v19 >> 5;
            v38 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
            v39 = (unsigned int *)(i[5] + 4 * v37);
            v232 = v39;
            v40 = *v39 & (-1 << (v19 & 0x1F));
            while ( !v40 )
            {
              if ( (unsigned int)v37 > v38 )
                goto LABEL_233;
              v232 = ++v39;
              v40 = *v39;
              LODWORD(v37) = v37 + 1;
              v216 = v37;
            }
            if ( (_WORD)v40 )
            {
              if ( (_BYTE)v40 )
                v41 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v40];
              else
                v41 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v40)] + 8;
            }
            else if ( (v40 & 0xFF0000) != 0 )
            {
              v41 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v40)] + 16;
            }
            else
            {
              v41 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v40 >> 24] + 24;
            }
            v42 = (unsigned int)(v41 + 32 * v37);
            v216 = v42;
            if ( *((_DWORD *)i + 3) )
              v42 = (unsigned int)(2 * v42);
            v20 = *(__int64 **)(i[6] + 8 * v42);
          }
        }
        else
        {
          v20 = (__int64 *)*v21;
        }
      }
    }
    if ( v20 )
      break;
LABEL_233:
    i = (__int64 *)*i;
    v18 = *((unsigned int *)i + 6);
    v209 = v18;
    v228 = v18;
  }
  if ( v224 == v20 )
  {
LABEL_236:
    v123 = (_QWORD *)RtlpExtendHeap(Src, v262);
    v26 = (char *)v123;
    v220 = (char *)v123;
    if ( v123 )
    {
      v124 = v123 + 2;
      v125 = v123[2];
      v126 = (__int64 *)v123[3];
      v127 = *v126;
      v128 = *(_QWORD *)(v125 + 8);
      if ( *v126 != v128 || (_QWORD *)v127 != v124 )
      {
        RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v124, v128, v127, 0LL);
        goto LABEL_484;
      }
      *((_QWORD *)Src + 24) -= *((unsigned __int16 *)v26 + 4);
      v129 = (__int64 **)*((_QWORD *)Src + 39);
      if ( v129 )
      {
        v130 = *((unsigned __int16 *)v26 + 4);
        while ( 1 )
        {
          v131 = *((unsigned int *)v129 + 2);
          if ( v130 < v131 )
            break;
          if ( !*v129 )
          {
            v132 = v131 - 1;
            v234 = v132;
            goto LABEL_244;
          }
          v129 = (__int64 **)*v129;
        }
        v132 = *((unsigned __int16 *)v26 + 4);
        v234 = *((unsigned __int16 *)v26 + 4);
LABEL_244:
        v133 = (int)v124;
        LOBYTE(v124) = 1;
        RtlpHeapRemoveListEntry((_DWORD)Src, (_DWORD)v129, (_DWORD)v124, v133, v132, v130);
      }
      *v126 = v125;
      *(_QWORD *)(v125 + 8) = v126;
      goto LABEL_72;
    }
LABEL_483:
    v213 = 0LL;
    goto LABEL_484;
  }
  v26 = (char *)(v20 - 2);
  v220 = (char *)(v20 - 2);
  if ( *((_DWORD *)Src + 31) )
  {
    v27 = *((_DWORD *)v26 + 2) ^ *((_DWORD *)Src + 34);
    *((_DWORD *)v26 + 2) = v27;
    if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
      RtlpAnalyzeHeapFailure(Src, v20 - 2);
  }
  v28 = *((unsigned __int16 *)v26 + 4);
  if ( v28 < v11 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      v26[11] = BYTE1(v28) ^ v28 ^ v26[10];
      *((_DWORD *)v26 + 2) ^= *((_DWORD *)Src + 34);
    }
    goto LABEL_236;
  }
  v29 = *v20;
  v211 = v29;
  v30 = (__int64 *)*((_QWORD *)v26 + 3);
  v215 = (__int64)v30;
  v31 = *v30;
  v32 = *(_QWORD *)(v29 + 8);
  if ( *v30 != v32 || (__int64 *)v31 != v20 )
  {
    RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v20, v32, v31, 0LL);
    goto LABEL_484;
  }
  *((_QWORD *)Src + 24) -= v28;
  v33 = (__int64 *)*((_QWORD *)Src + 39);
  if ( !v33 )
    goto LABEL_71;
  v34 = *((unsigned __int16 *)v26 + 4);
  while ( 1 )
  {
    v35 = *((unsigned int *)v33 + 2);
    if ( v34 < v35 )
      break;
    if ( !*v33 )
    {
      v36 = v35 - 1;
      v233 = (unsigned int)(v35 - 1);
      goto LABEL_60;
    }
    v33 = (__int64 *)*v33;
  }
  v233 = *((unsigned __int16 *)v26 + 4);
  v36 = v34;
LABEL_60:
  v209 = v34;
  v43 = v36 - *((_DWORD *)v33 + 6);
  if ( *((_DWORD *)v33 + 3) )
    v44 = 2 * v43;
  else
    v44 = v43;
  v209 = 8 * v44;
  v45 = (__int64 *)(8 * v44 + v33[6]);
  v46 = (__int64 *)*v45;
  --*((_DWORD *)v33 + 4);
  v47 = *((_DWORD *)v33 + 2);
  v48 = v47 - 1;
  if ( v36 == v47 - 1 )
    --*((_DWORD *)v33 + 5);
  if ( v46 != v20 )
    goto LABEL_71;
  v219 = v47;
  if ( !*v33 )
  {
    --v47;
    v219 = v48;
  }
  v49 = *v20;
  v50 = v33[4];
  if ( v36 >= v47 )
  {
    if ( v49 != v50 )
    {
      *v45 = v49;
      goto LABEL_71;
    }
    *v45 = 0LL;
  }
  else
  {
    if ( v49 != v50 )
    {
      v102 = *(_DWORD *)(v49 - 16 + 8);
      v253 = v102;
      if ( *((_DWORD *)Src + 31) )
      {
        v102 ^= *((_DWORD *)Src + 34);
        v253 = v102;
        if ( HIBYTE(v102) != ((unsigned __int8)v102 ^ (unsigned __int8)(BYTE1(v102) ^ BYTE2(v102))) )
        {
          RtlpLogHeapFailure(3, (_DWORD)Src, v49 - 16, 0, 0LL, 0LL);
          v29 = v211;
          v30 = (__int64 *)v215;
        }
      }
      if ( (_DWORD)v34 == (unsigned __int16)v102 )
      {
        *(_QWORD *)(v209 + v33[6]) = v49;
        v26 = v220;
        goto LABEL_71;
      }
      v26 = v220;
    }
    *(_QWORD *)(v209 + v33[6]) = 0LL;
  }
  *(_DWORD *)(v33[5] + 4LL * (v43 >> 5)) &= ~(1 << (v43 & 0x1F));
LABEL_71:
  *v30 = v29;
  *(_QWORD *)(v29 + 8) = v30;
LABEL_72:
  v51 = v26 + 10;
  if ( (v26[10] & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v26) )
  {
    LOBYTE(v134) = 1;
    RtlpDeCommitFreeBlock(Src, v26, *((unsigned __int16 *)v26 + 4), v134);
    goto LABEL_484;
  }
  LOBYTE(v6) = v214;
LABEL_74:
  v52 = *v51;
  v208 = *v51;
  v53 = v206;
  if ( !v206 && (v52 & 4) != 0 )
  {
    v144 = 16LL * *((unsigned __int16 *)v26 + 4) - 32;
    v235 = v144;
    if ( (v52 & 2) != 0 && v144 > 4 )
    {
      v144 -= 4LL;
      v235 = v144;
    }
    v145 = RtlCompareMemoryUlong(v26 + 32, v144, 4277075694LL);
    if ( v145 != v144 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v26 = v220;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v220, &v220[v145 + 32]);
      RtlpBreakPointHeap();
      v52 = v208;
    }
    v53 = 0;
    LOBYTE(v6) = v214;
  }
  v218 = v26;
  if ( (*v51 & 1) != 0 )
  {
    RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)v26, 0, 0LL, 0LL);
    goto LABEL_484;
  }
  *v51 = v6;
  v54 = *((unsigned __int16 *)v26 + 4) - v11;
  v249 = v54;
  *((_WORD *)v26 + 4) = v11;
  a4 = v261;
  v55 = v262 - v261;
  v211 = v262 - v261;
  if ( v262 - v261 >= 0x3F )
  {
    *(_QWORD *)&v26[16 * v11] = v55;
    v26[15] = 63;
  }
  else
  {
    v26[15] = v55;
  }
  v26[11] = 0;
  if ( !v54 )
    goto LABEL_113;
  if ( v54 == 1 )
  {
    ++*((_WORD *)v26 + 4);
    v122 = v262 - v261 + 16;
    v214 = v122;
    if ( v122 >= 0x3F )
    {
      *(_QWORD *)&v26[16 * v11 + 16] = v122;
      v26[15] = 63;
    }
    else
    {
      v26[15] = v122;
    }
    goto LABEL_113;
  }
  if ( v53 )
  {
    v56 = 0;
    v210 = 0;
  }
  else
  {
    v56 = 1;
    v210 = 1;
  }
  v57 = v26[14];
  if ( v57 )
    v58 = (char *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v57 << 16) + 0x10000);
  else
    v58 = Src;
  v224 = (__int64 *)v54;
  v59 = &v26[16 * v11];
  v212 = 0;
  v59[10] = v52;
  v59[15] = 0;
  *((_WORD *)v59 + 6) = v11 ^ *((_WORD *)Src + 70);
  v60 = (char *)*((_QWORD *)v58 + 5);
  if ( v60 == v58 )
  {
    LOBYTE(v61) = 0;
  }
  else
  {
    v61 = ((unsigned __int64)(v59 - v58) >> 16) + 1;
    v249 = v61;
    if ( v61 >= 0xFE )
      RtlpLogHeapFailure(3, (_DWORD)v60, (_DWORD)v26 + 16 * v11, (_DWORD)v58, 0LL, 0LL);
  }
  v59[14] = v61;
  v59[11] = 0;
  *((_WORD *)v59 + 4) = v54;
  while ( 1 )
  {
    v62 = &v59[16 * v54];
    if ( (((unsigned __int8)v62[10] ^ (unsigned __int8)(Src[138] & (*((_DWORD *)Src + 31) >> 20))) & 1) != 0 )
    {
      *((_WORD *)v62 + 6) = v54 ^ *((_WORD *)Src + 70);
      if ( !v56 )
      {
        v63 = (unsigned __int16)v54;
        v215 = (unsigned __int16)v54;
        v59[10] = 0;
        v59[15] = 0;
        v64 = Src + 336;
        v65 = (__int64 *)*((_QWORD *)Src + 39);
        if ( v65 )
        {
          while ( 1 )
          {
            v66 = *((unsigned int *)v65 + 2);
            if ( (unsigned __int16)v54 < v66 )
            {
              v67 = (unsigned __int16)v54;
              k = (unsigned __int16)v54;
              goto LABEL_92;
            }
            if ( !*v65 )
              break;
            v65 = (__int64 *)*v65;
          }
          v67 = v66 - 1;
          for ( k = (unsigned int)(v66 - 1); ; k = v67 )
          {
LABEL_92:
            v68 = v67 - *((_DWORD *)v65 + 6);
            v69 = 0LL;
            v70 = (_QWORD *)v65[4];
            v209 = (__int64)v70;
            v71 = (_QWORD *)v70[1];
            if ( v70 == v71 )
            {
              v69 = v70;
            }
            else
            {
              v84 = *((_DWORD *)v71 - 2);
              v254 = v84;
              if ( *((_DWORD *)Src + 31) )
              {
                v84 ^= *((_DWORD *)Src + 34);
                v254 = v84;
                if ( HIBYTE(v84) != ((unsigned __int8)v84 ^ (unsigned __int8)(BYTE1(v84) ^ BYTE2(v84))) )
                {
                  RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)v71 - 16, 0, 0LL, 0LL);
                  v70 = (_QWORD *)v209;
                }
              }
              v85 = (unsigned __int16)v84;
              v63 = v215;
              if ( (int)v215 - v85 > 0 )
              {
                v69 = v70;
              }
              else
              {
                v86 = *v70;
                v87 = *(_DWORD *)(*v70 - 8LL);
                v255 = v87;
                if ( *((_DWORD *)Src + 31) )
                {
                  v87 ^= *((_DWORD *)Src + 34);
                  v210 = v87;
                  v255 = v87;
                  if ( HIBYTE(v87) != ((unsigned __int8)v87 ^ (unsigned __int8)(BYTE1(v87) ^ BYTE2(v87))) )
                  {
                    RtlpLogHeapFailure(3, (_DWORD)Src, v86 - 16, 0, 0LL, 0LL);
                    LOWORD(v87) = v210;
                    v70 = (_QWORD *)v209;
                  }
                }
                if ( (int)(v215 - (unsigned __int16)v87) <= 0 )
                {
                  v69 = (_QWORD *)*v70;
                }
                else if ( *v65 || (_DWORD)k != *((_DWORD *)v65 + 2) - 1 )
                {
                  v88 = (unsigned int)v68 >> 5;
                  v217 = (unsigned int)v68 >> 5;
                  v89 = ((unsigned int)(*((_DWORD *)v65 + 2) - *((_DWORD *)v65 + 6)) >> 5) - 1;
                  v90 = (unsigned int *)(v65[5] + 4 * v88);
                  v236 = v90;
                  v91 = *v90 & (-1 << (v68 & 0x1F));
                  while ( !v91 )
                  {
                    if ( (unsigned int)v88 > v89 )
                      goto LABEL_249;
                    v236 = ++v90;
                    v91 = *v90;
                    LODWORD(v88) = v88 + 1;
                    v217 = v88;
                  }
                  if ( (_WORD)v91 )
                  {
                    if ( (_BYTE)v91 )
                      v115 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v91];
                    else
                      v115 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v91)] + 8;
                  }
                  else if ( (v91 & 0xFF0000) != 0 )
                  {
                    v115 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v91)] + 16;
                  }
                  else
                  {
                    v115 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v91 >> 24] + 24;
                  }
                  v116 = (unsigned int)(v115 + 32 * v88);
                  v217 = v116;
                  if ( *((_DWORD *)v65 + 3) )
                    v116 = (unsigned int)(2 * v116);
                  v69 = *(_QWORD **)(v65[6] + 8 * v116);
                }
                else
                {
                  if ( *((_DWORD *)v65 + 3) )
                    v68 = (unsigned int)(2 * v68);
                  for ( m = *(_QWORD **)(v65[6] + 8 * v68); ; m = (_QWORD *)*m )
                  {
                    v211 = (__int64)m;
                    if ( v70 == m )
                      break;
                    v118 = *((_DWORD *)m - 2);
                    v256 = v118;
                    if ( *((_DWORD *)Src + 31) )
                    {
                      v118 ^= *((_DWORD *)Src + 34);
                      v256 = v118;
                      if ( HIBYTE(v118) != ((unsigned __int8)v118 ^ (unsigned __int8)(BYTE1(v118) ^ BYTE2(v118))) )
                      {
                        RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)m - 16, 0, 0LL, 0LL);
                        v70 = (_QWORD *)v209;
                        m = (_QWORD *)v211;
                      }
                    }
                    if ( (int)(v215 - (unsigned __int16)v118) <= 0 )
                    {
                      v69 = m;
                      break;
                    }
                  }
                }
              }
            }
            if ( v69 )
              break;
LABEL_249:
            v65 = (__int64 *)*v65;
            v67 = *((_DWORD *)v65 + 6);
          }
          v64 = Src + 336;
        }
        else
        {
          v69 = (_QWORD *)*v64;
        }
        while ( v64 != v69 )
        {
          if ( *((_DWORD *)Src + 31) )
          {
            v93 = *((_DWORD *)v69 - 2);
            v247 = v93;
            if ( (v93 & *((_DWORD *)Src + 31)) != 0 )
            {
              v94 = v93 ^ *((_DWORD *)Src + 34);
              v247 = v94;
            }
            else
            {
              LOWORD(v94) = v93;
            }
          }
          else
          {
            LOWORD(v94) = *((_WORD *)v69 - 4);
          }
          if ( v63 <= (unsigned __int16)v94 )
            break;
          v69 = (_QWORD *)*v69;
          v64 = Src + 336;
        }
        v72 = v59 + 16;
        v73 = (__int64 *)v69[1];
        if ( (_QWORD *)*v73 == v69 )
        {
          *v72 = v69;
          *((_QWORD *)v59 + 3) = v73;
          *v73 = (__int64)v72;
          v69[1] = v72;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)v69, 0, *v73, 0LL);
        }
        *((_QWORD *)Src + 24) += *((unsigned __int16 *)v59 + 4);
        v74 = (__int64 *)*((_QWORD *)Src + 39);
        if ( v74 )
        {
          v75 = *((unsigned __int16 *)v59 + 4);
          while ( 1 )
          {
            v76 = *((unsigned int *)v74 + 2);
            if ( v75 < v76 )
            {
              v237 = *((unsigned __int16 *)v59 + 4);
              v77 = v75;
              goto LABEL_103;
            }
            if ( !*v74 )
              break;
            v74 = (__int64 *)*v74;
          }
          v77 = v76 - 1;
          v237 = (unsigned int)(v76 - 1);
LABEL_103:
          v248 = (_WORD *)v75;
          v78 = v77 - *((_DWORD *)v74 + 6);
          if ( *((_DWORD *)v74 + 3) )
            v79 = 2 * v78;
          else
            v79 = v78;
          ++*((_DWORD *)v74 + 4);
          v80 = 8 * v79;
          v209 = 8 * v79;
          v81 = *(_QWORD *)(8 * v79 + v74[6]);
          v215 = v81;
          if ( v77 == *((_DWORD *)v74 + 2) - 1 )
            ++*((_DWORD *)v74 + 5);
          if ( !v81 )
            goto LABEL_108;
          v119 = *(_DWORD *)(v81 - 8);
          v257 = v119;
          if ( *((_DWORD *)Src + 31) )
          {
            v119 ^= *((_DWORD *)Src + 34);
            v210 = v119;
            v257 = v119;
            if ( HIBYTE(v119) != ((unsigned __int8)v119 ^ (unsigned __int8)(BYTE1(v119) ^ BYTE2(v119))) )
            {
              RtlpLogHeapFailure(3, (_DWORD)Src, v81 - 16, 0, 0LL, 0LL);
              LOWORD(v119) = v210;
              v81 = v215;
              v80 = v209;
            }
          }
          if ( (int)(v75 - (unsigned __int16)v119) <= 0 )
LABEL_108:
            *(_QWORD *)(v80 + v74[6]) = v72;
          if ( !v81 )
            *(_DWORD *)(v74[5] + 4LL * (v78 >> 5)) |= 1 << (v78 & 0x1F);
        }
        v53 = v206;
        if ( *((_DWORD *)Src + 31) )
        {
          v59[11] = v59[8] ^ v59[9] ^ v59[10];
          *((_DWORD *)v59 + 2) ^= *((_DWORD *)Src + 34);
          a4 = v261;
          goto LABEL_113;
        }
LABEL_372:
        a4 = v261;
        goto LABEL_113;
      }
      v148 = (unsigned __int16)v54;
      v59[10] &= 0xF0u;
      v59[15] = 0;
      if ( (Src[112] & 0x40) == 0 )
      {
LABEL_313:
        v149 = (unsigned __int64 *)(Src + 336);
        if ( *((_QWORD *)Src + 39) )
          Entry = RtlpFindEntry(Src, v148);
        else
          Entry = *v149;
        while ( v149 != (unsigned __int64 *)Entry )
        {
          if ( *((_DWORD *)Src + 31) )
          {
            v151 = *(_DWORD *)(Entry - 8);
            v221 = v151;
            if ( (v151 & *((_DWORD *)Src + 31)) != 0 )
            {
              v152 = v151 ^ *((_DWORD *)Src + 34);
              v221 = v152;
            }
            else
            {
              LOWORD(v152) = v151;
            }
          }
          else
          {
            LOWORD(v152) = *(_WORD *)(Entry - 8);
          }
          if ( v148 <= (unsigned __int16)v152 )
            break;
          Entry = *(_QWORD *)Entry;
        }
        v153 = (unsigned __int64 *)(v59 + 16);
        v154 = *(__int64 **)(Entry + 8);
        if ( *v154 == Entry )
        {
          *v153 = Entry;
          *((_QWORD *)v59 + 3) = v154;
          *v154 = (__int64)v153;
          *(_QWORD *)(Entry + 8) = v153;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, Entry, 0, *v154, 0LL);
        }
        *((_QWORD *)Src + 24) += *((unsigned __int16 *)v59 + 4);
        v155 = *((_QWORD *)Src + 39);
        if ( v155 )
        {
          v156 = *((unsigned __int16 *)v59 + 4);
          while ( 1 )
          {
            v157 = *(unsigned int *)(v155 + 8);
            if ( v156 < v157 )
            {
              v158 = *((unsigned __int16 *)v59 + 4);
              v223 = (__int64 *)*((unsigned __int16 *)v59 + 4);
              goto LABEL_326;
            }
            Entry = *(_QWORD *)v155;
            if ( !*(_QWORD *)v155 )
              break;
            v155 = *(_QWORD *)v155;
          }
          v158 = v157 - 1;
          v223 = (__int64 *)v158;
          goto LABEL_326;
        }
        goto LABEL_327;
      }
      v193 = v59 + 32;
      v238 = v59 + 32;
      v194 = (16 * (unsigned __int64)(unsigned __int16)v54 - 32) >> 2;
      v225 = v194;
      if ( v194 )
      {
        if ( ((unsigned __int8)v193 & 4) == 0 )
          goto LABEL_439;
        *v193 = -17891602;
        v225 = --v194;
        if ( v194 )
        {
          v193 = v59 + 36;
          v238 = v59 + 36;
LABEL_439:
          memset64(v193, 0xFEEEFEEEFEEEFEEEuLL, v194 >> 1);
          if ( (v194 & 1) != 0 )
            v193[v194 - 1] = -17891602;
        }
      }
      v59[10] |= 4u;
      goto LABEL_313;
    }
    if ( *((_DWORD *)Src + 31) )
    {
      v160 = *((_DWORD *)v62 + 2) ^ *((_DWORD *)Src + 34);
      *((_DWORD *)v62 + 2) = v160;
      if ( HIBYTE(v160) != ((unsigned __int8)v160 ^ (unsigned __int8)(BYTE1(v160) ^ BYTE2(v160))) )
        RtlpAnalyzeHeapFailure(Src, &v59[16 * v54]);
    }
    v161 = v62 + 16;
    v162 = *((_QWORD *)v62 + 2);
    v163 = (__int64 *)*((_QWORD *)v62 + 3);
    v223 = v163;
    v164 = *v163;
    v165 = *(_QWORD *)(v162 + 8);
    if ( *v163 == v165 && (_QWORD *)v164 == v161 )
      break;
    RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v161, v165, v164, 0LL);
LABEL_400:
    if ( v212 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741764;
      v188 = NtCurrentTeb();
      v188->LastErrorValue = RtlNtStatusToDosError(-1073741764);
      goto LABEL_484;
    }
    v212 = 1;
  }
  *((_QWORD *)Src + 24) -= *((unsigned __int16 *)v62 + 4);
  v166 = (__int64 **)*((_QWORD *)Src + 39);
  if ( v166 )
  {
    v167 = *((unsigned __int16 *)v62 + 4);
    while ( 1 )
    {
      v168 = *((unsigned int *)v166 + 2);
      if ( v167 < v168 )
        break;
      if ( !*v166 )
      {
        v169 = (unsigned int)(v168 - 1);
        goto LABEL_354;
      }
      v166 = (__int64 **)*v166;
    }
    v169 = *((unsigned __int16 *)v62 + 4);
LABEL_354:
    v239 = v169;
    LOBYTE(v161) = 1;
    RtlpHeapRemoveListEntry((_DWORD)Src, (_DWORD)v166, (_DWORD)v161, (_DWORD)v62 + 16, v169, v167);
    v163 = v223;
  }
  *v163 = v162;
  *(_QWORD *)(v162 + 8) = v163;
  if ( (v62[10] & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, &v59[16 * v54]) )
  {
    LOBYTE(v187) = 1;
    RtlpDeCommitFreeBlock(Src, &v59[16 * v54], *((unsigned __int16 *)v62 + 4), v187);
    goto LABEL_400;
  }
  if ( v56 )
  {
    v189 = v62[10];
    if ( (v189 & 4) != 0 )
    {
      v190 = 16LL * *((unsigned __int16 *)v62 + 4) - 32;
      v240 = v190;
      if ( (v189 & 2) != 0 && v190 > 4 )
      {
        v190 -= 4LL;
        v240 = v190;
      }
      v215 = RtlCompareMemoryUlong(v62 + 32, v190, 4277075694LL);
      if ( v215 != v190 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", &v59[16 * v54], &v62[v215 + 32]);
        RtlpBreakPointHeap();
        v56 = v210;
      }
    }
  }
  v59[10] = v62[10];
  v170 = v54 + *((unsigned __int16 *)v62 + 4);
  v224 = (__int64 *)v170;
  if ( v170 <= 0xFF00 )
  {
    *((_WORD *)v59 + 4) = v170;
    *(_WORD *)&v59[16 * v170 + 12] = v170 ^ *((_WORD *)Src + 70);
    v171 = (unsigned __int16)v170;
    if ( !v56 )
    {
      v59[10] = 0;
      v59[15] = 0;
      v172 = Src + 336;
      if ( *((_QWORD *)Src + 39) )
        v173 = (_QWORD *)RtlpFindEntry(Src, (unsigned __int16)v170);
      else
        v173 = (_QWORD *)*v172;
      while ( v172 != v173 )
      {
        if ( *((_DWORD *)Src + 31) )
        {
          v180 = *((_DWORD *)v173 - 2);
          v258 = v180;
          if ( (v180 & *((_DWORD *)Src + 31)) != 0 )
          {
            v181 = v180 ^ *((_DWORD *)Src + 34);
            v258 = v181;
          }
          else
          {
            LOWORD(v181) = v180;
          }
        }
        else
        {
          LOWORD(v181) = *((_WORD *)v173 - 4);
        }
        if ( v171 <= (unsigned __int16)v181 )
          break;
        v173 = (_QWORD *)*v173;
      }
      v174 = v59 + 16;
      v175 = (__int64 *)v173[1];
      if ( (_QWORD *)*v175 == v173 )
      {
        *v174 = v173;
        *((_QWORD *)v59 + 3) = v175;
        *v175 = (__int64)v174;
        v173[1] = v174;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v173, 0, *v175, 0LL);
      }
      *((_QWORD *)Src + 24) += *((unsigned __int16 *)v59 + 4);
      v176 = (__int64 **)*((_QWORD *)Src + 39);
      if ( v176 )
      {
        v177 = *((unsigned __int16 *)v59 + 4);
        while ( 1 )
        {
          v178 = *((unsigned int *)v176 + 2);
          if ( v177 < v178 )
            break;
          if ( !*v176 )
          {
            v179 = v178 - 1;
            v241 = (unsigned int)(v178 - 1);
            goto LABEL_370;
          }
          v176 = (__int64 **)*v176;
        }
        v179 = *((unsigned __int16 *)v59 + 4);
        v241 = *((unsigned __int16 *)v59 + 4);
LABEL_370:
        LOBYTE(v178) = 1;
        RtlpHeapAddListEntry((_DWORD)Src, (_DWORD)v176, v178, (_DWORD)v59 + 16, v179, v177);
      }
      v53 = v206;
      if ( !*((_DWORD *)Src + 31) )
        goto LABEL_372;
LABEL_328:
      v59[11] = v59[8] ^ v59[9] ^ v59[10];
      *((_DWORD *)v59 + 2) ^= *((_DWORD *)Src + 34);
LABEL_329:
      a4 = v261;
      goto LABEL_113;
    }
    v59[10] &= 0xF0u;
    v59[15] = 0;
    if ( (Src[112] & 0x40) == 0 )
    {
LABEL_384:
      v182 = Src + 336;
      if ( *((_QWORD *)Src + 39) )
        v183 = (_QWORD *)RtlpFindEntry(Src, v171);
      else
        v183 = (_QWORD *)*v182;
      while ( v182 != v183 )
      {
        if ( *((_DWORD *)Src + 31) )
        {
          v184 = *((_DWORD *)v183 - 2);
          v259 = v184;
          if ( (v184 & *((_DWORD *)Src + 31)) != 0 )
          {
            v185 = v184 ^ *((_DWORD *)Src + 34);
            v259 = v185;
          }
          else
          {
            LOWORD(v185) = v184;
          }
        }
        else
        {
          LOWORD(v185) = *((_WORD *)v183 - 4);
        }
        if ( v171 <= (unsigned __int16)v185 )
          break;
        v183 = (_QWORD *)*v183;
      }
      v153 = (unsigned __int64 *)(v59 + 16);
      v186 = (__int64 *)v183[1];
      if ( (_QWORD *)*v186 == v183 )
      {
        *v153 = (unsigned __int64)v183;
        *((_QWORD *)v59 + 3) = v186;
        *v186 = (__int64)v153;
        v183[1] = v153;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v183, 0, *v186, 0LL);
      }
      *((_QWORD *)Src + 24) += *((unsigned __int16 *)v59 + 4);
      v155 = *((_QWORD *)Src + 39);
      if ( v155 )
      {
        v156 = *((unsigned __int16 *)v59 + 4);
        while ( 1 )
        {
          Entry = *(unsigned int *)(v155 + 8);
          if ( v156 < Entry )
            break;
          if ( !*(_QWORD *)v155 )
          {
            v158 = Entry - 1;
            v243 = (unsigned int)(Entry - 1);
            goto LABEL_326;
          }
          v155 = *(_QWORD *)v155;
        }
        v158 = *((unsigned __int16 *)v59 + 4);
        v243 = *((unsigned __int16 *)v59 + 4);
LABEL_326:
        LOBYTE(Entry) = 1;
        RtlpHeapAddListEntry((_DWORD)Src, v155, Entry, (_DWORD)v153, v158, v156);
      }
LABEL_327:
      v53 = v206;
      if ( *((_DWORD *)Src + 31) )
        goto LABEL_328;
      goto LABEL_329;
    }
    v195 = v59 + 32;
    v242 = v59 + 32;
    v196 = (16 * v171 - 32) >> 2;
    v226 = v196;
    if ( v196 )
    {
      if ( ((unsigned __int8)v195 & 4) != 0 )
      {
        *v195 = -17891602;
        v226 = --v196;
        if ( v196 )
        {
          v195 = v59 + 36;
          v242 = v59 + 36;
          goto LABEL_457;
        }
      }
      else
      {
LABEL_457:
        memset64(v195, 0xFEEEFEEEFEEEFEEEuLL, v196 >> 1);
        if ( (v196 & 1) != 0 )
          v195[v196 - 1] = -17891602;
      }
    }
    v59[10] |= 4u;
    goto LABEL_384;
  }
  RtlpInsertFreeBlock(Src, v59);
  v53 = v206;
  a4 = v261;
LABEL_113:
  v213 = v218 + 16;
  v82 = (unsigned __int16 *)(v218 + 8);
  a2 = *((unsigned __int16 *)v218 + 4);
  a3 = (unsigned __int16)a2;
  LOWORD(a3) = BYTE1(a2);
  v83 = 16 * a2;
  v244 = 16 * a2;
  if ( (v218[15] & 0x3F) == 0x3F )
  {
    v83 -= 8LL;
    v244 = v83;
  }
  if ( v53 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      v218[11] = BYTE1(a2) ^ a2 ^ v26[10];
      *(_DWORD *)v82 ^= *((_DWORD *)Src + 34);
    }
    if ( v205 )
    {
      if ( (*((_DWORD *)Src + 29) & 0x1000000) == 0 )
      {
        ++*((_DWORD *)Src + 160);
        v92 = *((_DWORD *)Src + 162);
        if ( *((_DWORD *)Src + 160) > v92 )
        {
          *((_DWORD *)Src + 160) = 0;
          v114 = *((_QWORD *)Src + 72) - 16LL * *((_QWORD *)Src + 24);
          if ( v114 > *((_QWORD *)Src + 84) )
            *((_QWORD *)Src + 84) = v114;
          *((_QWORD *)Src + 85) = v114;
        }
        if ( ++*((_DWORD *)Src + 163) >= 0x1000u )
        {
          if ( Src[418] == 2 && *((_DWORD *)Src + 164) > 0x10u )
            v159 = 256;
          else
            v159 = 16;
          if ( *((_DWORD *)Src + 161) > v159 && v92 < 0x10000 )
            *((_DWORD *)Src + 162) = 2 * v92;
          *((_DWORD *)Src + 161) = 0;
          *((_DWORD *)Src + 163) = 0;
        }
      }
      RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      v205 = 0;
    }
    if ( (v260 & 8) != 0 )
      memset(v213, 0, v83 - 8);
    goto LABEL_484;
  }
  if ( (v260 & 8) != 0 )
  {
    memset(v213, 0, v83 - 8);
    goto LABEL_294;
  }
  if ( (Src[112] & 0x40) != 0 )
  {
    a3 = (unsigned __int64)v213;
    v245 = (unsigned __int64)v213;
    a2 = (a4 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    v227 = a2;
    if ( a2 )
    {
      if ( ((unsigned __int8)v213 & 4) != 0 )
      {
        *(_DWORD *)v213 = -1163005939;
        v227 = --a2;
        if ( a2 )
        {
          a3 += 4LL;
          v245 = a3;
          goto LABEL_308;
        }
      }
      else
      {
LABEL_308:
        memset64((void *)a3, 0xBAADF00DBAADF00DuLL, a2 >> 1);
        if ( (a2 & 1) != 0 )
          *(_DWORD *)(a3 + 4 * a2 - 4) = -1163005939;
      }
    }
  }
LABEL_294:
  if ( (Src[112] & 0x20) != 0 )
  {
    v197 = (char *)v213;
    a2 = 0xABABABABABABABABuLL;
    *(_QWORD *)((char *)v213 + v261) = 0xABABABABABABABABuLL;
    *(_QWORD *)&v197[v261 + 8] = 0xABABABABABABABABuLL;
    v218[10] |= 4u;
  }
  v146 = v218;
  v218[11] = 0;
  if ( (v146[10] & 2) != 0 )
  {
    ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v146);
    v246 = ExtraStuffPointer;
    *ExtraStuffPointer = 0LL;
    ExtraStuffPointer[1] = 0LL;
    if ( (*((_DWORD *)Src + 28) & 0x8000000) != 0 )
      *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1LL);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *((_WORD *)v246 + 1) = RtlpUpdateTagEntry((_DWORD)Src, (v260 >> 18) & 0xFFF, 0, *v82, 0);
  }
  else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v146[11] = RtlpUpdateTagEntry((_DWORD)Src, (unsigned __int8)(v260 >> 18), 0, *v82, 0);
  }
  if ( *((_DWORD *)Src + 31) )
  {
    v146[11] = *(_BYTE *)v82 ^ *((_BYTE *)v82 + 1) ^ *((_BYTE *)v82 + 2);
    *(_DWORD *)v82 ^= *((_DWORD *)Src + 34);
  }
LABEL_484:
  if ( v205 )
  {
    if ( !v207 && v213 )
      RtlpUpdateHeapWatermarks(Src, a2, a3, a4);
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v200 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v200 = 2147353480LL;
  v201 = v213;
  if ( *(_BYTE *)v200 && v213 )
  {
    if ( v207 )
      RtlpHeapLogRangeReserve(Src, v207 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v207 + 40), a4);
  }
  return (__int64)v201;
}
