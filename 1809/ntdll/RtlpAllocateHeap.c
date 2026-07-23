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
 *     RtlpUpdateHeapRates @ 0x18007F5EC (RtlpUpdateHeapRates.c)
 *     RtlpUpdateHeapWatermarks @ 0x180088C44 (RtlpUpdateHeapWatermarks.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A0600 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1800A4B00 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800F3FEC (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x180103F14 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180105B44 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180105DCC (RtlpLogHeapExtendEvent.c)
 *     RtlDebugAllocateHeap @ 0x1801071A0 (RtlDebugAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 */

void *__fastcall RtlpAllocateHeap(
        PRTL_CRITICAL_SECTION *BaseAddress,
        unsigned __int64 a2,
        unsigned __int64 DebugInfo,
        ULONG_PTR a4,
        __int64 **a5,
        _DWORD *a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v7; // r13
  unsigned int v8; // r14d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r12
  PRTL_CRITICAL_SECTION v12; // rcx
  struct _TEB *v13; // rax
  signed __int8 v14; // cf
  void *UniqueThread; // rax
  PRTL_CRITICAL_SECTION i; // r15
  unsigned __int64 v17; // rax
  __int64 LockSemaphore_low; // rdx
  __int64 v19; // r13
  __int64 *v20; // r14
  __int64 *SpinCount; // rsi
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
  PRTL_CRITICAL_SECTION v33; // rdi
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
  unsigned __int64 v50; // rdx
  char *v51; // rdi
  char v52; // r14
  int v53; // r10d
  unsigned __int64 v54; // rdi
  ULONG_PTR v55; // rcx
  char v56; // r15
  unsigned __int8 v57; // al
  PRTL_CRITICAL_SECTION *v58; // r9
  char *v59; // rsi
  PRTL_CRITICAL_SECTION *v60; // rdx
  unsigned __int64 v61; // r14
  char *v62; // r14
  unsigned __int64 v63; // r12
  _QWORD *v64; // rax
  PRTL_CRITICAL_SECTION v65; // r15
  unsigned __int64 v66; // rax
  unsigned int LockSemaphore; // r14d
  __int64 v68; // r14
  _QWORD *v69; // rdi
  _QWORD *v70; // rdx
  _QWORD *v71; // rax
  _QWORD *v72; // r15
  __int64 *v73; // rax
  PRTL_CRITICAL_SECTION v74; // rdi
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // rax
  int v77; // ecx
  unsigned int v78; // r14d
  __int64 v79; // rax
  __int64 v80; // r8
  SIZE_T v81; // rdx
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
  PRTL_CRITICAL_SECTION v100; // rcx
  unsigned __int16 LFHContext; // ax
  int v102; // r13d
  __int64 *v103; // rdi
  int v104; // edx
  __int64 v105; // rsi
  __int64 *v106; // r14
  __int64 v107; // rax
  __int64 v108; // r9
  PRTL_CRITICAL_SECTION v109; // rdx
  unsigned __int64 v110; // rcx
  unsigned __int64 LockCount; // rax
  unsigned int v112; // eax
  unsigned __int64 v113; // rcx
  int v114; // ecx
  __int64 v115; // rdi
  _QWORD *m; // r8
  int v117; // r14d
  int v118; // r9d
  __int64 *j; // r12
  int v120; // edi
  ULONG_PTR v121; // rcx
  _QWORD *v122; // rax
  _QWORD *v123; // r8
  __int64 v124; // rdi
  __int64 *v125; // rsi
  __int64 v126; // rax
  __int64 v127; // r9
  PRTL_CRITICAL_SECTION v128; // rdx
  unsigned __int64 v129; // rcx
  unsigned __int64 v130; // rax
  unsigned int v131; // eax
  int v132; // r9d
  __int64 v133; // rdi
  ULONG Protect; // esi
  __int64 v135; // rdi
  __int64 v136; // rcx
  __int64 v137; // rcx
  __int64 v138; // rdi
  __int64 v139; // rcx
  _RTL_CRITICAL_SECTION *v140; // rcx
  unsigned __int64 *v141; // rax
  SIZE_T v142; // rsi
  SIZE_T v143; // r15
  char *v144; // r14
  _QWORD *ExtraStuffPointer; // rdi
  unsigned __int64 v146; // r14
  unsigned __int64 *v147; // rdi
  unsigned __int64 Entry; // r8
  int v149; // ecx
  int v150; // eax
  unsigned __int64 *v151; // rdi
  __int64 *v152; // rax
  PRTL_CRITICAL_SECTION v153; // rdx
  unsigned __int64 v154; // rcx
  unsigned __int64 v155; // rax
  unsigned int v156; // eax
  unsigned int v157; // eax
  int v158; // edx
  _QWORD *v159; // r8
  __int64 v160; // r12
  __int64 *v161; // rcx
  __int64 v162; // rax
  __int64 v163; // r9
  PRTL_CRITICAL_SECTION v164; // rdx
  unsigned __int64 v165; // r9
  unsigned __int64 v166; // rcx
  __int64 v167; // rax
  unsigned __int64 v168; // r8
  unsigned __int64 v169; // r14
  _QWORD *v170; // rdi
  _QWORD *v171; // r8
  _QWORD *v172; // rdi
  __int64 *v173; // rax
  PRTL_CRITICAL_SECTION v174; // rdx
  unsigned __int64 v175; // rcx
  unsigned __int64 v176; // r8
  int v177; // eax
  int v178; // ecx
  int v179; // eax
  _QWORD *v180; // rdi
  _QWORD *v181; // r8
  int v182; // ecx
  int v183; // eax
  __int64 *v184; // rax
  struct _TEB *v185; // rdi
  char v186; // al
  SIZE_T v187; // r12
  struct _TEB *v188; // rdi
  struct _TEB *v189; // rdi
  _DWORD *v190; // r8
  unsigned __int64 v191; // rdx
  _DWORD *v192; // r8
  unsigned __int64 v193; // rdx
  char *v194; // rax
  __int16 updated; // ax
  _DWORD *SharedData; // rcx
  __int64 v197; // rcx
  void *v198; // rdi
  __int64 v200; // rax
  ULONG_PTR v201; // r12
  char v202; // [rsp+30h] [rbp-238h]
  int v203; // [rsp+34h] [rbp-234h]
  PVOID v204; // [rsp+38h] [rbp-230h] BYREF
  char v205; // [rsp+40h] [rbp-228h]
  __int64 v206; // [rsp+48h] [rbp-220h]
  int v207; // [rsp+50h] [rbp-218h]
  __int64 v208; // [rsp+58h] [rbp-210h]
  int v209; // [rsp+60h] [rbp-208h]
  void *v210; // [rsp+68h] [rbp-200h]
  ULONG_PTR v211; // [rsp+70h] [rbp-1F8h]
  SIZE_T v212; // [rsp+78h] [rbp-1F0h]
  unsigned int v213; // [rsp+80h] [rbp-1E8h]
  unsigned int v214; // [rsp+84h] [rbp-1E4h]
  char *v215; // [rsp+88h] [rbp-1E0h]
  unsigned int v216; // [rsp+90h] [rbp-1D8h]
  char *v217; // [rsp+98h] [rbp-1D0h]
  int v218; // [rsp+A0h] [rbp-1C8h]
  __int64 k; // [rsp+A8h] [rbp-1C0h]
  __int64 *v220; // [rsp+B0h] [rbp-1B8h]
  __int64 *v221; // [rsp+B8h] [rbp-1B0h]
  unsigned __int64 v222; // [rsp+C0h] [rbp-1A8h]
  unsigned __int64 v223; // [rsp+C8h] [rbp-1A0h]
  unsigned __int64 v224; // [rsp+D0h] [rbp-198h]
  unsigned __int64 v225; // [rsp+D8h] [rbp-190h]
  ULONG_PTR RegionSize; // [rsp+E0h] [rbp-188h] BYREF
  PVOID BaseAddressa; // [rsp+E8h] [rbp-180h] BYREF
  __int64 v228; // [rsp+F0h] [rbp-178h]
  unsigned int *v229; // [rsp+F8h] [rbp-170h]
  __int64 v230; // [rsp+100h] [rbp-168h]
  __int64 v231; // [rsp+108h] [rbp-160h]
  SIZE_T v232; // [rsp+110h] [rbp-158h]
  unsigned int *v233; // [rsp+118h] [rbp-150h]
  __int64 v234; // [rsp+120h] [rbp-148h]
  _QWORD *v235; // [rsp+128h] [rbp-140h]
  __int64 v236; // [rsp+130h] [rbp-138h]
  SIZE_T v237; // [rsp+138h] [rbp-130h]
  __int64 v238; // [rsp+140h] [rbp-128h]
  _QWORD *v239; // [rsp+148h] [rbp-120h]
  __int64 v240; // [rsp+150h] [rbp-118h]
  __int64 v241; // [rsp+158h] [rbp-110h]
  unsigned __int64 v242; // [rsp+160h] [rbp-108h]
  _QWORD *v243; // [rsp+168h] [rbp-100h]
  int v244; // [rsp+170h] [rbp-F8h]
  _WORD *v245; // [rsp+178h] [rbp-F0h]
  unsigned __int64 v246; // [rsp+180h] [rbp-E8h]
  int v247; // [rsp+190h] [rbp-D8h]
  int v248; // [rsp+1A0h] [rbp-C8h]
  int v249; // [rsp+1B0h] [rbp-B8h]
  int v250; // [rsp+1C0h] [rbp-A8h]
  int v251; // [rsp+1D0h] [rbp-98h]
  int v252; // [rsp+1E0h] [rbp-88h]
  int v253; // [rsp+1F0h] [rbp-78h]
  int v254; // [rsp+200h] [rbp-68h]
  int v255; // [rsp+210h] [rbp-58h]
  int v256; // [rsp+220h] [rbp-48h]
  unsigned int v257; // [rsp+278h] [rbp+10h]
  unsigned __int64 v258; // [rsp+280h] [rbp+18h]
  ULONG_PTR v259; // [rsp+288h] [rbp+20h] BYREF

  v259 = a4;
  v258 = DebugInfo;
  v257 = a2;
  v7 = DebugInfo;
  v8 = a2;
  v203 = 1;
  v202 = 0;
  v210 = 0LL;
  v204 = 0LL;
  v209 = 0;
  v10 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || DebugInfo >= 0x80000000 )
  {
    v203 = 0;
    *a6 = 4;
    if ( DebugInfo > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return (void *)RtlDebugAllocateHeap(BaseAddress);
    if ( DebugInfo )
      v200 = DebugInfo;
    else
      v200 = 1LL;
    v201 = (unsigned __int64)BaseAddress[33] & ((unsigned __int64)BaseAddress[32] + v200);
    if ( v201 < 0x20 )
      v201 = 32LL;
    v259 = v201;
    v6 = (unsigned int)a2 >> 4;
    LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    LODWORD(v211) = v6;
    if ( (a2 & 0x3C000100) != 0 || BaseAddress[41] )
    {
      LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      LODWORD(v211) = v6;
      v201 += 16LL;
      v259 = v201;
    }
    v11 = v201 >> 4;
    v208 = v11;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v211) = v6;
    v11 = a4 >> 4;
    v208 = a4 >> 4;
    if ( v10 < 2 )
    {
      v259 += 16LL;
      v11 = 2LL;
      v208 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v211) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    v12 = BaseAddress[44];
    v13 = NtCurrentTeb();
    v14 = _interlockedbittestandreset(&v12->LockCount, 0);
    UniqueThread = v13->ClientId.UniqueThread;
    if ( v14 )
    {
      v12->OwningThread = UniqueThread;
      v12->RecursionCount = 1;
    }
    else
    {
      if ( v12->OwningThread != UniqueThread )
      {
        if ( byte_180165408 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741420;
          v188 = NtCurrentTeb();
          v188->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          goto LABEL_484;
        }
        v209 = 1;
        RtlEnterCriticalSection(BaseAddress[44]);
        RtlpUpdateHeapRates(BaseAddress, 1LL);
        goto LABEL_11;
      }
      ++v12->RecursionCount;
    }
    ++*((_DWORD *)BaseAddress + 154);
LABEL_11:
    v202 = 1;
    if ( ((_DWORD)BaseAddress[15] & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(BaseAddress);
  }
  if ( v11 > *((unsigned int *)BaseAddress + 37) )
  {
    if ( ((_BYTE)BaseAddress[14] & 2) != 0 )
    {
      v259 += 56LL;
      v133 = (RtlpHeapGenerateRandomValue32() & 0xF) << 12;
      BaseAddressa = 0LL;
      RegionSize = v133 + v259 + 4096;
      Protect = RtlpGetHeapProtection(BaseAddress, 1LL);
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
        goto LABEL_484;
      v204 = (char *)BaseAddressa + v133;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v259 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           (char *)BaseAddress[72] - (char *)BaseAddress[83],
                           BaseAddress,
                           BaseAddress + 47)
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v204, 0LL, &v259, 0x1000u, Protect) >= 0 )
      {
        *((_WORD *)v204 + 28) = v259 - v7;
        *((_BYTE *)v204 + 58) = v6 | 2;
        *((_QWORD *)v204 + 4) = v259;
        *((_QWORD *)v204 + 5) = RegionSize;
        *((_BYTE *)v204 + 63) = 4;
        BaseAddress[74] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[74] + v259);
        v135 = 2147353472LL;
        if ( RtlGetCurrentServiceSessionId() )
          v136 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v136 = 2147353472LL;
        if ( *(_BYTE *)v136 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapCommit(BaseAddress, v204, v259, 9LL);
        if ( RtlGetCurrentServiceSessionId() )
          v137 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v137 = 2147353472LL;
        if ( *(_BYTE *)v137 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v135 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapExtendEvent(
            (int)BaseAddress,
            (int)v204,
            v259,
            16 * (unsigned int)BaseAddress[24],
            (HANDLE)*(unsigned __int8 *)v135);
        }
        v138 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v139 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v139 = 2147353482LL;
        if ( *(_BYTE *)v139 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v138 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapExtendEvent(
            (int)BaseAddress,
            (int)v204,
            v259,
            16 * (unsigned int)BaseAddress[24],
            (HANDLE)*(unsigned __int8 *)v138);
        }
        if ( ((_DWORD)BaseAddress[14] & 0x8000000) != 0 )
          *((_WORD *)v204 + 8) = RtlLogStackBackTraceEx(1LL);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          updated = RtlpUpdateTagEntry(
                      (_DWORD)BaseAddress,
                      (unsigned __int8)(v8 >> 18),
                      0,
                      *((_QWORD *)v204 + 4) >> 4,
                      1);
          *((_WORD *)v204 + 9) = updated;
        }
        v140 = (_RTL_CRITICAL_SECTION *)v204;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *((_BYTE *)v204 + 59) = *((_BYTE *)v204 + 56) ^ *((_BYTE *)v204 + 57) ^ *((_BYTE *)v204 + 58);
          LODWORD(v140[1].OwningThread) ^= *((_DWORD *)BaseAddress + 34);
          v140 = (_RTL_CRITICAL_SECTION *)v204;
        }
        DebugInfo = (unsigned __int64)(BaseAddress + 34);
        v141 = (unsigned __int64 *)BaseAddress[35];
        a2 = *v141;
        if ( (PRTL_CRITICAL_SECTION *)*v141 == BaseAddress + 34 )
        {
          v140->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)DebugInfo;
          *(_QWORD *)&v140->LockCount = v141;
          *v141 = (unsigned __int64)v140;
          BaseAddress[35] = v140;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, DebugInfo, 0, a2, 0LL);
        }
        v210 = (char *)v204 + 64;
        goto LABEL_484;
      }
      v204 = 0LL;
      ++*((_DWORD *)BaseAddress + 158);
    }
    goto LABEL_483;
  }
  if ( (v8 & 0x800000) == 0 )
  {
    if ( v10 >= *((unsigned __int16 *)BaseAddress + 216) )
    {
      if ( v7 > RtlpLargestLfhBlock
        || *((_BYTE *)BaseAddress + 418) == 2 && BaseAddress[51]
        || *((_BYTE *)BaseAddress + 419) != 2 )
      {
        goto LABEL_19;
      }
LABEL_331:
      *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
      goto LABEL_19;
    }
    if ( v7 <= RtlpLargestLfhBlock )
    {
      v95 = v10 >> 3;
      v96 = v10 & 7;
      if ( ((unsigned __int8)(1 << (v10 & 7)) & *((_BYTE *)BaseAddress + (v10 >> 3) + 434)) == 0 )
      {
        v97 = (unsigned __int16 *)((char *)BaseAddress[53] + 2 * v10);
        v245 = v97;
        v98 = *v97 + 33;
        *v97 = v98;
        if ( !v209 && (v98 & 0x1Fu) <= 0x10 )
        {
          if ( v98 <= 0xFF00u )
            goto LABEL_19;
          v7 = v258;
        }
        if ( v7 )
          v99 = v7;
        else
          v99 = 1LL;
        if ( *((_BYTE *)BaseAddress + 418) == 2 )
          v100 = BaseAddress[51];
        else
          v100 = 0LL;
        LFHContext = RtlpGetLFHContext(v100, v99);
        if ( LFHContext != 0xFFFF )
        {
          *v97 = LFHContext;
          *((_BYTE *)BaseAddress + v95 + 434) |= 1 << v96;
          ++*((_DWORD *)BaseAddress + 164);
          goto LABEL_19;
        }
        if ( *((_BYTE *)BaseAddress + 418) != 2 || !BaseAddress[51] )
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
      v217 = (char *)(v103 - 2);
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v104 = *((_DWORD *)v26 + 2) ^ *((_DWORD *)BaseAddress + 34);
        *((_DWORD *)v26 + 2) = v104;
        if ( HIBYTE(v104) != ((unsigned __int8)v104 ^ (unsigned __int8)(BYTE1(v104) ^ BYTE2(v104))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v103 - 2);
      }
      v105 = *v103;
      v106 = (__int64 *)*((_QWORD *)v26 + 3);
      v107 = *v106;
      v108 = *(_QWORD *)(*v103 + 8);
      if ( *v106 != v108 || (__int64 *)v107 != v103 )
      {
        RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v103, v108, v107, 0LL);
        goto LABEL_419;
      }
      BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] - *((unsigned __int16 *)v26 + 4));
      v109 = BaseAddress[39];
      if ( v109 )
      {
        v110 = *((unsigned __int16 *)v26 + 4);
        while ( 1 )
        {
          LockCount = (unsigned int)v109->LockCount;
          if ( v110 < LockCount )
          {
            v112 = *((unsigned __int16 *)v26 + 4);
            v228 = *((unsigned __int16 *)v26 + 4);
            goto LABEL_176;
          }
          DebugInfo = (unsigned __int64)v109->DebugInfo;
          if ( !v109->DebugInfo )
            break;
          v109 = (PRTL_CRITICAL_SECTION)v109->DebugInfo;
        }
        v112 = LockCount - 1;
        v228 = v112;
LABEL_176:
        LOBYTE(DebugInfo) = 1;
        RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v109, DebugInfo, (_DWORD)v103, v112, v110);
      }
      *v106 = v105;
      *(_QWORD *)(v105 + 8) = v106;
      v51 = v26 + 10;
      if ( (v26[10] & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(BaseAddress) )
      {
        RtlpDeCommitFreeBlock(BaseAddress);
LABEL_419:
        NtCurrentTeb()->LastStatusValue = -1073741801;
        v189 = NtCurrentTeb();
        v189->LastErrorValue = RtlNtStatusToDosError(-1073741801);
        goto LABEL_484;
      }
      goto LABEL_74;
    }
  }
  v221 = (__int64 *)(BaseAddress + 42);
  for ( i = BaseAddress[39]; ; i = (PRTL_CRITICAL_SECTION)i->DebugInfo )
  {
    v17 = (unsigned int)i->LockCount;
    if ( v11 < v17 )
    {
      v225 = v11;
      LockSemaphore_low = (unsigned int)v11;
      goto LABEL_23;
    }
    if ( !i->DebugInfo )
      break;
  }
  LockSemaphore_low = (unsigned int)(v17 - 1);
  v225 = LockSemaphore_low;
