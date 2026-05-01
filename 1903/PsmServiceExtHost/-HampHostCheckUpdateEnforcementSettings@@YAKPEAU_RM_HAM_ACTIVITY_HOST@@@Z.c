/*
 * XREFs of ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800288A0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026B20 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800493C0 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x180009064 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E090 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800257F0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18002B180 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180037854 (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x180038130 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180038F28 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003CAE8 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180049286 (memcmp_0.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18007ED88 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
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
  __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // r14
  __int64 (__fastcall *v13)(char *, _QWORD, __int64, _QWORD, __int64, unsigned __int64 *, _QWORD); // rax
  int v14; // r9d
  unsigned __int64 v15; // rcx
  int v16; // edx
  PVOID ProcessHeap; // rcx
  PVOID Heap; // r14
  int v19; // eax
  int v20; // r15d
  PVOID v21; // rax
  unsigned int v22; // r14d
  PVOID v23; // rax
  void **v24; // r12
  PVOID v25; // rax
  unsigned int *v26; // r13
  unsigned int *v27; // r15
  __int64 v28; // rbx
  __int64 v29; // r14
  struct _RM_ACTIVITY_HOST *v30; // rbx
  unsigned int *v31; // rsi
  __int64 v32; // r13
  void **v33; // r15
  HANDLE *v34; // rsi
  ULONGLONG v35; // r9
  unsigned __int64 v36; // rcx
  char *v37; // r14
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // r8
  __int16 *v42; // rcx
  __int64 v43; // rax
  DWORD v44; // r14d
  _QWORD *v45; // rsi
  unsigned __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // r15
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  unsigned __int128 v57; // rax
  unsigned __int64 v58; // kr00_8
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rax
  struct _HAM_ACTIVITY *v63; // rdx
  struct _HAM_ACTIVITY *FirstActivity; // rax
  int v65; // r8d
  __int64 v66; // r9
  BOOL v67; // esi
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // r8
  __int64 v73; // rdx
  __int64 *v74; // rcx
  __int64 v75; // r10
  unsigned __int64 v76; // r9
  __int64 v77; // r8
  unsigned __int64 v78; // r9
  __int64 v79; // r8
  unsigned __int64 v80; // r9
  __int64 v81; // r8
  unsigned __int64 v82; // rdx
  _QWORD *v83; // rax
  unsigned __int64 v84; // r13
  unsigned int v85; // r15d
  DWORD v86; // r14d
  _QWORD *v87; // rsi
  int v88; // eax
  int v89; // esi
  DWORD v90; // r14d
  _QWORD *v91; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v93; // rsi
  __int64 v94; // r8
  __int64 v95; // r8
  unsigned int v96; // edx
  __int64 v97; // rax
  unsigned __int64 v98; // rax
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  unsigned int v101; // edx
  __int64 v102; // rdx
  PVOID v103; // rcx
  unsigned int v104; // edx
  struct _HAM_DEPENDENCY_GROUP *v105; // rdi
  unsigned __int64 v106; // rtt
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  char v109; // [rsp+40h] [rbp-C0h] BYREF
  int v110; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v111; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h]
  PVOID v113; // [rsp+58h] [rbp-A8h]
  PVOID v114; // [rsp+60h] [rbp-A0h]
  __int64 v115; // [rsp+68h] [rbp-98h]
  unsigned int v116; // [rsp+70h] [rbp-90h] BYREF
  int v117; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v118; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v119; // [rsp+7Ch] [rbp-84h] BYREF
  void *ProcessHandle; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v121; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v122; // [rsp+90h] [rbp-70h] BYREF
  __int64 v123; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v124; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v125; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v126; // [rsp+B0h] [rbp-50h] BYREF
  struct _RM_ACTIVITY_HOST *v127; // [rsp+B8h] [rbp-48h]
  struct _RM_HAM_ACTIVITY_HOST *v128; // [rsp+C0h] [rbp-40h]
  __int64 v129; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v130; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v132; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v133; // [rsp+E8h] [rbp-18h] BYREF
  struct _HAM_ACTIVITY *v134; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v135; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v136; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+108h] [rbp+8h] BYREF
  EVENT_DESCRIPTOR v138; // [rsp+118h] [rbp+18h] BYREF
  struct _HAM_ACTIVITY *v139; // [rsp+128h] [rbp+28h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+130h] [rbp+30h] BYREF
  __int128 v141; // [rsp+140h] [rbp+40h] BYREF
  __int128 v142; // [rsp+150h] [rbp+50h]
  unsigned __int64 v143; // [rsp+160h] [rbp+60h]
  unsigned __int64 v144; // [rsp+168h] [rbp+68h]
  __int64 v145; // [rsp+170h] [rbp+70h]
  __int64 v146; // [rsp+178h] [rbp+78h]
  __int64 v147; // [rsp+180h] [rbp+80h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+188h] [rbp+88h] BYREF
  char v149[16]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v150; // [rsp+1C8h] [rbp+C8h]
  __int64 v151; // [rsp+1D0h] [rbp+D0h]
  __int128 v152; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int64 v153[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  _OWORD Buf1[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  char v155[16]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v156; // [rsp+228h] [rbp+128h] BYREF
  __int64 v157; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v158[2]; // [rsp+238h] [rbp+138h] BYREF
  char v159; // [rsp+248h] [rbp+148h] BYREF
  _OWORD Buf2[2]; // [rsp+258h] [rbp+158h] BYREF
  _BYTE v161[40]; // [rsp+278h] [rbp+178h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2A0h] [rbp+1A0h] BYREF
  void *v163; // [rsp+2B0h] [rbp+1B0h]
  int v164; // [rsp+2B8h] [rbp+1B8h]
  int v165; // [rsp+2BCh] [rbp+1BCh]
  __int64 *v166; // [rsp+2C0h] [rbp+1C0h]
  __int64 v167; // [rsp+2C8h] [rbp+1C8h]
  __int16 *v168; // [rsp+2D0h] [rbp+1D0h]
  int v169; // [rsp+2D8h] [rbp+1D8h]
  int v170; // [rsp+2DCh] [rbp+1DCh]
  unsigned int *v171; // [rsp+2E0h] [rbp+1E0h]
  __int64 v172; // [rsp+2E8h] [rbp+1E8h]
  unsigned __int64 *v173; // [rsp+2F0h] [rbp+1F0h]
  __int64 v174; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int64 *v175; // [rsp+300h] [rbp+200h]
  __int64 v176; // [rsp+308h] [rbp+208h]
  unsigned __int64 *v177; // [rsp+310h] [rbp+210h]
  __int64 v178; // [rsp+318h] [rbp+218h]
  unsigned __int64 *v179; // [rsp+320h] [rbp+220h]
  __int64 v180; // [rsp+328h] [rbp+228h]
  struct _EVENT_DATA_DESCRIPTOR v181; // [rsp+330h] [rbp+230h] BYREF
  void *v182; // [rsp+340h] [rbp+240h]
  int v183; // [rsp+348h] [rbp+248h]
  int v184; // [rsp+34Ch] [rbp+24Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+350h] [rbp+250h] BYREF
  unsigned int *v186; // [rsp+360h] [rbp+260h]
  __int64 v187; // [rsp+368h] [rbp+268h]
  __int64 *v188; // [rsp+370h] [rbp+270h]
  __int64 v189; // [rsp+378h] [rbp+278h]
  char *v190; // [rsp+380h] [rbp+280h]
  __int64 v191; // [rsp+388h] [rbp+288h]
  unsigned __int64 *v192; // [rsp+390h] [rbp+290h]
  __int64 v193; // [rsp+398h] [rbp+298h]
  unsigned __int64 *v194; // [rsp+3A0h] [rbp+2A0h]
  __int64 v195; // [rsp+3A8h] [rbp+2A8h]
  char *v196; // [rsp+3B0h] [rbp+2B0h]
  __int64 v197; // [rsp+3B8h] [rbp+2B8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 *v199; // [rsp+3E0h] [rbp+2E0h]
  __int64 v200; // [rsp+3E8h] [rbp+2E8h]
  unsigned __int64 *v201; // [rsp+3F0h] [rbp+2F0h]
  __int64 v202; // [rsp+3F8h] [rbp+2F8h]
  unsigned __int64 *v203; // [rsp+400h] [rbp+300h]
  __int64 v204; // [rsp+408h] [rbp+308h]
  __int64 *v205; // [rsp+410h] [rbp+310h]
  __int64 v206; // [rsp+418h] [rbp+318h]
  __int64 *v207; // [rsp+420h] [rbp+320h]
  __int64 v208; // [rsp+428h] [rbp+328h]
  EVENT_DATA_DESCRIPTOR v209; // [rsp+430h] [rbp+330h] BYREF
  int *v210; // [rsp+450h] [rbp+350h]
  __int64 v211; // [rsp+458h] [rbp+358h]
  __int64 *v212; // [rsp+460h] [rbp+360h]
  __int64 v213; // [rsp+468h] [rbp+368h]
  EVENT_DATA_DESCRIPTOR v214; // [rsp+470h] [rbp+370h] BYREF
  int *v215; // [rsp+490h] [rbp+390h]
  __int64 v216; // [rsp+498h] [rbp+398h]
  __int64 *v217; // [rsp+4A0h] [rbp+3A0h]
  __int64 v218; // [rsp+4A8h] [rbp+3A8h]
  EVENT_DATA_DESCRIPTOR v219; // [rsp+4B0h] [rbp+3B0h] BYREF
  int *v220; // [rsp+4D0h] [rbp+3D0h]
  __int64 v221; // [rsp+4D8h] [rbp+3D8h]
  __int64 *v222; // [rsp+4E0h] [rbp+3E0h]
  __int64 v223; // [rsp+4E8h] [rbp+3E8h]

  v1 = *((_QWORD *)a1 + 81);
  v2 = a1;
  v128 = a1;
  if ( (v1 & 0x80000000000000LL) == 0 && (v1 & 0x40000000000000LL) == 0 )
  {
    HampHostComputeStaticEnforcementSettings(
      a1,
      (struct _RM_ENFORCEMENT_SETTINGS *)&v141,
      (struct _RM_COMMIT_THRESHOLDS *)v161,
      (struct _RM_COMMIT_THRESHOLDS *)v149,
      &v139);
    if ( ((*((_BYTE *)v2 + 655) & 1) == 0 || SDWORD2(v142) < 2 && (BYTE12(v142) & 0x70) == 0 && (BYTE12(v142) & 8) == 0)
      && *((struct _HAM_ACTIVITY **)v2 + 125) == v139 )
    {
      v3 = *((_OWORD *)v2 + 70);
      Buf1[0] = 0uLL;
      Buf1[1] = v3;
      Buf2[0] = 0uLL;
      Buf2[1] = v142;
      if ( !memcmp_0(Buf1, Buf2, 0x20uLL)
        && v151 == *((_QWORD *)v2 + 106)
        && v150 == *((_QWORD *)v2 + 107)
        && !memcmp_0(v161, (char *)v2 + 872, 0x20uLL) )
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
  dword_1800AC208 = 0;
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
  v127 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v2 - 64);
  v12 = *(_QWORD *)(v8 + 40);
  v123 = *((_QWORD *)v2 - 4);
  v13 = *(__int64 (__fastcall **)(char *, _QWORD, __int64, _QWORD, __int64, unsigned __int64 *, _QWORD))(v12 + 24);
  v129 = v10;
  v110 = v13((char *)v2 + 488, v11, v10, v9, v123, &v130, 0LL);
  v14 = v110;
  if ( v110 < 0 )
  {
    v16 = 1;
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v211 = 4LL;
      v210 = &v110;
      v212 = &v123;
      v213 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800928D5, 0LL, 0LL, 4u, &v209);
      v14 = v110;
LABEL_26:
      v16 = 1;
    }
  }
  else
  {
    v110 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, unsigned __int64 *))(v12 + 96))(
             (__int64)v2 + 488,
             v11,
             (__int64)v2 + 24,
             v9,
             v123,
             &v124);
    v14 = v110;
    if ( v110 >= 0 )
    {
      v145 = (v124 * (unsigned __int128)0x1000uLL) >> 64;
      v15 = v124 << 12;
      if ( is_mul_ok(v124, 0x1000uLL) )
      {
        v124 <<= 12;
        v14 = 0;
      }
      else
      {
        v15 = -1LL;
        v14 = -1073741675;
        v124 = -1LL;
      }
      v126 = v130;
      v110 = v14;
      v125 = v15;
      goto LABEL_26;
    }
    v16 = 1;
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v216 = 4LL;
      v215 = &v110;
      v217 = &v123;
      v218 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009291D, 0LL, 0LL, 4u, &v214);
      v14 = v110;
      goto LABEL_26;
    }
  }
  if ( v14 < 0 )
    goto LABEL_74;
  v116 = v16;
  v121 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  P = 0LL;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v20 = -1073741801;
    goto LABEL_44;
  }
  while ( 1 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, PVOID, unsigned int *))(*(_QWORD *)(*((_QWORD *)v2 - 2) + 40LL) + 72LL))(
            (__int64)v2 + 488,
            *((unsigned int *)v2 + 139),
            (__int64)v2 + 24,
            *((unsigned int *)v2 + 140),
            *((_QWORD *)v2 - 4),
            Heap,
            &v116);
    v20 = v19;
    if ( v19 >= 0 )
    {
      v21 = Heap;
      v22 = v116;
      P = v21;
      goto LABEL_31;
    }
    v103 = NtCurrentPeb()->ProcessHeap;
    if ( v19 != -2147483643 )
      break;
    RtlFreeHeap(v103, 0, Heap);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v116);
    if ( !Heap )
    {
      v22 = v111;
      v20 = -1073741801;
      v21 = 0LL;
      goto LABEL_31;
    }
  }
  RtlFreeHeap(v103, 0, Heap);
  v22 = v111;
  v21 = 0LL;
LABEL_31:
  if ( v20 < 0 )
  {
    v24 = (void **)v113;
    goto LABEL_226;
  }
  if ( !v22 )
  {
    v26 = (unsigned int *)v114;
    ProcessHandle = 0LL;
    v24 = (void **)v113;
    v29 = (unsigned int)v115;
LABEL_41:
    v20 = 0;
    goto LABEL_42;
  }
  v23 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v22);
  v113 = v23;
  v24 = (void **)v23;
  if ( !v23 )
  {
    v21 = P;
    v20 = -1073741801;
LABEL_226:
    v26 = (unsigned int *)v114;
    goto LABEL_227;
  }
  memset_0(v23, 0, 8 * v22);
  v25 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4 * v22);
  v114 = v25;
  v26 = (unsigned int *)v25;
  if ( v25 )
  {
    memset_0(v25, 0, 4 * v22);
    ProcessHandle = 0LL;
    v27 = (unsigned int *)P;
    v24 = (void **)v113;
    v28 = v22;
    v29 = (unsigned int)v115;
    do
    {
      v111 = *v27;
      ClientId.UniqueProcess = (HANDLE)v111;
      ClientId.UniqueThread = 0LL;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, __int64, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)v127 + 6) + 40LL)
                                                                                                + 80LL))(
               (char *)v127 + 552,
               *((unsigned int *)v127 + 155),
               v10,
               *((unsigned int *)v127 + 156),
               *((_QWORD *)v127 + 4),
               ProcessHandle) )
        {
          v24[v29] = ProcessHandle;
          v26[v29] = v111;
          v29 = (unsigned int)(v29 + 1);
        }
        else
        {
          NtClose(ProcessHandle);
        }
      }
      v27 += 2;
      --v28;
    }
    while ( v28 );
    v2 = v128;
    v21 = P;
    LODWORD(v115) = v29;
    goto LABEL_41;
  }
  v24 = (void **)v113;
  v20 = -1073741801;
  v21 = P;
LABEL_227:
  v29 = (unsigned int)v115;
LABEL_42:
  if ( v21 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
LABEL_44:
    v24 = (void **)v113;
    v26 = (unsigned int *)v114;
    v29 = (unsigned int)v115;
  }
  if ( v20 >= 0 )
  {
    if ( (_DWORD)v29 )
    {
      v30 = v127;
      v31 = v26;
      v32 = (unsigned int)v29;
      v33 = v24;
      do
      {
        RmpActivityHostCommitDebtCallback(v30, *v33++, *v31++, &v121);
        --v32;
      }
      while ( v32 );
      v2 = v128;
      v10 = v129;
      v26 = (unsigned int *)v114;
    }
    v20 = 0;
  }
  if ( (_DWORD)v29 )
  {
    v34 = v24;
    do
    {
      NtClose(*v34++);
      --v29;
    }
    while ( v29 );
    v10 = v129;
  }
  if ( v24 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v113);
    v26 = (unsigned int *)v114;
  }
  if ( v26 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v114);
  v117 = v20;
  v35 = 1LL;
  if ( v20 < 0 )
  {
    if ( hProvider <= 4u )
    {
      v37 = (char *)v2 - 64;
    }
    else
    {
      v37 = (char *)v2 - 64;
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v221 = 4LL;
        v220 = &v117;
        v131 = *((_QWORD *)v37 + 4);
        v222 = &v131;
        v223 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180096B03, 0LL, 0LL, 4u, &v219);
        v20 = v117;
        v35 = 1LL;
      }
    }
    v36 = v121;
    if ( v20 < 0 )
      v36 = 0LL;
    v121 = v36;
  }
  else
  {
    v36 = v121;
    v37 = (char *)v2 - 64;
    v117 = 0;
  }
  v38 = v126;
  v39 = v126;
  if ( v36 < v126 )
    v39 = v36;
  v40 = v126 - v39;
  if ( v126 && v40 <= 1 )
    v40 = v35;
  v41 = v125;
  v133 = v40 + v125;
  if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    v42 = &word_18008DA4C;
    v132 = *((_QWORD *)v37 + 4);
    v166 = &v132;
    LODWORD(v43) = 0;
    v167 = 8LL;
    if ( v10 )
    {
      v42 = (__int16 *)v10;
      v43 = -1LL;
      do
        ++v43;
      while ( *(_WORD *)(v10 + 2 * v43) );
    }
    v168 = v42;
    v118 = *((_DWORD *)v37 + 156);
    v171 = &v118;
    v173 = &v133;
    v175 = &v126;
    v177 = &v125;
    v179 = &v121;
    v169 = 2 * v43 + 2;
    v170 = 0;
    v172 = 4LL;
    v174 = 8LL;
    v176 = 8LL;
    v178 = 8LL;
    v180 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    EventDescriptor.Keyword = v35;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v163 = &unk_180093CC2;
    v165 = v35;
    UserData.Reserved = 2;
    v164 = 150;
    v119 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    v41 = v125;
    v38 = v126;
  }
  v122 = v38 + v41;
LABEL_74:
  v44 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v45 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v44) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v45 |= 2uLL;
    ++v45[2];
  }
  RtlAcquireSRWLockExclusive(v2);
  *((_DWORD *)v2 + 2) = GetCurrentThreadId();
  v46 = *((_QWORD *)v2 + 81);
  if ( (v46 & 0x80000000000000LL) != 0 )
  {
    v46 &= ~0x80000000000000uLL;
    *((_QWORD *)v2 + 106) = 0LL;
    *((_QWORD *)v2 + 81) = v46;
    *((_QWORD *)v2 + 107) = 0LL;
  }
  v47 = (v46 >> 54) & 1;
  if ( (v46 & 0x100000000000000LL) != 0 )
  {
    LODWORD(v47) = v47 | 2;
    *((_QWORD *)v2 + 81) = v46 & 0xFEFFFFFFFFFFFFFFuLL;
  }
  HampHostComputeStaticEnforcementSettings(
    v2,
    (struct _RM_ENFORCEMENT_SETTINGS *)v158,
    (struct _RM_COMMIT_THRESHOLDS *)&v152,
    (struct _RM_COMMIT_THRESHOLDS *)v155,
    &v134);
  v48 = -1LL;
  v49 = v152;
  v50 = v153[0];
  if ( v122 >= (unsigned __int64)v152 )
  {
    if ( v122 < *((_QWORD *)&v152 + 1) )
    {
      v49 = *((_QWORD *)&v152 + 1);
      v51 = v152;
    }
    else if ( v122 < v153[0] )
    {
      v51 = *((_QWORD *)&v152 + 1);
      v49 = v153[0];
    }
    else
    {
      v51 = v153[0];
      v49 = -1LL;
    }
  }
  else
  {
    v51 = 0LL;
  }
  v52 = v153[1];
  v53 = v122 >> 3;
  if ( v153[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    v53 = v153[1] >> 4;
  if ( v53 <= 0x1400000 )
    v53 = 20971520LL;
  v54 = v53 + v122 - 1;
  if ( v53 == 20971520 )
    v55 = v54 / 0x1400000;
  else
    v55 = v54 / v53;
  v56 = -1LL;
  v58 = v55;
  v57 = v55 * (unsigned __int128)v53;
  v146 = *((_QWORD *)&v57 + 1);
  if ( is_mul_ok(v58, v53) )
    v56 = v57;
  if ( v153[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v56 > v153[1] )
  {
    v106 = v53 + v153[1] - 1;
    v107 = v106 / v53 * v53;
    v56 = -1LL;
    v147 = (v106 / v53 * (unsigned __int128)v53) >> 64;
    if ( is_mul_ok(v106 / v53, v53) )
      v56 = v107;
  }
  if ( v56 == -1LL || (v59 = v56 + v53, v56 + v53 < v56) )
    v59 = -1LL;
  if ( v153[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v108 = v153[1];
    if ( v56 < v153[1] )
      v108 = v56;
    v56 = v108;
    if ( v153[1] < v59 )
      v59 = v153[1];
  }
  v60 = 2 * v53;
  v143 = v59;
  if ( 2 * v53 >= v56 )
    v60 = v56;
  v61 = v56 - v60;
  v144 = v61;
  if ( v51 <= v61 )
    v51 = v61;
  if ( v122 <= v153[1] && v49 >= v59 )
    v49 = v59;
  v158[0] = v51;
  v158[1] = v49;
  if ( v49 != -1LL )
  {
    v62 = *((_QWORD *)v2 + 121);
    if ( v62 <= v49 )
      v62 = v49;
    *((_QWORD *)v2 + 121) = v62;
  }
  v63 = v134;
  if ( *((_QWORD *)v2 + 86) )
  {
    LODWORD(P) = (*((_QWORD *)v2 + 81) & 0x400000000000000LL) != 0 && *((struct _HAM_ACTIVITY **)v2 + 125) != v134;
    FirstActivity = HampHostGetFirstActivity(v2);
    if ( FirstActivity && (*((_DWORD *)FirstActivity + 28) & 0x80000) != 0 )
    {
      if ( v66 != *((_QWORD *)v2 + 139) )
        v65 = 1;
      LODWORD(P) = v65;
    }
    if ( *((_QWORD *)v2 + 120) )
      LODWORD(P) = 1;
  }
  else
  {
    LODWORD(P) = 0;
  }
  v67 = (*((_QWORD *)v2 + 111) > v50 || *((_QWORD *)v2 + 112) > v52)
     && (*((_QWORD *)v2 + 81) & 0x200000000000000LL) == 0;
  *((_QWORD *)v2 + 106) = v157;
  *((_QWORD *)v2 + 107) = v156;
  *((_QWORD *)v2 + 125) = v63;
  v68 = v152;
  v69 = *(_OWORD *)v153;
  *(_OWORD *)((char *)v2 + 872) = v152;
  *(_OWORD *)((char *)v2 + 888) = v69;
  if ( v63 )
    v70 = *((_QWORD *)v63 + 59);
  else
    v70 = v50;
  if ( v70 == *((_QWORD *)v2 + 108) )
  {
    v111 = 0;
  }
  else
  {
    v111 = 1;
    *((_QWORD *)v2 + 108) = v70;
  }
  if ( v50 == -1LL || (v97 = *((_QWORD *)v2 + 119), v97 == -1) )
  {
    v71 = -1LL;
  }
  else
  {
    v98 = v50 + v97;
    v71 = -1LL;
    if ( v98 >= v50 )
      v71 = v98;
  }
  *((_QWORD *)v2 + 117) = v71;
  v72 = *((_QWORD *)v2 + 117);
  if ( v72 == -1LL || (v99 = *((_QWORD *)v2 + 120), v99 == -1) )
  {
    v73 = -1LL;
  }
  else
  {
    v100 = v72 + v99;
    v73 = -1LL;
    if ( v100 >= v72 )
      v73 = v100;
  }
  *((_QWORD *)v2 + 117) = v73;
  v74 = (__int64 *)((char *)v2 + 904);
  v75 = *((_QWORD *)v2 + 120);
  *(_OWORD *)((char *)v2 + 904) = v68;
  *(_OWORD *)((char *)v2 + 920) = v69;
  v76 = *((_QWORD *)v2 + 116);
  if ( v76 == -1LL || v75 == -1 )
  {
    v77 = -1LL;
  }
  else
  {
    v77 = -1LL;
    if ( v76 + v75 >= v76 )
      v77 = v76 + v75;
  }
  *((_QWORD *)v2 + 116) = v77;
  v78 = *((_QWORD *)v2 + 115);
  if ( v78 == -1LL || v75 == -1 )
  {
    v79 = -1LL;
  }
  else
  {
    v79 = -1LL;
    if ( v78 + v75 >= v78 )
      v79 = v78 + v75;
  }
  *((_QWORD *)v2 + 115) = v79;
  v80 = *((_QWORD *)v2 + 114);
  if ( v80 == -1LL || v75 == -1 )
  {
    v81 = -1LL;
  }
  else
  {
    v81 = -1LL;
    if ( v80 + v75 >= v80 )
      v81 = v80 + v75;
  }
  *((_QWORD *)v2 + 114) = v81;
  v82 = *v74;
  if ( *v74 != -1 && v75 != -1 && v82 + v75 >= v82 )
    v48 = v82 + v75;
  *v74 = v48;
  *((_QWORD *)v2 + 81) &= ~0x40000000000000uLL;
  if ( HampLockTrackerId != -1 )
  {
    v83 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v83 & 2) == 0 )
      __int2c();
    v6 = v83[2]-- == 1LL;
    if ( v6 )
      *v83 &= ~2uLL;
  }
  *((_DWORD *)v2 + 2) = 0;
  RtlReleaseSRWLockExclusive(v2);
  v84 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 97) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v67 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)v2 - 2) + 40LL) + 192LL))(
      *((_QWORD *)v2 + 124),
      1LL);
    HampHostAcquireLockExclusiveEx(v2, 0);
    *((_QWORD *)v2 + 81) &= ~0x80000000000000uLL;
    HampHostReleaseLockExclusiveEx(v2, v101);
    RmpSystemResourceTimerSet(v2, *(unsigned int *)(v84 + 1012), *((void **)v2 + 124));
    if ( dword_1800AB2C0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
      {
        v135 = *((_QWORD *)v2 - 4);
        v199 = &v135;
        v201 = &v153[1];
        v203 = v153;
        v205 = &v157;
        v207 = &v156;
        v200 = v102;
        v202 = v102;
        v204 = v102;
        v206 = v102;
        v208 = v102;
        TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098AFE, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  if ( v122 >= (unsigned __int64)v152 )
  {
    if ( v122 < *((_QWORD *)&v152 + 1) )
    {
      v85 = 2;
    }
    else
    {
      v85 = 4;
      if ( v122 < v153[0] )
        v85 = 3;
    }
  }
  else
  {
    v85 = 1;
  }
  v86 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v87 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v86) )
      __int2c();
    *v87 |= 1uLL;
    ++v87[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800AC208 = GetCurrentThreadId();
  if ( v85 >= 4 )
    RmHamHostTryDecommitOffered((struct _RM_HAM_ACTIVITY_HOST *)((char *)v2 - 64), v122, v153[0]);
  v88 = RmpActivityHostApplyEnforcementSettings((char *)v2 - 64, (struct _RM_ENFORCEMENT_SETTINGS *)v158, v47);
  v89 = v88;
  if ( (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 97) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 + 648) & 1) != 0 )
    goto LABEL_251;
  if ( v88 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
LABEL_251:
    if ( v89 < 0 )
    {
      RmpReleaseGlobalLock();
      HampHostQueueTerminateEx((__int64)v2, 3u, 4865, 0LL, 0, 0);
      RmpAcquireGlobalLock();
    }
  }
  v90 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v91 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v90) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v91 |= 2uLL;
    ++v91[2];
  }
  RtlAcquireSRWLockExclusive(v2);
  CurrentThreadId = GetCurrentThreadId();
  v93 = v153[0];
  *((_DWORD *)v2 + 2) = CurrentThreadId;
  v94 = *((_QWORD *)v2 + 163);
  if ( (v93 != v94 || v111)
    && (int)ExecutionModel::ResourceManager::CommitMemoryLimitChange(
              *(ExecutionModel::ResourceManager **)(*((_QWORD *)v2 - 2) + 2624LL),
              (struct _RM_HAM_ACTIVITY_HOST *)((char *)v2 + 24),
              v94,
              v93,
              *((_QWORD *)v2 + 108)) >= 0 )
  {
    *((_QWORD *)v2 + 163) = v93;
  }
  v95 = *((unsigned int *)v2 + 328);
  if ( (_DWORD)v95 != v85 )
  {
    if ( dword_1800AB2C0 > 4u )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)v2 + 12);
      v96 = *((_DWORD *)v2 + 140);
      v186 = &v119;
      v136 = *((_QWORD *)v2 - 4);
      v188 = &v136;
      v190 = &v109;
      v192 = &v122;
      v194 = v153;
      v196 = &v159;
      v119 = v96;
      v187 = 4LL;
      v189 = 8LL;
      v109 = v85;
      v191 = 1LL;
      v193 = 8LL;
      v195 = 8LL;
      v197 = 8LL;
      *(_DWORD *)&v138.Level = 4;
      v181.Ptr = (ULONGLONG)off_1800AB2C8;
      *(_DWORD *)&v138.Id = 184549376;
      v138.Keyword = 0LL;
      v181.Size = *(unsigned __int16 *)off_1800AB2C8;
      v182 = &unk_18009890E;
      v181.Reserved = 2;
      v183 = 119;
      v184 = 1;
      v118 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &v138, 0LL, 0LL, 9u, &v181);
      v95 = *((unsigned int *)v2 + 328);
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(v84 + 848) + 32LL))(
      *(_QWORD *)(v84 + 848),
      (__int64)v2 - 64,
      v95,
      v85);
    *((_DWORD *)v2 + 328) = v85;
  }
  if ( (_DWORD)P )
  {
    v105 = HampHostCheckEnterDependencyWorker(v2);
    if ( v105 )
    {
      HampHostReleaseLockExclusiveEx(v2, v104);
      RmpReleaseGlobalLock();
      HampDepGroupRunStateChangeWorker(v105);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(v2, 0);
    }
  }
  return 1LL;
}
