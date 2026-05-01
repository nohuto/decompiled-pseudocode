/*
 * XREFs of ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025B20
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180049B20 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AB6C (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180021B80 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180028F40 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x18003080C (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180037F40 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x18003A8DC (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x18003AE5C (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800499F6 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180072D94 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostCheckUpdateEnforcementSettings(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  struct _RM_HAM_ACTIVITY_HOST *v2; // rbx
  __int128 v3; // xmm1
  _QWORD *Value; // rax
  bool v6; // zf
  _QWORD *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // rdi
  unsigned int v11; // r12d
  __int64 v12; // r14
  int v13; // r9d
  unsigned __int64 v14; // rcx
  int v15; // edx
  unsigned int *v16; // r15
  unsigned int *Heap; // r12
  int v18; // eax
  int v19; // r14d
  unsigned int v20; // eax
  unsigned int *v21; // r14
  __int64 v22; // r12
  struct _RM_ACTIVITY_HOST *v23; // r15
  __int64 v24; // rbx
  unsigned int v25; // r13d
  ULONGLONG v26; // r9
  unsigned __int64 v27; // rcx
  char *v28; // r15
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r8
  const WCHAR *v33; // rcx
  __int64 v34; // rax
  DWORD v35; // r14d
  _QWORD *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // r15
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  struct _HAM_ACTIVITY *v52; // rdx
  struct _HAM_ACTIVITY *FirstActivity; // rax
  int v54; // r8d
  __int64 v55; // r9
  int v56; // r11d
  BOOL v57; // edi
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // r8
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  DWORD v67; // ecx
  _QWORD *v68; // rax
  unsigned __int64 v69; // r13
  unsigned int v70; // r15d
  DWORD v71; // r14d
  _QWORD *v72; // rdi
  int v73; // eax
  int v74; // edi
  DWORD v75; // r14d
  _QWORD *v76; // rdi
  DWORD CurrentThreadId; // eax
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // r8
  __int64 v80; // r8
  int v81; // r9d
  __int64 v82; // rax
  unsigned __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  PVOID ProcessHeap; // rcx
  struct _HAM_DEPENDENCY_GROUP *v93; // rdi
  unsigned __int64 v94; // rtt
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  int UserData; // [rsp+28h] [rbp-D8h]
  int v99; // [rsp+40h] [rbp-C0h] BYREF
  char v100; // [rsp+44h] [rbp-BCh] BYREF
  int v101; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v102; // [rsp+50h] [rbp-B0h]
  unsigned int v103; // [rsp+58h] [rbp-A8h] BYREF
  void *ProcessHandle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v105; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v106; // [rsp+70h] [rbp-90h] BYREF
  int v107; // [rsp+78h] [rbp-88h] BYREF
  int v108; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v109; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v110; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v111; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v112; // [rsp+98h] [rbp-68h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v114; // [rsp+B0h] [rbp-50h] BYREF
  struct _RM_ACTIVITY_HOST *v115; // [rsp+C0h] [rbp-40h]
  struct _RM_HAM_ACTIVITY_HOST *v116; // [rsp+C8h] [rbp-38h]
  __int64 v117; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v118; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v119; // [rsp+E0h] [rbp-20h] BYREF
  struct _HAM_ACTIVITY *v120; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v121; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v122; // [rsp+F8h] [rbp-8h] BYREF
  struct _HAM_ACTIVITY *v123; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+108h] [rbp+8h] BYREF
  EVENT_DESCRIPTOR v125; // [rsp+118h] [rbp+18h] BYREF
  __int128 v126; // [rsp+128h] [rbp+28h] BYREF
  __int128 v127; // [rsp+138h] [rbp+38h]
  char v128; // [rsp+148h] [rbp+48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+150h] [rbp+50h] BYREF
  char v130[16]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v131; // [rsp+190h] [rbp+90h]
  __int64 v132; // [rsp+198h] [rbp+98h]
  __int128 v133; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 v134[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  _OWORD Buf2[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  _OWORD Buf1[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  char v137[16]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v138; // [rsp+210h] [rbp+110h] BYREF
  __int64 v139; // [rsp+218h] [rbp+118h] BYREF
  _QWORD v140[2]; // [rsp+220h] [rbp+120h] BYREF
  char v141; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v142[32]; // [rsp+240h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v143; // [rsp+260h] [rbp+160h] BYREF
  void *v144; // [rsp+270h] [rbp+170h]
  int v145; // [rsp+278h] [rbp+178h]
  int v146; // [rsp+27Ch] [rbp+17Ch]
  __int64 *v147; // [rsp+280h] [rbp+180h]
  __int64 v148; // [rsp+288h] [rbp+188h]
  const WCHAR *v149; // [rsp+290h] [rbp+190h]
  int v150; // [rsp+298h] [rbp+198h]
  int v151; // [rsp+29Ch] [rbp+19Ch]
  int *v152; // [rsp+2A0h] [rbp+1A0h]
  __int64 v153; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int64 *v154; // [rsp+2B0h] [rbp+1B0h]
  __int64 v155; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int64 *v156; // [rsp+2C0h] [rbp+1C0h]
  __int64 v157; // [rsp+2C8h] [rbp+1C8h]
  unsigned __int64 *v158; // [rsp+2D0h] [rbp+1D0h]
  __int64 v159; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int64 *v160; // [rsp+2E0h] [rbp+1E0h]
  __int64 v161; // [rsp+2E8h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR v162; // [rsp+2F0h] [rbp+1F0h] BYREF
  void *v163; // [rsp+300h] [rbp+200h]
  int v164; // [rsp+308h] [rbp+208h]
  int v165; // [rsp+30Ch] [rbp+20Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+310h] [rbp+210h] BYREF
  int *v167; // [rsp+320h] [rbp+220h]
  __int64 v168; // [rsp+328h] [rbp+228h]
  __int64 *v169; // [rsp+330h] [rbp+230h]
  __int64 v170; // [rsp+338h] [rbp+238h]
  char *v171; // [rsp+340h] [rbp+240h]
  __int64 v172; // [rsp+348h] [rbp+248h]
  unsigned __int64 *v173; // [rsp+350h] [rbp+250h]
  __int64 v174; // [rsp+358h] [rbp+258h]
  unsigned __int64 *v175; // [rsp+360h] [rbp+260h]
  __int64 v176; // [rsp+368h] [rbp+268h]
  char *v177; // [rsp+370h] [rbp+270h]
  __int64 v178; // [rsp+378h] [rbp+278h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+380h] [rbp+280h] BYREF
  __int64 *v180; // [rsp+3A0h] [rbp+2A0h]
  __int64 v181; // [rsp+3A8h] [rbp+2A8h]
  unsigned __int64 *v182; // [rsp+3B0h] [rbp+2B0h]
  __int64 v183; // [rsp+3B8h] [rbp+2B8h]
  unsigned __int64 *v184; // [rsp+3C0h] [rbp+2C0h]
  __int64 v185; // [rsp+3C8h] [rbp+2C8h]
  __int64 *v186; // [rsp+3D0h] [rbp+2D0h]
  __int64 v187; // [rsp+3D8h] [rbp+2D8h]
  __int64 *v188; // [rsp+3E0h] [rbp+2E0h]
  __int64 v189; // [rsp+3E8h] [rbp+2E8h]
  EVENT_DATA_DESCRIPTOR v190; // [rsp+3F0h] [rbp+2F0h] BYREF
  int *v191; // [rsp+410h] [rbp+310h]
  __int64 v192; // [rsp+418h] [rbp+318h]
  __int64 *v193; // [rsp+420h] [rbp+320h]
  __int64 v194; // [rsp+428h] [rbp+328h]
  EVENT_DATA_DESCRIPTOR v195; // [rsp+430h] [rbp+330h] BYREF
  int *v196; // [rsp+450h] [rbp+350h]
  __int64 v197; // [rsp+458h] [rbp+358h]
  __int64 *v198; // [rsp+460h] [rbp+360h]
  __int64 v199; // [rsp+468h] [rbp+368h]
  EVENT_DATA_DESCRIPTOR v200; // [rsp+470h] [rbp+370h] BYREF
  int *v201; // [rsp+490h] [rbp+390h]
  __int64 v202; // [rsp+498h] [rbp+398h]
  __int64 *v203; // [rsp+4A0h] [rbp+3A0h]
  __int64 v204; // [rsp+4A8h] [rbp+3A8h]

  v1 = *((_QWORD *)a1 + 79);
  v2 = a1;
  v116 = a1;
  if ( (v1 & 0x80000000000000LL) == 0 && (v1 & 0x40000000000000LL) == 0 )
  {
    HampHostComputeStaticEnforcementSettings(
      a1,
      (struct _RM_ENFORCEMENT_SETTINGS *)&v126,
      (struct _RM_COMMIT_THRESHOLDS *)v142,
      (struct _RM_COMMIT_THRESHOLDS *)v130,
      &v123);
    if ( ((*((_BYTE *)v2 + 639) & 1) == 0 || SDWORD2(v127) < 2 && (BYTE12(v127) & 0x70) == 0 && (BYTE12(v127) & 8) == 0)
      && *((struct _HAM_ACTIVITY **)v2 + 122) == v123 )
    {
      v3 = *(_OWORD *)((char *)v2 + 1064);
      Buf1[0] = 0uLL;
      Buf1[1] = v3;
      Buf2[0] = 0uLL;
      Buf2[1] = v127;
      if ( !memcmp_0(Buf1, Buf2, 0x20uLL)
        && v132 == *((_QWORD *)v2 + 103)
        && v131 == *((_QWORD *)v2 + 104)
        && !memcmp_0(v142, (char *)v2 + 848, 0x20uLL) )
      {
        return 0LL;
      }
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)Value & 2) == 0 )
      __int2c();
    v6 = Value[2]-- == 1LL;
    if ( v6 )
      *Value &= ~2uLL;
  }
  *((_DWORD *)v2 + 2) = 0;
  RtlReleaseSRWLockExclusive(v2);
  dword_18009BF18 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v7 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v7 & 1) == 0 )
      __int2c();
    v6 = v7[1]-- == 1LL;
    if ( v6 )
      *v7 &= ~1uLL;
  }
  v8 = *((_QWORD *)v2 - 2);
  v9 = *((_DWORD *)v2 + 140);
  v10 = (__int64)v2 + 24;
  v11 = *((_DWORD *)v2 + 139);
  v115 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v2 - 64);
  v12 = *(_QWORD *)(v8 + 40);
  v109 = *((_QWORD *)v2 - 4);
  v101 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, unsigned __int64 *, _QWORD))(v12 + 24))(
           (__int64)v2 + 488,
           v11,
           v10,
           v9,
           v109,
           &v114,
           0LL);
  v13 = v101;
  if ( v101 < 0 )
  {
    v15 = 1;
    if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    {
      v202 = 4LL;
      v201 = &v101;
      v203 = &v109;
      v204 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180084935, 0LL, 0LL, 4u, &v200);
      v13 = v101;
LABEL_26:
      v15 = 1;
    }
  }
  else
  {
    v101 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, unsigned __int64 *))(v12 + 96))(
             (__int64)v2 + 488,
             v11,
             (__int64)v2 + 24,
             v9,
             v109,
             &v110);
    v13 = v101;
    if ( v101 >= 0 )
    {
      v14 = v110 << 12;
      if ( is_mul_ok(v110, 0x1000uLL) )
      {
        v110 <<= 12;
        v13 = 0;
      }
      else
      {
        v14 = -1LL;
        v13 = -1073741675;
        v110 = -1LL;
      }
      v112 = v114;
      v101 = v13;
      v111 = v14;
      goto LABEL_26;
    }
    v15 = 1;
    if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    {
      v192 = 4LL;
      v191 = &v101;
      v193 = &v109;
      v194 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008497D, 0LL, 0LL, 4u, &v190);
      v13 = v101;
      goto LABEL_26;
    }
  }
  if ( v13 >= 0 )
  {
    v103 = v15;
    v16 = 0LL;
    v105 = 0LL;
    ProcessHandle = 0LL;
    v102 = 0LL;
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
    if ( Heap )
    {
      while ( 1 )
      {
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)v2 - 2) + 40LL) + 72LL))(
                (__int64)v2 + 488,
                *((unsigned int *)v2 + 139),
                (__int64)v2 + 24,
                *((unsigned int *)v2 + 140),
                *((_QWORD *)v2 - 4),
                Heap,
                &v103);
        v19 = v18;
        if ( v18 >= 0 )
        {
          v20 = v103;
          v16 = Heap;
          v102 = Heap;
          goto LABEL_31;
        }
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( v18 != -2147483643 )
          break;
        RtlFreeHeap(ProcessHeap, 0, Heap);
        Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v103);
        if ( !Heap )
        {
          v20 = v99;
          v19 = -1073741801;
          goto LABEL_31;
        }
      }
      RtlFreeHeap(ProcessHeap, 0, Heap);
      v20 = v99;
LABEL_31:
      if ( v19 >= 0 )
      {
        if ( v20 )
        {
          v21 = v16;
          v22 = v20;
          v23 = v115;
          v24 = (__int64)v2 + 488;
          do
          {
            if ( ProcessHandle )
            {
              NtClose(ProcessHandle);
              ProcessHandle = 0LL;
            }
            v25 = *v21;
            ClientId.UniqueProcess = (HANDLE)*v21;
            ClientId.UniqueThread = 0LL;
            ObjectAttributes.Length = 48;
            memset(&ObjectAttributes.RootDirectory, 0, 20);
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0
              && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)v23 + 6) + 40LL) + 80LL))(
                   v24,
                   *((unsigned int *)v23 + 155),
                   v10,
                   *((unsigned int *)v23 + 156),
                   *((_QWORD *)v23 + 4),
                   ProcessHandle) )
            {
              RmpActivityHostCommitDebtCallback(v23, ProcessHandle, v25, &v105);
            }
            v21 += 2;
            --v22;
          }
          while ( v22 );
          v2 = v116;
          v16 = v102;
        }
        v19 = 0;
      }
      if ( v16 && v16 != (unsigned int *)&v128 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
    }
    else
    {
      v19 = -1073741801;
    }
    if ( ProcessHandle )
      NtClose(ProcessHandle);
    v99 = v19;
    v26 = 1LL;
    if ( v19 < 0 )
    {
      if ( dword_18009B0B0 <= 4u )
      {
        v28 = (char *)v2 - 64;
      }
      else
      {
        v28 = (char *)v2 - 64;
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
        {
          v197 = 4LL;
          v196 = &v99;
          v117 = *((_QWORD *)v28 + 4);
          v198 = &v117;
          v199 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180088D81, 0LL, 0LL, 4u, &v195);
          v19 = v99;
          v26 = 1LL;
        }
      }
      v27 = v105;
      if ( v19 < 0 )
        v27 = 0LL;
      v105 = v27;
    }
    else
    {
      v27 = v105;
      v28 = (char *)v2 - 64;
      v99 = 0;
    }
    v29 = v112;
    v30 = v112;
    if ( v27 < v112 )
      v30 = v27;
    v31 = v112 - v30;
    if ( v112 && v31 <= 1 )
      v31 = v26;
    v32 = v111;
    v119 = v31 + v111;
    if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
    {
      v33 = &pwsz;
      v118 = *((_QWORD *)v28 + 4);
      v147 = &v118;
      LODWORD(v34) = 0;
      v148 = 8LL;
      if ( v10 )
      {
        v33 = (const WCHAR *)v10;
        v34 = -1LL;
        do
          ++v34;
        while ( *(_WORD *)(v10 + 2 * v34) );
      }
      v149 = v33;
      v150 = 2 * v34 + 2;
      v107 = *((_DWORD *)v28 + 156);
      v152 = &v107;
      v154 = &v119;
      v156 = &v112;
      v158 = &v111;
      v160 = &v105;
      v151 = 0;
      v153 = 4LL;
      v155 = 8LL;
      v157 = 8LL;
      v159 = 8LL;
      v161 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      v143.Ptr = (ULONGLONG)off_18009B0B8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180085EFA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = v26;
      v143.Size = *(unsigned __int16 *)off_18009B0B8;
      v144 = &unk_180085F05;
      v146 = v26;
      v143.Reserved = 2;
      v145 = 150;
      EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 9u, &v143);
      v32 = v111;
      v29 = v112;
    }
    v106 = v29 + v32;
  }
  v35 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v36 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v35) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v36 |= 2uLL;
    ++v36[2];
  }
  RtlAcquireSRWLockExclusive(v2);
  *((_DWORD *)v2 + 2) = GetCurrentThreadId();
  v37 = *((_QWORD *)v2 + 79);
  if ( (v37 & 0x80000000000000LL) != 0 )
  {
    v37 &= ~0x80000000000000uLL;
    *((_QWORD *)v2 + 103) = 0LL;
    *((_QWORD *)v2 + 79) = v37;
    *((_QWORD *)v2 + 104) = 0LL;
  }
  v38 = (v37 >> 54) & 1;
  if ( (v37 & 0x100000000000000LL) != 0 )
  {
    LOBYTE(v38) = ((v37 & 0x40000000000000LL) != 0) | 2;
    *((_QWORD *)v2 + 79) = v37 & 0xFEFFFFFFFFFFFFFFuLL;
  }
  HampHostComputeStaticEnforcementSettings(
    v2,
    (struct _RM_ENFORCEMENT_SETTINGS *)v140,
    (struct _RM_COMMIT_THRESHOLDS *)&v133,
    (struct _RM_COMMIT_THRESHOLDS *)v137,
    &v120);
  v39 = -1LL;
  v40 = v133;
  v41 = v134[0];
  if ( v106 >= (unsigned __int64)v133 )
  {
    if ( v106 < *((_QWORD *)&v133 + 1) )
    {
      v40 = *((_QWORD *)&v133 + 1);
      v42 = v133;
    }
    else if ( v106 < v134[0] )
    {
      v42 = *((_QWORD *)&v133 + 1);
      v40 = v134[0];
    }
    else
    {
      v42 = v134[0];
      v40 = -1LL;
    }
  }
  else
  {
    v42 = 0LL;
  }
  v43 = v134[1];
  v44 = v106 >> 3;
  if ( v134[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    v44 = v134[1] >> 4;
  if ( v44 <= 0x1400000 )
    v44 = 20971520LL;
  v45 = v44 + v106 - 1;
  if ( v44 == 20971520 )
    v46 = v45 / 0x1400000;
  else
    v46 = v45 / v44;
  v47 = -1LL;
  if ( is_mul_ok(v46, v44) )
    v47 = v46 * v44;
  if ( v134[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v47 > v134[1] )
  {
    v94 = v44 + v134[1] - 1;
    v95 = v94 / v44 * v44;
    v47 = -1LL;
    if ( is_mul_ok(v94 / v44, v44) )
      v47 = v95;
  }
  if ( v47 == -1LL || (v48 = v47 + v44, v47 + v44 < v47) )
    v48 = -1LL;
  if ( v134[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v96 = v134[1];
    if ( v47 < v134[1] )
      v96 = v47;
    v47 = v96;
    if ( v134[1] < v48 )
      v48 = v134[1];
  }
  v49 = 2 * v44;
  if ( 2 * v44 >= v47 )
    v49 = v47;
  v50 = v47 - v49;
  if ( v42 <= v50 )
    v42 = v50;
  if ( v106 <= v134[1] && v40 >= v48 )
    v40 = v48;
  v140[0] = v42;
  v140[1] = v40;
  if ( v40 != -1LL )
  {
    v51 = *((_QWORD *)v2 + 118);
    if ( v51 <= v40 )
      v51 = v40;
    *((_QWORD *)v2 + 118) = v51;
  }
  v52 = v120;
  if ( *((_QWORD *)v2 + 83) )
  {
    LODWORD(v102) = (*((_QWORD *)v2 + 79) & 0x400000000000000LL) != 0 && *((struct _HAM_ACTIVITY **)v2 + 122) != v120;
    FirstActivity = HampHostGetFirstActivity(v2);
    if ( FirstActivity && (*((_DWORD *)FirstActivity + 28) & 0x80000) != 0 )
    {
      if ( v55 != *((_QWORD *)v2 + 132) )
        v54 = v56;
      LODWORD(v102) = v54;
    }
    if ( *((_QWORD *)v2 + 117) )
      LODWORD(v102) = 1;
  }
  else
  {
    LODWORD(v102) = 0;
  }
  v57 = (*((_QWORD *)v2 + 108) > v41 || *((_QWORD *)v2 + 109) > v43)
     && (*((_QWORD *)v2 + 79) & 0x200000000000000LL) == 0;
  *((_QWORD *)v2 + 103) = v139;
  *((_QWORD *)v2 + 104) = v138;
  *((_QWORD *)v2 + 122) = v52;
  v58 = v133;
  v59 = *(_OWORD *)v134;
  *((_OWORD *)v2 + 53) = v133;
  *((_OWORD *)v2 + 54) = v59;
  if ( v52 )
    v60 = *((_QWORD *)v52 + 59);
  else
    v60 = v41;
  if ( v60 == *((_QWORD *)v2 + 105) )
  {
    v99 = 0;
  }
  else
  {
    v99 = 1;
    *((_QWORD *)v2 + 105) = v60;
  }
  if ( v41 == -1LL || (v82 = *((_QWORD *)v2 + 116), v82 == -1) )
  {
    *((_QWORD *)v2 + 114) = -1LL;
  }
  else
  {
    v83 = v82 + v41;
    v84 = -1LL;
    if ( v83 >= v41 )
      v84 = v83;
    *((_QWORD *)v2 + 114) = v84;
  }
  v61 = *((_QWORD *)v2 + 114);
  if ( v61 == -1LL || (v85 = *((_QWORD *)v2 + 117), v85 == -1) )
  {
    *((_QWORD *)v2 + 114) = -1LL;
  }
  else
  {
    v86 = v61 + v85;
    v87 = -1LL;
    if ( v86 >= v61 )
      v87 = v86;
    *((_QWORD *)v2 + 114) = v87;
  }
  v62 = *((_QWORD *)v2 + 117);
  *((_OWORD *)v2 + 55) = v58;
  *((_OWORD *)v2 + 56) = v59;
  v63 = *((_QWORD *)v2 + 113);
  if ( v63 == -1LL || v62 == -1 )
  {
    *((_QWORD *)v2 + 113) = -1LL;
  }
  else
  {
    v88 = -1LL;
    if ( v63 + v62 >= v63 )
      v88 = v63 + v62;
    *((_QWORD *)v2 + 113) = v88;
  }
  v64 = *((_QWORD *)v2 + 112);
  if ( v64 == -1LL || v62 == -1 )
  {
    *((_QWORD *)v2 + 112) = -1LL;
  }
  else
  {
    v89 = -1LL;
    if ( v64 + v62 >= v64 )
      v89 = v64 + v62;
    *((_QWORD *)v2 + 112) = v89;
  }
  v65 = *((_QWORD *)v2 + 111);
  if ( v65 == -1LL || v62 == -1 )
  {
    *((_QWORD *)v2 + 111) = -1LL;
  }
  else
  {
    v90 = -1LL;
    if ( v65 + v62 >= v65 )
      v90 = v65 + v62;
    *((_QWORD *)v2 + 111) = v90;
  }
  v66 = *((_QWORD *)v2 + 110);
  if ( v66 != -1LL && v62 != -1 && v66 + v62 >= v66 )
    v39 = v66 + v62;
  *((_QWORD *)v2 + 110) = v39;
  v67 = HampLockTrackerId;
  *((_QWORD *)v2 + 79) &= ~0x40000000000000uLL;
  if ( v67 != -1 )
  {
    v68 = TlsGetValue(v67);
    if ( (*(_BYTE *)v68 & 2) == 0 )
      __int2c();
    v6 = v68[2]-- == 1LL;
    if ( v6 )
      *v68 &= ~2uLL;
  }
  *((_DWORD *)v2 + 2) = 0;
  RtlReleaseSRWLockExclusive(v2);
  v69 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 94) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v57 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)v2 - 2) + 40LL) + 200LL))(
      *((_QWORD *)v2 + 121),
      1LL);
    HampHostAcquireLockExclusiveEx(v2, 0);
    *((_QWORD *)v2 + 79) &= ~0x80000000000000uLL;
    HampHostReleaseLockExclusiveEx(v2);
    RmpSystemResourceTimerSet(v2, *(unsigned int *)(v69 + 1076), *((void **)v2 + 121));
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
      {
        v121 = *((_QWORD *)v2 - 4);
        v180 = &v121;
        v182 = &v134[1];
        v184 = v134;
        v186 = &v139;
        v188 = &v138;
        v181 = v91;
        v183 = v91;
        v185 = v91;
        v187 = v91;
        v189 = v91;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008AEE8, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  if ( v106 >= (unsigned __int64)v133 )
  {
    if ( v106 < *((_QWORD *)&v133 + 1) )
    {
      v70 = 2;
    }
    else
    {
      v70 = 4;
      if ( v106 < v134[0] )
        v70 = 3;
    }
  }
  else
  {
    v70 = 1;
  }
  v71 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v72 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v71) )
      __int2c();
    *v72 |= 1uLL;
    ++v72[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_18009BF18 = GetCurrentThreadId();
  if ( v70 >= 4 )
    RmHamHostTryDecommitOffered((struct _RM_HAM_ACTIVITY_HOST *)((char *)v2 - 64), v106, v134[0]);
  v73 = RmpActivityHostApplyEnforcementSettings(
          (struct _RM_HAM_ACTIVITY_HOST *)((char *)v2 - 64),
          (struct _RM_ENFORCEMENT_SETTINGS *)v140,
          v38);
  v74 = v73;
  if ( (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 94) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 + 652) & 1) != 0 )
    goto LABEL_232;
  if ( v73 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
LABEL_232:
    if ( v74 < 0 )
    {
      RmpReleaseGlobalLock();
      UserData = 0;
      UserDataCount = 0;
      HampHostQueueTerminateEx(v2, 3LL, 4865LL);
      RmpAcquireGlobalLock();
    }
  }
  v75 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v76 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v75) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v76 |= 2uLL;
    ++v76[2];
  }
  RtlAcquireSRWLockExclusive(v2);
  CurrentThreadId = GetCurrentThreadId();
  v78 = v134[0];
  *((_DWORD *)v2 + 2) = CurrentThreadId;
  v79 = *((_QWORD *)v2 + 156);
  if ( (v78 != v79 || v99)
    && (int)ExecutionModel::ResourceManager::CommitMemoryLimitChange(
              *(ExecutionModel::ResourceManager **)(*((_QWORD *)v2 - 2) + 2688LL),
              (struct _RM_HAM_ACTIVITY_HOST *)((char *)v2 + 24),
              v79,
              v78,
              *((_QWORD *)v2 + 105)) >= 0 )
  {
    *((_QWORD *)v2 + 156) = v78;
  }
  v80 = *((unsigned int *)v2 + 314);
  if ( (_DWORD)v80 != v70 )
  {
    if ( hProvider > 4u )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)v2 + 12);
      v81 = *((_DWORD *)v2 + 140);
      v167 = &v108;
      v122 = *((_QWORD *)v2 - 4);
      v169 = &v122;
      v171 = &v100;
      v173 = &v106;
      v175 = v134;
      v177 = &v141;
      v108 = v81;
      v168 = 4LL;
      v170 = 8LL;
      v100 = v70;
      v172 = 1LL;
      v174 = 8LL;
      v176 = 8LL;
      v178 = 8LL;
      *(_DWORD *)&v125.Level = 4;
      v162.Ptr = (ULONGLONG)off_18009B0F8;
      *(_DWORD *)&v125.Id = ((unsigned int)&unk_18008AD5F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v125.Keyword = 0LL;
      v162.Size = *(unsigned __int16 *)off_18009B0F8;
      v163 = &unk_18008AD6A;
      v165 = 1;
      v162.Reserved = 2;
      v164 = 119;
      EventWriteTransfer(RegHandle, &v125, 0LL, 0LL, 9u, &v162);
      v80 = *((unsigned int *)v2 + 314);
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, int))(**(_QWORD **)(v69 + 912) + 32LL))(
      *(_QWORD *)(v69 + 912),
      (__int64)v2 - 64,
      v80,
      v70,
      UserDataCount,
      UserData);
    *((_DWORD *)v2 + 314) = v70;
  }
  if ( (_DWORD)v102 )
  {
    v93 = HampHostCheckEnterDependencyWorker(v2);
    if ( v93 )
    {
      HampHostReleaseLockExclusiveEx(v2);
      RmpReleaseGlobalLock();
      HampDepGroupRunStateChangeWorker(v93);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(v2, 0);
    }
  }
  return 1LL;
}