LABEL_23:
  v206 = LockSemaphore_low;
  while ( 1 )
  {
    v19 = (unsigned int)(LockSemaphore_low - LODWORD(i->LockSemaphore));
    v20 = 0LL;
    SpinCount = (__int64 *)i->SpinCount;
    v22 = (__int64 *)SpinCount[1];
    if ( SpinCount == v22 )
    {
      v20 = (__int64 *)i->SpinCount;
    }
    else
    {
      v23 = *((_DWORD *)v22 - 2);
      v247 = v23;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v23 ^= *((_DWORD *)BaseAddress + 34);
        v247 = v23;
        if ( HIBYTE(v23) != ((unsigned __int8)v23 ^ (unsigned __int8)(BYTE1(v23) ^ BYTE2(v23))) )
        {
          RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)v22 - 16, 0, 0LL, 0LL);
          LODWORD(LockSemaphore_low) = v206;
        }
      }
      if ( (int)(v11 - (unsigned __int16)v23) > 0 )
      {
        v20 = SpinCount;
      }
      else
      {
        v24 = *SpinCount - 16;
        v25 = *(_DWORD *)(v24 + 8);
        v248 = v25;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v25 ^= *((_DWORD *)BaseAddress + 34);
          v248 = v25;
          if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(BYTE1(v25) ^ BYTE2(v25))) )
          {
            RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v24, 0, 0LL, 0LL);
            LODWORD(LockSemaphore_low) = v206;
          }
        }
        if ( (int)(v11 - (unsigned __int16)v25) > 0 )
        {
          if ( !i->DebugInfo && (_DWORD)LockSemaphore_low == i->LockCount - 1 )
          {
            if ( i->RecursionCount )
              v19 = (unsigned int)(2 * v19);
            for ( j = *(__int64 **)(*(_QWORD *)&i[1].LockCount + 8 * v19); SpinCount != j; j = (__int64 *)*j )
            {
              v120 = *((_DWORD *)j - 2);
              v249 = v120;
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v120 ^= *((_DWORD *)BaseAddress + 34);
                v249 = v120;
                if ( HIBYTE(v120) != ((unsigned __int8)v120 ^ (unsigned __int8)(BYTE1(v120) ^ BYTE2(v120))) )
                  RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)j - 16, 0, 0LL, 0LL);
              }
              if ( (int)(v208 - (unsigned __int16)v120) <= 0 )
              {
                v20 = j;
                break;
              }
            }
            v11 = v208;
          }
          else
          {
            v37 = (unsigned int)v19 >> 5;
            v213 = (unsigned int)v19 >> 5;
            v38 = ((unsigned int)(i->LockCount - LODWORD(i->LockSemaphore)) >> 5) - 1;
            v39 = (unsigned int *)(&i[1].DebugInfo->Type + 2 * v37);
            v229 = v39;
            v40 = *v39 & (-1 << (v19 & 0x1F));
            while ( !v40 )
            {
              if ( (unsigned int)v37 > v38 )
                goto LABEL_233;
              v229 = ++v39;
              v40 = *v39;
              LODWORD(v37) = v37 + 1;
              v213 = v37;
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
            v213 = v42;
            if ( i->RecursionCount )
              v42 = (unsigned int)(2 * v42);
            v20 = *(__int64 **)(*(_QWORD *)&i[1].LockCount + 8 * v42);
          }
        }
        else
        {
          v20 = (__int64 *)*SpinCount;
        }
      }
    }
    if ( v20 )
      break;
LABEL_233:
    i = (PRTL_CRITICAL_SECTION)i->DebugInfo;
    LockSemaphore_low = LODWORD(i->LockSemaphore);
    v206 = LockSemaphore_low;
    v225 = LockSemaphore_low;
  }
  if ( v221 == v20 )
  {
LABEL_236:
    v122 = (_QWORD *)RtlpExtendHeap(BaseAddress);
    v26 = (char *)v122;
    v217 = (char *)v122;
    if ( v122 )
    {
      v123 = v122 + 2;
      v124 = v122[2];
      v125 = (__int64 *)v122[3];
      v126 = *v125;
      v127 = *(_QWORD *)(v124 + 8);
      if ( *v125 != v127 || (_QWORD *)v126 != v123 )
      {
        RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v123, v127, v126, 0LL);
        goto LABEL_484;
      }
      BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] - *((unsigned __int16 *)v26 + 4));
      v128 = BaseAddress[39];
      if ( v128 )
      {
        v129 = *((unsigned __int16 *)v26 + 4);
        while ( 1 )
        {
          v130 = (unsigned int)v128->LockCount;
          if ( v129 < v130 )
            break;
          if ( !v128->DebugInfo )
          {
            v131 = v130 - 1;
            v231 = v131;
            goto LABEL_244;
          }
          v128 = (PRTL_CRITICAL_SECTION)v128->DebugInfo;
        }
        v131 = *((unsigned __int16 *)v26 + 4);
        v231 = *((unsigned __int16 *)v26 + 4);
LABEL_244:
        v132 = (int)v123;
        LOBYTE(v123) = 1;
        RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v128, (_DWORD)v123, v132, v131, v129);
      }
      *v125 = v124;
      *(_QWORD *)(v124 + 8) = v125;
      goto LABEL_72;
    }
LABEL_483:
    v210 = 0LL;
    goto LABEL_484;
  }
  v26 = (char *)(v20 - 2);
  v217 = (char *)(v20 - 2);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v27 = *((_DWORD *)v26 + 2) ^ *((_DWORD *)BaseAddress + 34);
    *((_DWORD *)v26 + 2) = v27;
    if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v20 - 2);
  }
  v28 = *((unsigned __int16 *)v26 + 4);
  if ( v28 < v11 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v26[11] = BYTE1(v28) ^ v28 ^ v26[10];
      *((_DWORD *)v26 + 2) ^= *((_DWORD *)BaseAddress + 34);
    }
    goto LABEL_236;
  }
  v29 = *v20;
  v208 = v29;
  v30 = (__int64 *)*((_QWORD *)v26 + 3);
  v212 = (SIZE_T)v30;
  v31 = *v30;
  v32 = *(_QWORD *)(v29 + 8);
  if ( *v30 != v32 || (__int64 *)v31 != v20 )
  {
    RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v20, v32, v31, 0LL);
    goto LABEL_484;
  }
  BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] - v28);
  v33 = BaseAddress[39];
  if ( !v33 )
    goto LABEL_71;
  v34 = *((unsigned __int16 *)v26 + 4);
  while ( 1 )
  {
    v35 = (unsigned int)v33->LockCount;
    if ( v34 < v35 )
      break;
    if ( !v33->DebugInfo )
    {
      v36 = v35 - 1;
      v230 = (unsigned int)(v35 - 1);
      goto LABEL_60;
    }
    v33 = (PRTL_CRITICAL_SECTION)v33->DebugInfo;
  }
  v230 = *((unsigned __int16 *)v26 + 4);
  v36 = v34;
LABEL_60:
  v206 = v34;
  v43 = v36 - LODWORD(v33->LockSemaphore);
  if ( v33->RecursionCount )
    v44 = 2 * v43;
  else
    v44 = v43;
  v206 = 8 * v44;
  v45 = (__int64 *)(8 * v44 + *(_QWORD *)&v33[1].LockCount);
  v46 = (__int64 *)*v45;
  --LODWORD(v33->OwningThread);
  v47 = v33->LockCount;
  v48 = v47 - 1;
  if ( v36 == v47 - 1 )
    --HIDWORD(v33->OwningThread);
  if ( v46 != v20 )
    goto LABEL_71;
  v216 = v47;
  if ( !v33->DebugInfo )
  {
    --v47;
    v216 = v48;
  }
  v49 = *v20;
  v50 = v33->SpinCount;
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
      v250 = v102;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v102 ^= *((_DWORD *)BaseAddress + 34);
        v250 = v102;
        if ( HIBYTE(v102) != ((unsigned __int8)v102 ^ (unsigned __int8)(BYTE1(v102) ^ BYTE2(v102))) )
        {
          RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v49 - 16, 0, 0LL, 0LL);
          v29 = v208;
          v30 = (__int64 *)v212;
        }
      }
      if ( (_DWORD)v34 == (unsigned __int16)v102 )
      {
        *(_QWORD *)(v206 + *(_QWORD *)&v33[1].LockCount) = v49;
        v26 = v217;
        goto LABEL_71;
      }
      v26 = v217;
    }
    *(_QWORD *)(v206 + *(_QWORD *)&v33[1].LockCount) = 0LL;
  }
  *((_DWORD *)&v33[1].DebugInfo->Type + (v43 >> 5)) &= ~(1 << (v43 & 0x1F));
LABEL_71:
  *v30 = v29;
  *(_QWORD *)(v29 + 8) = v30;
LABEL_72:
  v51 = v26 + 10;
  if ( (v26[10] & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(BaseAddress) )
  {
    RtlpDeCommitFreeBlock(BaseAddress);
    goto LABEL_484;
  }
  LOBYTE(v6) = v211;
LABEL_74:
  v52 = *v51;
  v205 = *v51;
  v53 = v203;
  if ( !v203 && (v52 & 4) != 0 )
  {
    v142 = 16LL * *((unsigned __int16 *)v26 + 4) - 32;
    v232 = v142;
    if ( (v52 & 2) != 0 && v142 > 4 )
    {
      v142 -= 4LL;
      v232 = v142;
    }
    v143 = RtlCompareMemoryUlong(v26 + 32, v142, 0xFEEEFEEE);
    if ( v143 != v142 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v26 = v217;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v217, &v217[v143 + 32]);
      RtlpBreakPointHeap();
      v52 = v205;
    }
    v53 = 0;
    LOBYTE(v6) = v211;
  }
  v215 = v26;
  if ( (*v51 & 1) != 0 )
  {
    RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)v26, 0, 0LL, 0LL);
    goto LABEL_484;
  }
  *v51 = v6;
  v54 = *((unsigned __int16 *)v26 + 4) - v11;
  v246 = v54;
  *((_WORD *)v26 + 4) = v11;
  a4 = v258;
  v55 = v259 - v258;
  v208 = v259 - v258;
  if ( v259 - v258 >= 0x3F )
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
    v121 = v259 - v258 + 16;
    v211 = v121;
    if ( v121 >= 0x3F )
    {
      *(_QWORD *)&v26[16 * v11 + 16] = v121;
      v26[15] = 63;
    }
    else
    {
      v26[15] = v121;
    }
    goto LABEL_113;
  }
  if ( v53 )
  {
    v56 = 0;
    v207 = 0;
  }
  else
  {
    v56 = 1;
    v207 = 1;
  }
  v57 = v26[14];
  if ( v57 )
    v58 = (PRTL_CRITICAL_SECTION *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFF0000uLL)
                                  - ((unsigned __int64)v57 << 16)
                                  + 0x10000);
  else
    v58 = BaseAddress;
  v221 = (__int64 *)v54;
  v59 = &v26[16 * v11];
  v209 = 0;
  v59[10] = v52;
  v59[15] = 0;
  *((_WORD *)v59 + 6) = v11 ^ *((_WORD *)BaseAddress + 70);
  v60 = (PRTL_CRITICAL_SECTION *)v58[5];
  if ( v60 == v58 )
  {
    LOBYTE(v61) = 0;
  }
  else
  {
    v61 = ((unsigned __int64)(v59 - (char *)v58) >> 16) + 1;
    v246 = v61;
    if ( v61 >= 0xFE )
      RtlpLogHeapFailure(3, (_DWORD)v60, (_DWORD)v26 + 16 * v11, (_DWORD)v58, 0LL, 0LL);
  }
  v59[14] = v61;
  v59[11] = 0;
  *((_WORD *)v59 + 4) = v54;
  while ( 1 )
  {
    v62 = &v59[16 * v54];
    if ( (((unsigned __int8)v62[10] ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
    {
      *((_WORD *)v62 + 6) = v54 ^ *((_WORD *)BaseAddress + 70);
      if ( !v56 )
      {
        v63 = (unsigned __int16)v54;
        v212 = (unsigned __int16)v54;
        v59[10] = 0;
        v59[15] = 0;
        v64 = BaseAddress + 42;
        v65 = BaseAddress[39];
        if ( v65 )
        {
          while ( 1 )
          {
            v66 = (unsigned int)v65->LockCount;
            if ( (unsigned __int16)v54 < v66 )
            {
              LockSemaphore = (unsigned __int16)v54;
              k = (unsigned __int16)v54;
              goto LABEL_92;
            }
            if ( !v65->DebugInfo )
              break;
            v65 = (PRTL_CRITICAL_SECTION)v65->DebugInfo;
          }
          LockSemaphore = v66 - 1;
          for ( k = (unsigned int)(v66 - 1); ; k = LockSemaphore )
          {
LABEL_92:
            v68 = LockSemaphore - LODWORD(v65->LockSemaphore);
            v69 = 0LL;
            v70 = (_QWORD *)v65->SpinCount;
            v206 = (__int64)v70;
            v71 = (_QWORD *)v70[1];
            if ( v70 == v71 )
            {
              v69 = v70;
            }
            else
            {
              v84 = *((_DWORD *)v71 - 2);
              v251 = v84;
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v84 ^= *((_DWORD *)BaseAddress + 34);
                v251 = v84;
                if ( HIBYTE(v84) != ((unsigned __int8)v84 ^ (unsigned __int8)(BYTE1(v84) ^ BYTE2(v84))) )
                {
                  RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)v71 - 16, 0, 0LL, 0LL);
                  v70 = (_QWORD *)v206;
                }
              }
              v85 = (unsigned __int16)v84;
              v63 = v212;
              if ( (int)v212 - v85 > 0 )
              {
                v69 = v70;
              }
              else
              {
                v86 = *v70;
                v87 = *(_DWORD *)(*v70 - 8LL);
                v252 = v87;
                if ( *((_DWORD *)BaseAddress + 31) )
                {
                  v87 ^= *((_DWORD *)BaseAddress + 34);
                  v207 = v87;
                  v252 = v87;
                  if ( HIBYTE(v87) != ((unsigned __int8)v87 ^ (unsigned __int8)(BYTE1(v87) ^ BYTE2(v87))) )
                  {
                    RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v86 - 16, 0, 0LL, 0LL);
                    LOWORD(v87) = v207;
                    v70 = (_QWORD *)v206;
                  }
                }
                if ( (int)(v212 - (unsigned __int16)v87) <= 0 )
                {
                  v69 = (_QWORD *)*v70;
                }
                else if ( v65->DebugInfo || (_DWORD)k != v65->LockCount - 1 )
                {
                  v88 = (unsigned int)v68 >> 5;
                  v214 = (unsigned int)v68 >> 5;
                  v89 = ((unsigned int)(v65->LockCount - LODWORD(v65->LockSemaphore)) >> 5) - 1;
                  v90 = (unsigned int *)(&v65[1].DebugInfo->Type + 2 * v88);
                  v233 = v90;
                  v91 = *v90 & (-1 << (v68 & 0x1F));
                  while ( !v91 )
                  {
                    if ( (unsigned int)v88 > v89 )
                      goto LABEL_249;
                    v233 = ++v90;
                    v91 = *v90;
                    LODWORD(v88) = v88 + 1;
                    v214 = v88;
                  }
                  if ( (_WORD)v91 )
                  {
                    if ( (_BYTE)v91 )
                      v114 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v91];
                    else
                      v114 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v91)] + 8;
                  }
                  else if ( (v91 & 0xFF0000) != 0 )
                  {
                    v114 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v91)] + 16;
                  }
                  else
                  {
                    v114 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v91 >> 24] + 24;
                  }
                  v115 = (unsigned int)(v114 + 32 * v88);
                  v214 = v115;
                  if ( v65->RecursionCount )
                    v115 = (unsigned int)(2 * v115);
                  v69 = *(_QWORD **)(*(_QWORD *)&v65[1].LockCount + 8 * v115);
                }
                else
                {
                  if ( v65->RecursionCount )
                    v68 = (unsigned int)(2 * v68);
                  for ( m = *(_QWORD **)(*(_QWORD *)&v65[1].LockCount + 8 * v68); ; m = (_QWORD *)*m )
                  {
                    v208 = (__int64)m;
                    if ( v70 == m )
                      break;
                    v117 = *((_DWORD *)m - 2);
                    v253 = v117;
                    if ( *((_DWORD *)BaseAddress + 31) )
                    {
                      v117 ^= *((_DWORD *)BaseAddress + 34);
                      v253 = v117;
                      if ( HIBYTE(v117) != ((unsigned __int8)v117 ^ (unsigned __int8)(BYTE1(v117) ^ BYTE2(v117))) )
                      {
                        RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)m - 16, 0, 0LL, 0LL);
                        v70 = (_QWORD *)v206;
                        m = (_QWORD *)v208;
                      }
                    }
                    if ( (int)(v212 - (unsigned __int16)v117) <= 0 )
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
            v65 = (PRTL_CRITICAL_SECTION)v65->DebugInfo;
            LockSemaphore = (unsigned int)v65->LockSemaphore;
          }
          v64 = BaseAddress + 42;
        }
        else
        {
          v69 = (_QWORD *)*v64;
        }
        while ( v64 != v69 )
        {
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v93 = *((_DWORD *)v69 - 2);
            v244 = v93;
            if ( (v93 & *((_DWORD *)BaseAddress + 31)) != 0 )
            {
              v94 = v93 ^ *((_DWORD *)BaseAddress + 34);
              v244 = v94;
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
          v64 = BaseAddress + 42;
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
        BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] + *((unsigned __int16 *)v59 + 4));
        v74 = BaseAddress[39];
        if ( v74 )
        {
          v75 = *((unsigned __int16 *)v59 + 4);
          while ( 1 )
          {
            v76 = (unsigned int)v74->LockCount;
            if ( v75 < v76 )
            {
              v234 = *((unsigned __int16 *)v59 + 4);
              v77 = v75;
              goto LABEL_103;
            }
            if ( !v74->DebugInfo )
              break;
            v74 = (PRTL_CRITICAL_SECTION)v74->DebugInfo;
          }
          v77 = v76 - 1;
          v234 = (unsigned int)(v76 - 1);
LABEL_103:
          v245 = (_WORD *)v75;
          v78 = v77 - LODWORD(v74->LockSemaphore);
          if ( v74->RecursionCount )
            v79 = 2 * v78;
          else
            v79 = v78;
          ++LODWORD(v74->OwningThread);
          v80 = 8 * v79;
          v206 = 8 * v79;
          v81 = *(_QWORD *)(8 * v79 + *(_QWORD *)&v74[1].LockCount);
          v212 = v81;
          if ( v77 == v74->LockCount - 1 )
            ++HIDWORD(v74->OwningThread);
          if ( !v81 )
            goto LABEL_108;
          v118 = *(_DWORD *)(v81 - 8);
          v254 = v118;
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v118 ^= *((_DWORD *)BaseAddress + 34);
            v207 = v118;
            v254 = v118;
            if ( HIBYTE(v118) != ((unsigned __int8)v118 ^ (unsigned __int8)(BYTE1(v118) ^ BYTE2(v118))) )
            {
              RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v81 - 16, 0, 0LL, 0LL);
              LOWORD(v118) = v207;
              v81 = v212;
              v80 = v206;
            }
          }
          if ( (int)(v75 - (unsigned __int16)v118) <= 0 )
LABEL_108:
            *(_QWORD *)(v80 + *(_QWORD *)&v74[1].LockCount) = v72;
          if ( !v81 )
            *((_DWORD *)&v74[1].DebugInfo->Type + (v78 >> 5)) |= 1 << (v78 & 0x1F);
        }
        v53 = v203;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v59[11] = v59[8] ^ v59[9] ^ v59[10];
          *((_DWORD *)v59 + 2) ^= *((_DWORD *)BaseAddress + 34);
          a4 = v258;
          goto LABEL_113;
        }
LABEL_372:
        a4 = v258;
        goto LABEL_113;
      }
      v146 = (unsigned __int16)v54;
      v59[10] &= 0xF0u;
      v59[15] = 0;
      if ( ((_BYTE)BaseAddress[14] & 0x40) == 0 )
      {
LABEL_313:
        v147 = (unsigned __int64 *)(BaseAddress + 42);
        if ( BaseAddress[39] )
          Entry = RtlpFindEntry(BaseAddress, v146);
        else
          Entry = *v147;
        while ( v147 != (unsigned __int64 *)Entry )
        {
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v149 = *(_DWORD *)(Entry - 8);
            v218 = v149;
            if ( (v149 & *((_DWORD *)BaseAddress + 31)) != 0 )
            {
              v150 = v149 ^ *((_DWORD *)BaseAddress + 34);
              v218 = v150;
            }
            else
            {
              LOWORD(v150) = v149;
            }
          }
          else
          {
            LOWORD(v150) = *(_WORD *)(Entry - 8);
          }
          if ( v146 <= (unsigned __int16)v150 )
            break;
          Entry = *(_QWORD *)Entry;
        }
        v151 = (unsigned __int64 *)(v59 + 16);
        v152 = *(__int64 **)(Entry + 8);
        if ( *v152 == Entry )
        {
          *v151 = Entry;
          *((_QWORD *)v59 + 3) = v152;
          *v152 = (__int64)v151;
          *(_QWORD *)(Entry + 8) = v151;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, Entry, 0, *v152, 0LL);
        }
        BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] + *((unsigned __int16 *)v59 + 4));
        v153 = BaseAddress[39];
        if ( v153 )
        {
          v154 = *((unsigned __int16 *)v59 + 4);
          while ( 1 )
          {
            v155 = (unsigned int)v153->LockCount;
            if ( v154 < v155 )
            {
              v156 = *((unsigned __int16 *)v59 + 4);
              v220 = (__int64 *)*((unsigned __int16 *)v59 + 4);
              goto LABEL_326;
            }
            Entry = (unsigned __int64)v153->DebugInfo;
            if ( !v153->DebugInfo )
              break;
            v153 = (PRTL_CRITICAL_SECTION)v153->DebugInfo;
          }
          v156 = v155 - 1;
          v220 = (__int64 *)v156;
          goto LABEL_326;
        }
        goto LABEL_327;
      }
      v190 = v59 + 32;
      v235 = v59 + 32;
      v191 = (16 * (unsigned __int64)(unsigned __int16)v54 - 32) >> 2;
      v222 = v191;
      if ( v191 )
      {
        if ( ((unsigned __int8)v190 & 4) == 0 )
          goto LABEL_439;
        *v190 = -17891602;
        v222 = --v191;
        if ( v191 )
        {
          v190 = v59 + 36;
          v235 = v59 + 36;
LABEL_439:
          memset64(v190, 0xFEEEFEEEFEEEFEEEuLL, v191 >> 1);
          if ( (v191 & 1) != 0 )
            v190[v191 - 1] = -17891602;
        }
      }
      v59[10] |= 4u;
      goto LABEL_313;
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v158 = *((_DWORD *)v62 + 2) ^ *((_DWORD *)BaseAddress + 34);
      *((_DWORD *)v62 + 2) = v158;
      if ( HIBYTE(v158) != ((unsigned __int8)v158 ^ (unsigned __int8)(BYTE1(v158) ^ BYTE2(v158))) )
        RtlpAnalyzeHeapFailure(BaseAddress, &v59[16 * v54]);
    }
    v159 = v62 + 16;
    v160 = *((_QWORD *)v62 + 2);
    v161 = (__int64 *)*((_QWORD *)v62 + 3);
    v220 = v161;
    v162 = *v161;
    v163 = *(_QWORD *)(v160 + 8);
    if ( *v161 == v163 && (_QWORD *)v162 == v159 )
      break;
    RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v159, v163, v162, 0LL);
LABEL_400:
    if ( v209 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741764;
      v185 = NtCurrentTeb();
      v185->LastErrorValue = RtlNtStatusToDosError(-1073741764);
      goto LABEL_484;
    }
    v209 = 1;
  }
  BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] - *((unsigned __int16 *)v62 + 4));
  v164 = BaseAddress[39];
  if ( v164 )
  {
    v165 = *((unsigned __int16 *)v62 + 4);
    while ( 1 )
    {
      v166 = (unsigned int)v164->LockCount;
      if ( v165 < v166 )
        break;
      if ( !v164->DebugInfo )
      {
        v167 = (unsigned int)(v166 - 1);
        goto LABEL_354;
      }
      v164 = (PRTL_CRITICAL_SECTION)v164->DebugInfo;
    }
    v167 = *((unsigned __int16 *)v62 + 4);
LABEL_354:
    v236 = v167;
    LOBYTE(v159) = 1;
    RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v164, (_DWORD)v159, (_DWORD)v62 + 16, v167, v165);
    v161 = v220;
  }
  *v161 = v160;
  *(_QWORD *)(v160 + 8) = v161;
  if ( (v62[10] & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(BaseAddress) )
  {
    RtlpDeCommitFreeBlock(BaseAddress);
    goto LABEL_400;
  }
  if ( v56 )
  {
    v186 = v62[10];
    if ( (v186 & 4) != 0 )
    {
      v187 = 16LL * *((unsigned __int16 *)v62 + 4) - 32;
      v237 = v187;
      if ( (v186 & 2) != 0 && v187 > 4 )
      {
        v187 -= 4LL;
        v237 = v187;
      }
      v212 = RtlCompareMemoryUlong(v62 + 32, v187, 0xFEEEFEEE);
      if ( v212 != v187 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", &v59[16 * v54], &v62[v212 + 32]);
        RtlpBreakPointHeap();
        v56 = v207;
      }
    }
  }
  v59[10] = v62[10];
  v168 = v54 + *((unsigned __int16 *)v62 + 4);
  v221 = (__int64 *)v168;
  if ( v168 <= 0xFF00 )
  {
    *((_WORD *)v59 + 4) = v168;
    *(_WORD *)&v59[16 * v168 + 12] = v168 ^ *((_WORD *)BaseAddress + 70);
    v169 = (unsigned __int16)v168;
    if ( !v56 )
    {
      v59[10] = 0;
      v59[15] = 0;
      v170 = BaseAddress + 42;
      if ( BaseAddress[39] )
        v171 = (_QWORD *)RtlpFindEntry(BaseAddress, (unsigned __int16)v168);
      else
        v171 = (_QWORD *)*v170;
      while ( v170 != v171 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v178 = *((_DWORD *)v171 - 2);
          v255 = v178;
          if ( (v178 & *((_DWORD *)BaseAddress + 31)) != 0 )
          {
            v179 = v178 ^ *((_DWORD *)BaseAddress + 34);
            v255 = v179;
          }
          else
          {
            LOWORD(v179) = v178;
          }
        }
        else
        {
          LOWORD(v179) = *((_WORD *)v171 - 4);
        }
        if ( v169 <= (unsigned __int16)v179 )
          break;
        v171 = (_QWORD *)*v171;
      }
      v172 = v59 + 16;
      v173 = (__int64 *)v171[1];
      if ( (_QWORD *)*v173 == v171 )
      {
        *v172 = v171;
        *((_QWORD *)v59 + 3) = v173;
        *v173 = (__int64)v172;
        v171[1] = v172;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v171, 0, *v173, 0LL);
      }
      BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] + *((unsigned __int16 *)v59 + 4));
      v174 = BaseAddress[39];
      if ( v174 )
      {
        v175 = *((unsigned __int16 *)v59 + 4);
        while ( 1 )
        {
          v176 = (unsigned int)v174->LockCount;
          if ( v175 < v176 )
            break;
          if ( !v174->DebugInfo )
          {
            v177 = v176 - 1;
            v238 = (unsigned int)(v176 - 1);
            goto LABEL_370;
          }
          v174 = (PRTL_CRITICAL_SECTION)v174->DebugInfo;
        }
        v177 = *((unsigned __int16 *)v59 + 4);
        v238 = *((unsigned __int16 *)v59 + 4);
LABEL_370:
        LOBYTE(v176) = 1;
        RtlpHeapAddListEntry((_DWORD)BaseAddress, (_DWORD)v174, v176, (_DWORD)v59 + 16, v177, v175);
      }
      v53 = v203;
      if ( !*((_DWORD *)BaseAddress + 31) )
        goto LABEL_372;
LABEL_328:
      v59[11] = v59[8] ^ v59[9] ^ v59[10];
      *((_DWORD *)v59 + 2) ^= *((_DWORD *)BaseAddress + 34);
LABEL_329:
      a4 = v258;
      goto LABEL_113;
    }
    v59[10] &= 0xF0u;
    v59[15] = 0;
    if ( ((_BYTE)BaseAddress[14] & 0x40) == 0 )
    {
LABEL_384:
      v180 = BaseAddress + 42;
      if ( BaseAddress[39] )
        v181 = (_QWORD *)RtlpFindEntry(BaseAddress, v169);
      else
        v181 = (_QWORD *)*v180;
      while ( v180 != v181 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v182 = *((_DWORD *)v181 - 2);
          v256 = v182;
          if ( (v182 & *((_DWORD *)BaseAddress + 31)) != 0 )
          {
            v183 = v182 ^ *((_DWORD *)BaseAddress + 34);
            v256 = v183;
          }
          else
          {
            LOWORD(v183) = v182;
          }
        }
        else
        {
          LOWORD(v183) = *((_WORD *)v181 - 4);
        }
        if ( v169 <= (unsigned __int16)v183 )
          break;
        v181 = (_QWORD *)*v181;
      }
      v151 = (unsigned __int64 *)(v59 + 16);
      v184 = (__int64 *)v181[1];
      if ( (_QWORD *)*v184 == v181 )
      {
        *v151 = (unsigned __int64)v181;
        *((_QWORD *)v59 + 3) = v184;
        *v184 = (__int64)v151;
        v181[1] = v151;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v181, 0, *v184, 0LL);
      }
      BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] + *((unsigned __int16 *)v59 + 4));
      v153 = BaseAddress[39];
      if ( v153 )
      {
        v154 = *((unsigned __int16 *)v59 + 4);
        while ( 1 )
        {
          Entry = (unsigned int)v153->LockCount;
          if ( v154 < Entry )
            break;
          if ( !v153->DebugInfo )
          {
            v156 = Entry - 1;
            v240 = (unsigned int)(Entry - 1);
            goto LABEL_326;
          }
          v153 = (PRTL_CRITICAL_SECTION)v153->DebugInfo;
        }
        v156 = *((unsigned __int16 *)v59 + 4);
        v240 = *((unsigned __int16 *)v59 + 4);
LABEL_326:
        LOBYTE(Entry) = 1;
        RtlpHeapAddListEntry((_DWORD)BaseAddress, (_DWORD)v153, Entry, (_DWORD)v151, v156, v154);
      }
LABEL_327:
      v53 = v203;
      if ( *((_DWORD *)BaseAddress + 31) )
        goto LABEL_328;
      goto LABEL_329;
    }
    v192 = v59 + 32;
    v239 = v59 + 32;
    v193 = (16 * v169 - 32) >> 2;
    v223 = v193;
    if ( v193 )
    {
      if ( ((unsigned __int8)v192 & 4) != 0 )
      {
        *v192 = -17891602;
        v223 = --v193;
        if ( v193 )
        {
          v192 = v59 + 36;
          v239 = v59 + 36;
          goto LABEL_457;
        }
      }
      else
      {
LABEL_457:
        memset64(v192, 0xFEEEFEEEFEEEFEEEuLL, v193 >> 1);
        if ( (v193 & 1) != 0 )
          v192[v193 - 1] = -17891602;
      }
    }
    v59[10] |= 4u;
    goto LABEL_384;
  }
  RtlpInsertFreeBlock(BaseAddress, v59);
  v53 = v203;
  a4 = v258;
LABEL_113:
  v210 = v215 + 16;
  v82 = (unsigned __int16 *)(v215 + 8);
  a2 = *((unsigned __int16 *)v215 + 4);
  DebugInfo = (unsigned __int16)a2;
  LOWORD(DebugInfo) = BYTE1(a2);
  v83 = 16 * a2;
  v241 = 16 * a2;
  if ( (v215[15] & 0x3F) == 0x3F )
  {
    v83 -= 8LL;
    v241 = v83;
  }
  if ( v53 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v215[11] = BYTE1(a2) ^ a2 ^ v26[10];
      *(_DWORD *)v82 ^= *((_DWORD *)BaseAddress + 34);
    }
    if ( v202 )
    {
      if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) == 0 )
      {
        ++*((_DWORD *)BaseAddress + 160);
        v92 = *((_DWORD *)BaseAddress + 162);
        if ( *((_DWORD *)BaseAddress + 160) > v92 )
        {
          *((_DWORD *)BaseAddress + 160) = 0;
          v113 = (unsigned __int64)BaseAddress[72] - 16 * (_QWORD)BaseAddress[24];
          if ( v113 > (unsigned __int64)BaseAddress[84] )
            BaseAddress[84] = (PRTL_CRITICAL_SECTION)v113;
          BaseAddress[85] = (PRTL_CRITICAL_SECTION)v113;
        }
        if ( ++*((_DWORD *)BaseAddress + 163) >= 0x1000u )
        {
          if ( *((_BYTE *)BaseAddress + 418) == 2 && *((_DWORD *)BaseAddress + 164) > 0x10u )
            v157 = 256;
          else
            v157 = 16;
          if ( *((_DWORD *)BaseAddress + 161) > v157 && v92 < 0x10000 )
            *((_DWORD *)BaseAddress + 162) = 2 * v92;
          *((_DWORD *)BaseAddress + 161) = 0;
          *((_DWORD *)BaseAddress + 163) = 0;
        }
      }
      RtlLeaveCriticalSection(BaseAddress[44]);
      v202 = 0;
    }
    if ( (v257 & 8) != 0 )
      memset(v210, 0, v83 - 8);
    goto LABEL_484;
  }
  if ( (v257 & 8) != 0 )
  {
    memset(v210, 0, v83 - 8);
    goto LABEL_294;
  }
  if ( ((_BYTE)BaseAddress[14] & 0x40) != 0 )
  {
    DebugInfo = (unsigned __int64)v210;
    v242 = (unsigned __int64)v210;
    a2 = (a4 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    v224 = a2;
    if ( a2 )
    {
      if ( ((unsigned __int8)v210 & 4) != 0 )
      {
        *(_DWORD *)v210 = -1163005939;
        v224 = --a2;
        if ( a2 )
        {
          DebugInfo += 4LL;
          v242 = DebugInfo;
          goto LABEL_308;
        }
      }
      else
      {
LABEL_308:
        memset64((void *)DebugInfo, 0xBAADF00DBAADF00DuLL, a2 >> 1);
        if ( (a2 & 1) != 0 )
          *(_DWORD *)(DebugInfo + 4 * a2 - 4) = -1163005939;
      }
    }
  }
LABEL_294:
  if ( ((_BYTE)BaseAddress[14] & 0x20) != 0 )
  {
    v194 = (char *)v210;
    a2 = 0xABABABABABABABABuLL;
    *(_QWORD *)((char *)v210 + v258) = 0xABABABABABABABABuLL;
    *(_QWORD *)&v194[v258 + 8] = 0xABABABABABABABABuLL;
    v215[10] |= 4u;
  }
  v144 = v215;
  v215[11] = 0;
  if ( (v144[10] & 2) != 0 )
  {
    ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v144);
    v243 = ExtraStuffPointer;
    *ExtraStuffPointer = 0LL;
    ExtraStuffPointer[1] = 0LL;
    if ( ((_DWORD)BaseAddress[14] & 0x8000000) != 0 )
      *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1LL);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *((_WORD *)v243 + 1) = RtlpUpdateTagEntry((_DWORD)BaseAddress, (v257 >> 18) & 0xFFF, 0, *v82, 0);
  }
  else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v144[11] = RtlpUpdateTagEntry((_DWORD)BaseAddress, (unsigned __int8)(v257 >> 18), 0, *v82, 0);
  }
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v144[11] = *(_BYTE *)v82 ^ *((_BYTE *)v82 + 1) ^ *((_BYTE *)v82 + 2);
    *(_DWORD *)v82 ^= *((_DWORD *)BaseAddress + 34);
  }
LABEL_484:
  if ( v202 )
  {
    if ( !v204 && v210 )
      RtlpUpdateHeapWatermarks(BaseAddress, a2, DebugInfo, a4);
    RtlLeaveCriticalSection(BaseAddress[44]);
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v197 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v197 = 2147353480LL;
  v198 = v210;
  if ( *(_BYTE *)v197 && v210 )
  {
    if ( v204 )
      RtlpHeapLogRangeReserve(BaseAddress, (unsigned __int64)v204 & 0xFFFFFFFFFFFF0000uLL, *((_QWORD *)v204 + 5), a4);
  }
  return v198;
}
