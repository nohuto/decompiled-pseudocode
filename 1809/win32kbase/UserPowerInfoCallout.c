/*
 * XREFs of UserPowerInfoCallout @ 0x1C0095E9C
 * Callers:
 *     W32CalloutDispatch @ 0x1C0025DE0 (W32CalloutDispatch.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0035E94 (-CitpLastInputUpdate@@YAXEI@Z.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0037220 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceDisplayReqChange @ 0x1C00963DC (EtwTraceDisplayReqChange.c)
 *     CitDisplayRequestChange @ 0x1C0096404 (CitDisplayRequestChange.c)
 *     QueuePowerRequest @ 0x1C0096830 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00973DC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SqmPowerState @ 0x1C0098470 (SqmPowerState.c)
 *     SetPendingInput @ 0x1C00A5FD0 (SetPendingInput.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00E1758 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00E1A40 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     UserLogError @ 0x1C00F46E0 (UserLogError.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C0149BB8 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, int a5, tagObjLock *a6)
{
  tagObjLock *v6; // r13
  unsigned int v7; // edi
  int v9; // r12d
  int v10; // r15d
  unsigned int v11; // r14d
  int v12; // r15d
  int v13; // r15d
  int v14; // r15d
  LARGE_INTEGER *v15; // rbx
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rsi
  int v21; // esi
  int v22; // ebx
  bool v23; // zf
  bool v24; // sf
  char v26; // r12
  char v27; // r13
  __int64 v28; // r15
  LARGE_INTEGER *v29; // rbx
  struct tagTHREADINFO *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rsi
  __int64 v35; // rbx
  int v36; // r15d
  __int64 v37; // rcx
  char v38; // r13
  char v39; // r15
  __int64 v40; // rcx
  LARGE_INTEGER *v41; // rbx
  struct tagTHREADINFO *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // r12
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 *v52; // r13
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v57; // r8
  int v58; // r15d
  int v59; // r15d
  int v60; // r15d
  int v61; // r15d
  LARGE_INTEGER *v62; // rbx
  struct tagTHREADINFO *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 *v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 *v71; // rbx
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rbx
  LARGE_INTEGER *v77; // rbx
  struct tagTHREADINFO *v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 *v82; // r15
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 *v86; // rbx
  __int64 v87; // r8
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 *v92; // rbx
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 *v97; // rbx
  __int64 v98; // r8
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 *v102; // rbx
  __int64 v103; // r8
  __int64 v104; // rcx
  LARGE_INTEGER *v105; // rbx
  struct tagTHREADINFO *v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 *v110; // r15
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 *v114; // rbx
  __int64 v115; // r8
  __int64 v116; // rcx
  LARGE_INTEGER *v117; // rbx
  struct tagTHREADINFO *v118; // rbx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 *v122; // r15
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 *v126; // rbx
  __int64 v127; // r8
  __int64 v128; // rcx
  LARGE_INTEGER *v129; // rbx
  struct tagTHREADINFO *v130; // rbx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 *v134; // r15
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 *v138; // rbx
  __int64 v139; // r8
  __int64 v140; // rcx
  LARGE_INTEGER *v141; // rbx
  struct tagTHREADINFO *v142; // rbx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 *v146; // r15
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 *v150; // rbx
  __int64 v151; // r8
  __int64 v152; // rcx
  LARGE_INTEGER *v153; // rbx
  struct tagTHREADINFO *v154; // rbx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 *v158; // r15
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 *v162; // rbx
  __int64 v163; // r8
  __int64 v164; // rcx
  LARGE_INTEGER *v165; // rbx
  struct tagTHREADINFO *v166; // rbx
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 *v170; // r15
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 *v174; // rbx
  __int64 v175; // r8
  __int64 v176; // rcx
  LARGE_INTEGER *v177; // rbx
  struct tagTHREADINFO *v178; // rbx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 *v182; // r15
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 *v186; // rbx
  __int64 v187; // r8
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // rcx
  __int64 v192; // rcx
  LARGE_INTEGER *v193; // rbx
  struct tagTHREADINFO *v194; // rbx
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 *v198; // rsi
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 *v202; // rbx
  __int64 v203; // r8
  enum POWER_MONITOR_REQUEST_REASON v204; // ecx
  __int64 v205; // rcx
  LARGE_INTEGER *v206; // rbx
  struct tagTHREADINFO *v207; // rbx
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 *v211; // r15
  __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 *v215; // rbx
  __int64 v216; // r8
  __int64 v217; // rcx
  LARGE_INTEGER *v218; // rbx
  struct tagTHREADINFO *v219; // rbx
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 *v223; // r15
  __int64 v224; // rax
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 *v227; // rbx
  __int64 v228; // r8
  __int64 v229; // rdx
  __int64 v230; // rcx
  __int64 v231; // r8
  __int64 v232; // rcx
  LARGE_INTEGER *v233; // rbx
  struct tagTHREADINFO *v234; // rbx
  __int64 v235; // rdx
  __int64 v236; // rcx
  __int64 v237; // r8
  __int64 *v238; // r15
  __int64 v239; // rax
  __int64 v240; // rdx
  __int64 v241; // rcx
  __int64 *v242; // rbx
  __int64 v243; // r8
  __int64 v244; // rcx
  LARGE_INTEGER *v245; // rbx
  struct tagTHREADINFO *v246; // rbx
  __int64 v247; // rdx
  __int64 v248; // rcx
  __int64 v249; // r8
  __int64 *v250; // r15
  __int64 v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 *v254; // rbx
  __int64 v255; // r8
  __int64 v256; // rcx
  LARGE_INTEGER *v257; // rbx
  struct tagTHREADINFO *v258; // rbx
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // r8
  __int64 *v262; // r15
  __int64 v263; // rax
  __int64 v264; // rdx
  __int64 v265; // rcx
  __int64 *v266; // rbx
  __int64 v267; // r8
  __int64 v268; // rcx
  LARGE_INTEGER *v269; // rbx
  struct tagTHREADINFO *v270; // rbx
  __int64 v271; // rdx
  __int64 v272; // rcx
  __int64 v273; // r8
  __int64 *v274; // rsi
  __int64 v275; // rax
  __int64 v276; // rdx
  __int64 v277; // rcx
  __int64 *v278; // rbx
  __int64 v279; // r8
  __int64 v280; // rcx
  LARGE_INTEGER *v281; // rbx
  struct tagTHREADINFO *v282; // rbx
  __int64 v283; // rdx
  __int64 v284; // rcx
  __int64 v285; // r8
  __int64 *v286; // r15
  __int64 v287; // rax
  __int64 v288; // rdx
  __int64 v289; // rcx
  __int64 *v290; // rbx
  __int64 v291; // r8
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 *v294; // rbx
  __int64 v295; // r8
  LARGE_INTEGER *v296; // rbx
  struct tagTHREADINFO *v297; // rbx
  __int64 v298; // rdx
  __int64 v299; // rcx
  __int64 v300; // r8
  __int64 *v301; // r15
  __int64 v302; // rax
  __int64 v303; // rdx
  __int64 v304; // rcx
  __int64 *v305; // rbx
  __int64 v306; // r8
  __int64 v307; // rcx
  bool v308[4]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v309; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v310; // [rsp+58h] [rbp-B0h]
  tagObjLock *v311; // [rsp+60h] [rbp-A8h] BYREF
  tagObjLock *v312; // [rsp+68h] [rbp-A0h] BYREF
  tagObjLock *v313; // [rsp+70h] [rbp-98h] BYREF
  tagObjLock *v314; // [rsp+78h] [rbp-90h] BYREF
  tagObjLock *v315; // [rsp+80h] [rbp-88h] BYREF
  tagObjLock *v316; // [rsp+88h] [rbp-80h] BYREF
  tagObjLock *v317; // [rsp+90h] [rbp-78h] BYREF
  tagObjLock *v318; // [rsp+98h] [rbp-70h] BYREF
  tagObjLock *v319; // [rsp+A0h] [rbp-68h] BYREF
  tagObjLock *v320; // [rsp+A8h] [rbp-60h] BYREF
  tagObjLock *v321; // [rsp+B0h] [rbp-58h] BYREF
  tagObjLock *v322; // [rsp+B8h] [rbp-50h] BYREF
  tagObjLock *v323; // [rsp+C0h] [rbp-48h] BYREF
  tagObjLock *v324; // [rsp+C8h] [rbp-40h] BYREF
  tagObjLock *v325; // [rsp+D0h] [rbp-38h] BYREF
  tagObjLock *v326; // [rsp+D8h] [rbp-30h] BYREF
  tagObjLock *v327; // [rsp+E0h] [rbp-28h] BYREF
  tagObjLock *v328; // [rsp+E8h] [rbp-20h] BYREF
  tagObjLock *v329; // [rsp+F0h] [rbp-18h] BYREF
  tagObjLock *v330; // [rsp+F8h] [rbp-10h] BYREF
  tagObjLock *v331; // [rsp+100h] [rbp-8h] BYREF
  tagObjLock *v332; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v333[32]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v334[32]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v335[32]; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v336[32]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v337[32]; // [rsp+190h] [rbp+88h] BYREF
  _BYTE v338[32]; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE v339[32]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE v340[32]; // [rsp+1F0h] [rbp+E8h] BYREF
  _BYTE v341[32]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v342[32]; // [rsp+230h] [rbp+128h] BYREF
  _BYTE v343[32]; // [rsp+250h] [rbp+148h] BYREF
  _BYTE v344[32]; // [rsp+270h] [rbp+168h] BYREF
  _BYTE v345[32]; // [rsp+290h] [rbp+188h] BYREF
  _BYTE v346[32]; // [rsp+2B0h] [rbp+1A8h] BYREF
  _BYTE v347[32]; // [rsp+2D0h] [rbp+1C8h] BYREF
  _BYTE v348[32]; // [rsp+2F0h] [rbp+1E8h] BYREF
  _BYTE v349[32]; // [rsp+310h] [rbp+208h] BYREF
  _BYTE v350[32]; // [rsp+330h] [rbp+228h] BYREF
  _BYTE v351[32]; // [rsp+350h] [rbp+248h] BYREF
  _BYTE v352[32]; // [rsp+370h] [rbp+268h] BYREF
  _BYTE v353[32]; // [rsp+390h] [rbp+288h] BYREF
  _BYTE v354[32]; // [rsp+3B0h] [rbp+2A8h] BYREF

  v6 = a6;
  v7 = 0;
  v9 = a3;
  v311 = a6;
  v10 = a1;
  v11 = 0;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  if ( !(_DWORD)a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_4;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v333, 1);
    v48 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v333);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v48;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v332);
    v52 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = v52[2];
        v53 = *v52;
        v52[2] = 0LL;
        if ( !*(_DWORD *)(v53 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51);
        DomainLockRef = GetDomainLockRef(8);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v57);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v52);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
        v52 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v11 = 0;
    }
    tagObjLock::UnLock(v332);
    UserSessionSwitchLeaveCrit();
    v6 = v311;
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
LABEL_4:
  if ( !v10 )
  {
    if ( v9 != 20 || !a4 )
      return (unsigned int)-1073741823;
    v104 = 0x401485756F5E16B8LL - *(_QWORD *)a4;
    if ( *(_QWORD *)a4 == 0x401485756F5E16B8LL )
      v104 = 0xCDD759D15F2109B2uLL - *((_QWORD *)a4 + 1);
    if ( v104 )
    {
      v116 = *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 - *(_QWORD *)a4;
      if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4 )
        v116 = *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
      if ( v116 )
      {
        v128 = *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4 )
          v128 = *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
        if ( v128 )
        {
          v140 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - *(_QWORD *)a4;
          if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *(_QWORD *)a4 )
            v140 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
          if ( v140 )
          {
            v152 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
              v152 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
            if ( !v152 )
            {
              v153 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v153 )
                v153[1] = KeQueryPerformanceCounter(0LL);
              InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v343, 1);
              v154 = EnterCritAvoidingDitHitTestHazard(0, 1);
              InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v343);
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v154;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v320);
              v158 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = v158[2];
                  v159 = *v158;
                  v158[2] = 0LL;
                  if ( !*(_DWORD *)(v159 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v156, v155, v157);
                  v162 = GetDomainLockRef(8);
                  if ( v162 == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v161, v160, v163);
                  tagObjLock::UnLock((tagObjLock *)v162);
                  HMUnlockObject(*v158);
                  tagObjLock::LockExclusive((struct _KTHREAD **)v162);
                  v158 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v11 = 0;
              }
              tagObjLock::UnLock(v320);
              dword_1C01CE200 = a4[4];
              goto LABEL_42;
            }
            v164 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
              v164 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
            if ( !v164 )
            {
              v165 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v165 )
                v165[1] = KeQueryPerformanceCounter(0LL);
              InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v344, 1);
              v166 = EnterCritAvoidingDitHitTestHazard(0, 1);
              InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v344);
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v166;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v321);
              v170 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = v170[2];
                  v171 = *v170;
                  v170[2] = 0LL;
                  if ( !*(_DWORD *)(v171 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v168, v167, v169);
                  v174 = GetDomainLockRef(8);
                  if ( v174 == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v173, v172, v175);
                  tagObjLock::UnLock((tagObjLock *)v174);
                  HMUnlockObject(*v170);
                  tagObjLock::LockExclusive((struct _KTHREAD **)v174);
                  v170 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v11 = 0;
              }
              tagObjLock::UnLock(v321);
              dword_1C01CE1F8 = a4[4];
              goto LABEL_42;
            }
            v176 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4 )
              v176 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - *((_QWORD *)a4 + 1);
            if ( !v176 )
            {
              v177 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v177 )
                v177[1] = KeQueryPerformanceCounter(0LL);
              InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v345, 1);
              v178 = EnterCritAvoidingDitHitTestHazard(0, 1);
              InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v345);
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v178;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v322);
              v182 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = v182[2];
                  v183 = *v182;
                  v182[2] = 0LL;
                  if ( !*(_DWORD *)(v183 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v180, v179, v181);
                  v186 = GetDomainLockRef(8);
                  if ( v186 == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v185, v184, v187);
                  tagObjLock::UnLock((tagObjLock *)v186);
                  HMUnlockObject(*v182);
                  tagObjLock::LockExclusive((struct _KTHREAD **)v186);
                  v182 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v11 = 0;
              }
              tagObjLock::UnLock(v322);
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v189, v188, v190);
              dword_1C01CE208 = a4[4];
              goto LABEL_42;
            }
            v191 = 0x4B00E9D55D3E9A59LL - *(_QWORD *)a4;
            if ( *(_QWORD *)a4 == 0x4B00E9D55D3E9A59LL )
              v191 = 0x486551FF34FFBDA6LL - *((_QWORD *)a4 + 1);
            if ( !v191 )
              goto LABEL_392;
            v191 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
              v191 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
            if ( v191 )
            {
              v192 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)a4 )
                v192 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - *((_QWORD *)a4 + 1);
              if ( v192 )
              {
                v205 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4 )
                  v205 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *((_QWORD *)a4 + 1);
                if ( !v205 )
                {
                  v206 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                  if ( v206 )
                    v206[1] = KeQueryPerformanceCounter(0LL);
                  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v347, 1);
                  v207 = EnterCritAvoidingDitHitTestHazard(0, 1);
                  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v347);
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v207;
                  gbValidateHandleForIL = 1;
                  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v324);
                  v211 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = v211[2];
                      v212 = *v211;
                      v211[2] = 0LL;
                      if ( !*(_DWORD *)(v212 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v209, v208, v210);
                      v215 = GetDomainLockRef(8);
                      if ( v215 == &gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v214, v213, v216);
                      tagObjLock::UnLock((tagObjLock *)v215);
                      HMUnlockObject(*v211);
                      tagObjLock::LockExclusive((struct _KTHREAD **)v215);
                      v211 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  tagObjLock::UnLock(v324);
                  LOBYTE(v7) = a4[4] != 0;
                  dword_1C01CE26C = v7;
                  goto LABEL_42;
                }
                v217 = *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4 )
                  v217 = *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 - *((_QWORD *)a4 + 1);
                if ( !v217 )
                {
                  v218 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                  if ( v218 )
                    v218[1] = KeQueryPerformanceCounter(0LL);
                  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v348, 1);
                  v219 = EnterCritAvoidingDitHitTestHazard(0, 1);
                  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v348);
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v219;
                  gbValidateHandleForIL = 1;
                  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v325);
                  v223 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = v223[2];
                      v224 = *v223;
                      v223[2] = 0LL;
                      if ( !*(_DWORD *)(v224 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v221, v220, v222);
                      v227 = GetDomainLockRef(8);
                      if ( v227 == &gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v226, v225, v228);
                      tagObjLock::UnLock((tagObjLock *)v227);
                      HMUnlockObject(*v223);
                      tagObjLock::LockExclusive((struct _KTHREAD **)v227);
                      v223 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  tagObjLock::UnLock(v325);
                  if ( !a4[4] )
                  {
                    dword_1C01CE23C = 0;
                    goto LABEL_42;
                  }
                  if ( gbTtmEnabled )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v230, v229, v231);
                  dword_1C01CE23C = 1;
                  LODWORD(v309) = 5;
                  v310 = 13LL;
                  goto LABEL_41;
                }
                v232 = *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4 )
                  v232 = *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 - *((_QWORD *)a4 + 1);
                if ( v232 )
                {
                  v244 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *(_QWORD *)a4;
                  if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
                    v244 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
                  if ( v244 )
                  {
                    v256 = 0x40979553FBD9AA66LL - *(_QWORD *)a4;
                    if ( *(_QWORD *)a4 == 0x40979553FBD9AA66LL )
                      v256 = 0xB8EA659D6EED44BAuLL - *((_QWORD *)a4 + 1);
                    if ( v256 )
                    {
                      v268 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)a4;
                      if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4 )
                        v268 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *((_QWORD *)a4 + 1);
                      if ( v268 )
                      {
                        v280 = *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 - *(_QWORD *)a4;
                        if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *(_QWORD *)a4 )
                          v280 = *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 - *((_QWORD *)a4 + 1);
                        if ( v280 )
                          return (unsigned int)-1073741823;
                        v281 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                        if ( v281 )
                          v281[1] = KeQueryPerformanceCounter(0LL);
                        InputTraceLogging::Perf::CritAcquire::CritAcquire(
                          (InputTraceLogging::Perf::CritAcquire *)v353,
                          1);
                        v282 = EnterCritAvoidingDitHitTestHazard(0, 1);
                        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v353);
                        EtwTraceAcquiredExclusiveUserCrit();
                        gptiCurrent = v282;
                        gbValidateHandleForIL = 1;
                        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v330);
                        v286 = (__int64 *)gpducstulHead;
                        if ( gpducstulHead )
                        {
                          do
                          {
                            gpducstulHead = v286[2];
                            v287 = *v286;
                            v286[2] = 0LL;
                            if ( !*(_DWORD *)(v287 + 8) )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v284, v283, v285);
                            v290 = GetDomainLockRef(8);
                            if ( v290 == &gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v289, v288, v291);
                            tagObjLock::UnLock((tagObjLock *)v290);
                            HMUnlockObject(*v286);
                            tagObjLock::LockExclusive((struct _KTHREAD **)v290);
                            v286 = (__int64 *)gpducstulHead;
                          }
                          while ( gpducstulHead );
                          v11 = 0;
                        }
                        tagObjLock::UnLock(v330);
                        v294 = GetDomainLockRef(9);
                        if ( v294 == &gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v293, v292, v295);
                        tagObjLock::LockExclusive((struct _KTHREAD **)v294);
                        dword_1C01CE270 = a4[4] != 0;
                        UserLogError((unsigned int)(-(unsigned __int8)dword_1C01CE270 - 2147482947));
                        CBaseInput::OnInputSuppressedValueChanged(a4[4] != 0);
                        tagObjLock::UnLock((tagObjLock *)v294);
                      }
                      else
                      {
                        if ( !a4[4] )
                          return v11;
                        v269 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                        if ( v269 )
                          v269[1] = KeQueryPerformanceCounter(0LL);
                        InputTraceLogging::Perf::CritAcquire::CritAcquire(
                          (InputTraceLogging::Perf::CritAcquire *)v352,
                          1);
                        v270 = EnterCritAvoidingDitHitTestHazard(0, 1);
                        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v352);
                        EtwTraceAcquiredExclusiveUserCrit();
                        gptiCurrent = v270;
                        gbValidateHandleForIL = 1;
                        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v329);
                        v274 = (__int64 *)gpducstulHead;
                        if ( gpducstulHead )
                        {
                          do
                          {
                            gpducstulHead = v274[2];
                            v275 = *v274;
                            v274[2] = 0LL;
                            if ( !*(_DWORD *)(v275 + 8) )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v272, v271, v273);
                            v278 = GetDomainLockRef(8);
                            if ( v278 == &gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v277, v276, v279);
                            tagObjLock::UnLock((tagObjLock *)v278);
                            HMUnlockObject(*v274);
                            tagObjLock::LockExclusive((struct _KTHREAD **)v278);
                            v274 = (__int64 *)gpducstulHead;
                          }
                          while ( gpducstulHead );
                          v11 = 0;
                        }
                        tagObjLock::UnLock(v329);
                        gdwUpdateKeyboard |= 2u;
                      }
                    }
                    else
                    {
                      v257 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                      if ( v257 )
                        v257[1] = KeQueryPerformanceCounter(0LL);
                      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v351, 1);
                      v258 = EnterCritAvoidingDitHitTestHazard(0, 1);
                      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v351);
                      EtwTraceAcquiredExclusiveUserCrit();
                      gptiCurrent = v258;
                      gbValidateHandleForIL = 1;
                      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v328);
                      v262 = (__int64 *)gpducstulHead;
                      if ( gpducstulHead )
                      {
                        do
                        {
                          gpducstulHead = v262[2];
                          v263 = *v262;
                          v262[2] = 0LL;
                          if ( !*(_DWORD *)(v263 + 8) )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v260, v259, v261);
                          v266 = GetDomainLockRef(8);
                          if ( v266 == &gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v265, v264, v267);
                          tagObjLock::UnLock((tagObjLock *)v266);
                          HMUnlockObject(*v262);
                          tagObjLock::LockExclusive((struct _KTHREAD **)v266);
                          v262 = (__int64 *)gpducstulHead;
                        }
                        while ( gpducstulHead );
                        v11 = 0;
                      }
                      tagObjLock::UnLock(v328);
                      dword_1C01CE268 = a4[4];
                    }
                  }
                  else
                  {
                    v245 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                    if ( v245 )
                      v245[1] = KeQueryPerformanceCounter(0LL);
                    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v350, 1);
                    v246 = EnterCritAvoidingDitHitTestHazard(0, 1);
                    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v350);
                    EtwTraceAcquiredExclusiveUserCrit();
                    gptiCurrent = v246;
                    gbValidateHandleForIL = 1;
                    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v327);
                    v250 = (__int64 *)gpducstulHead;
                    if ( gpducstulHead )
                    {
                      do
                      {
                        gpducstulHead = v250[2];
                        v251 = *v250;
                        v250[2] = 0LL;
                        if ( !*(_DWORD *)(v251 + 8) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v248, v247, v249);
                        v254 = GetDomainLockRef(8);
                        if ( v254 == &gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v253, v252, v255);
                        tagObjLock::UnLock((tagObjLock *)v254);
                        HMUnlockObject(*v250);
                        tagObjLock::LockExclusive((struct _KTHREAD **)v254);
                        v250 = (__int64 *)gpducstulHead;
                      }
                      while ( gpducstulHead );
                      v11 = 0;
                    }
                    tagObjLock::UnLock(v327);
                    dword_1C01CE20C = a4[4];
                  }
                }
                else
                {
                  v233 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                  if ( v233 )
                    v233[1] = KeQueryPerformanceCounter(0LL);
                  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v349, 1);
                  v234 = EnterCritAvoidingDitHitTestHazard(0, 1);
                  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v349);
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v234;
                  gbValidateHandleForIL = 1;
                  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v326);
                  v238 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = v238[2];
                      v239 = *v238;
                      v238[2] = 0LL;
                      if ( !*(_DWORD *)(v239 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v236, v235, v237);
                      v242 = GetDomainLockRef(8);
                      if ( v242 == &gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v241, v240, v243);
                      tagObjLock::UnLock((tagObjLock *)v242);
                      HMUnlockObject(*v238);
                      tagObjLock::LockExclusive((struct _KTHREAD **)v242);
                      v238 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  tagObjLock::UnLock(v326);
                  dword_1C01CE264 = a4[4];
                }
                goto LABEL_42;
              }
              v193 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v193 )
                v193[1] = KeQueryPerformanceCounter(0LL);
              InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v346, 1);
              v194 = EnterCritAvoidingDitHitTestHazard(0, 1);
              InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v346);
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v194;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v323);
              v198 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = v198[2];
                  v199 = *v198;
                  v198[2] = 0LL;
                  if ( !*(_DWORD *)(v199 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v196, v195, v197);
                  v202 = GetDomainLockRef(8);
                  if ( v202 == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v201, v200, v203);
                  tagObjLock::UnLock((tagObjLock *)v202);
                  HMUnlockObject(*v198);
                  tagObjLock::LockExclusive((struct _KTHREAD **)v202);
                  v198 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v11 = 0;
              }
              tagObjLock::UnLock(v323);
              if ( gbTtmEnabled || gProtocolType || dword_1C01CE248 )
                goto LABEL_42;
              v204 = MonitorRequestReasonBatteryCountChange;
            }
            else
            {
LABEL_392:
              v296 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v191, a2, a3);
              if ( v296 )
                v296[1] = KeQueryPerformanceCounter(0LL);
              InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v354, 1);
              v297 = EnterCritAvoidingDitHitTestHazard(0, 1);
              InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v354);
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v297;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v331);
              v301 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = v301[2];
                  v302 = *v301;
                  v301[2] = 0LL;
                  if ( !*(_DWORD *)(v302 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v299, v298, v300);
                  v305 = GetDomainLockRef(8);
                  if ( v305 == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v304, v303, v306);
                  tagObjLock::UnLock((tagObjLock *)v305);
                  HMUnlockObject(*v301);
                  tagObjLock::LockExclusive((struct _KTHREAD **)v305);
                  v301 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v11 = 0;
              }
              tagObjLock::UnLock(v331);
              if ( gSqmIsOptedIn && !gProtocolType )
                SqmPowerState();
              dword_1C01CE248 = a4[4] == 0;
              v307 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
                v307 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
              if ( !v307 || gbTtmEnabled || gProtocolType )
                goto LABEL_42;
              v204 = MonitorRequestReasonAcDcDisplayBurst;
            }
            PowerDisplayBurst(v204);
            goto LABEL_42;
          }
          v141 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
          if ( v141 )
            v141[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v342, 1);
          v142 = EnterCritAvoidingDitHitTestHazard(0, 1);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v342);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v142;
          gbValidateHandleForIL = 1;
          CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v319);
          v146 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = v146[2];
              v147 = *v146;
              v146[2] = 0LL;
              if ( !*(_DWORD *)(v147 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v144, v143, v145);
              v150 = GetDomainLockRef(8);
              if ( v150 == &gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v149, v148, v151);
              tagObjLock::UnLock((tagObjLock *)v150);
              HMUnlockObject(*v146);
              tagObjLock::LockExclusive((struct _KTHREAD **)v150);
              v146 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v11 = 0;
          }
          tagObjLock::UnLock(v319);
          giDimTimeOutMs = 1000 * a4[4];
        }
        else
        {
          v129 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
          if ( v129 )
            v129[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v341, 1);
          v130 = EnterCritAvoidingDitHitTestHazard(0, 1);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v341);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v130;
          gbValidateHandleForIL = 1;
          CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v318);
          v134 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = v134[2];
              v135 = *v134;
              v134[2] = 0LL;
              if ( !*(_DWORD *)(v135 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v132, v131, v133);
              v138 = GetDomainLockRef(8);
              if ( v138 == &gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v137, v136, v139);
              tagObjLock::UnLock((tagObjLock *)v138);
              HMUnlockObject(*v134);
              tagObjLock::LockExclusive((struct _KTHREAD **)v138);
              v134 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v11 = 0;
          }
          tagObjLock::UnLock(v318);
          if ( gProtocolType )
            goto LABEL_42;
          giPowerSessionActivityTimeOutMs = 1000 * a4[4];
          if ( giPowerSessionActivityTimeOutMs )
            gPowerAdaptiveState = 0;
        }
      }
      else
      {
        v117 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
        if ( v117 )
          v117[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v340, 1);
        v118 = EnterCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v340);
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v118;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v317);
        v122 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = v122[2];
            v123 = *v122;
            v122[2] = 0LL;
            if ( !*(_DWORD *)(v123 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v120, v119, v121);
            v126 = GetDomainLockRef(8);
            if ( v126 == &gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v125, v124, v127);
            tagObjLock::UnLock((tagObjLock *)v126);
            HMUnlockObject(*v122);
            tagObjLock::LockExclusive((struct _KTHREAD **)v126);
            v122 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        tagObjLock::UnLock(v317);
        if ( !gProtocolType || !dword_1C01CE1AC )
          goto LABEL_42;
        giPowerSessionActivityTimeOutMs = 1000 * a4[4];
      }
    }
    else
    {
      v105 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
      if ( v105 )
        v105[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v339, 1);
      v106 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v339);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v106;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v316);
      v110 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = v110[2];
          v111 = *v110;
          v110[2] = 0LL;
          if ( !*(_DWORD *)(v111 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v108, v107, v109);
          v114 = GetDomainLockRef(8);
          if ( v114 == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v113, v112, v115);
          tagObjLock::UnLock((tagObjLock *)v114);
          HMUnlockObject(*v110);
          tagObjLock::LockExclusive((struct _KTHREAD **)v114);
          v110 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v11 = 0;
      }
      tagObjLock::UnLock(v316);
      if ( gProtocolType )
        goto LABEL_42;
      giPowerOffTimeOutMs = 1000 * a4[4];
    }
    if ( (int)IsModerncoreUserPowerInfoCalloutSupported() >= 0 )
      ModerncoreUserPowerInfoCallout();
    goto LABEL_42;
  }
  v12 = v10 - 1;
  if ( !v12 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( v9 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v26 = *(_BYTE *)a4;
    v27 = *((_BYTE *)a4 + 1);
    v28 = (int)a4[1];
    v29 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( v29 )
      v29[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v338, 1);
    v30 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v338);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v30;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v315);
    v34 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = v34[2];
        v99 = *v34;
        v34[2] = 0LL;
        if ( !*(_DWORD *)(v99 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33);
        v102 = GetDomainLockRef(8);
        if ( v102 == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v101, v100, v103);
        tagObjLock::UnLock((tagObjLock *)v102);
        HMUnlockObject(*v34);
        tagObjLock::LockExclusive((struct _KTHREAD **)v102);
        v34 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v11 = 0;
    }
    tagObjLock::UnLock(v315);
    if ( !v26 || !gbBlockSendInputResets )
    {
      v35 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      CInputGlobals::UpdateLastInputTime((__int64)gpInputGlobals, v35, 4);
      CitpLastInputUpdate(0x20u, v35);
      if ( !v27 )
      {
        if ( dword_1C01CE240 )
        {
          if ( !*(_BYTE *)gpbIgnoreSleepInput )
            SetPendingInput((unsigned int)v28);
          goto LABEL_42;
        }
        LODWORD(v309) = 4;
        v310 = v28;
        goto LABEL_41;
      }
    }
LABEL_42:
    UserSessionSwitchLeaveCrit();
    return v11;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v36 = v13 - 1;
    if ( !v36 )
    {
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      if ( v9 == 8 && a4 )
      {
        v37 = *a4;
        v38 = 0;
        v39 = 0;
        if ( (_DWORD)v37 )
        {
          v40 = (unsigned int)(v37 - 1);
          if ( !(_DWORD)v40 )
          {
            v39 = 1;
LABEL_64:
            CInputGlobals::UpdateLastInputTime(
              (__int64)gpInputGlobals,
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              4);
LABEL_65:
            if ( v38 )
            {
              if ( gSystemIsAoAc )
                SetInputMode(1LL);
              if ( !v39 )
              {
                LODWORD(v309) = 5;
                goto LABEL_68;
              }
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, a2, a3);
            }
            else if ( !v39 )
            {
              return v11;
            }
            LODWORD(v309) = 4;
LABEL_68:
            v310 = (int)a4[1];
LABEL_69:
            a2 = 0LL;
LABEL_70:
            QueuePowerRequest(&v309, a2);
            return v11;
          }
          if ( (_DWORD)v40 != 1 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, a2, a3);
            return v11;
          }
          v41 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v40, a2, a3);
          if ( v41 )
            v41[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v336, 1);
          v42 = EnterCritAvoidingDitHitTestHazard(0, 1);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v336);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v42;
          gbValidateHandleForIL = 1;
          CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v313);
          v46 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = v46[2];
              v89 = *v46;
              v46[2] = 0LL;
              if ( !*(_DWORD *)(v89 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45);
              v92 = GetDomainLockRef(8);
              if ( v92 == &gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v91, v90, v93);
              tagObjLock::UnLock((tagObjLock *)v92);
              HMUnlockObject(*v46);
              tagObjLock::LockExclusive((struct _KTHREAD **)v92);
              v46 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v11 = 0;
          }
          tagObjLock::UnLock(v313);
          if ( gPowerTransitionsState )
            v11 = 255;
          else
            v39 = 1;
          UserSessionSwitchLeaveCrit();
        }
        else
        {
          v38 = 1;
        }
        if ( !v39 )
          goto LABEL_65;
        goto LABEL_64;
      }
      return (unsigned int)-1073741823;
    }
    v58 = v36 - 1;
    if ( !v58 )
    {
      if ( v9 != 32 || !a4 )
        return (unsigned int)-1073741811;
      v77 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
      if ( v77 )
        v77[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v335, 1);
      v78 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v335);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v78;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v312);
      v82 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = v82[2];
          v83 = *v82;
          v82[2] = 0LL;
          if ( !*(_DWORD *)(v83 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v80, v79, v81);
          v86 = GetDomainLockRef(8);
          if ( v86 == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v85, v84, v87);
          tagObjLock::UnLock((tagObjLock *)v86);
          HMUnlockObject(*v82);
          tagObjLock::LockExclusive((struct _KTHREAD **)v86);
          v82 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v11 = 0;
      }
      tagObjLock::UnLock(v312);
      dword_1C01CE214 = *a4;
      v88 = a4[1];
      dword_1C01CE218 = a4[1];
      dword_1C01CE21C = a4[2];
      dword_1C01CE220 = a4[3];
      dword_1C01CE224 = a4[4];
      dword_1C01CE228 = a4[5];
      dword_1C01CE22C = a4[6];
      dword_1C01CE230 = a4[7];
      if ( !gProtocolType && !gbPowerHighPrecisionBrightnessSupported && (_DWORD)v88 != -1 )
      {
        if ( qword_1C01CDD60 )
        {
          LOBYTE(v88) = 1;
          v11 = qword_1C01CDD60(v88, a4);
        }
        else
        {
          v11 = -1073741637;
        }
        LOBYTE(v7) = (v11 & 0x80000000) == 0;
        gbPowerHighPrecisionBrightnessSupported = v7;
      }
      dword_1C01CE1F8 = dword_1C01CE214;
      dword_1C01CE1FC = dword_1C01CE214;
      dword_1C01CE200 = dword_1C01CE224;
      dword_1C01CE204 = dword_1C01CE224;
      if ( dword_1C01CE1F0 == 1 )
      {
        if ( dword_1C01CE210 == dword_1C01CE214 )
          goto LABEL_42;
        LODWORD(v309) = 11;
        v310 = 1LL;
        QueuePowerRequest(&v309, 0LL);
      }
      if ( dword_1C01CE1F0 != 2 || dword_1C01CE210 == dword_1C01CE224 )
        goto LABEL_42;
      LODWORD(v309) = 11;
      v310 = 2LL;
      goto LABEL_41;
    }
    v59 = v58 - 1;
    if ( v59 )
    {
      v60 = v59 - 1;
      if ( !v60 )
      {
        if ( !gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
        if ( v9 == 8 && a4 )
        {
          UserSessionSwitchBlock_Start();
          v310 = (int)a4[1];
          LODWORD(v309) = 14;
          if ( *(_BYTE *)a4 )
            LODWORD(v309) = 13;
          goto LABEL_69;
        }
        return (unsigned int)-1073741823;
      }
      v61 = v60 - 1;
      if ( !v61 )
      {
        if ( !gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
        if ( v9 == 4 && a4 )
        {
          LOBYTE(a2) = 1;
          v310 = (int)*a4;
          LODWORD(v309) = 15;
          goto LABEL_70;
        }
        return (unsigned int)-1073741823;
      }
      if ( v61 != 1 )
        return (unsigned int)-1073741823;
      if ( !gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      if ( v9 == 1 && a4 && !a5 && !v6 )
      {
        LOBYTE(v7) = *(_BYTE *)a4 != 0;
        CitDisplayRequestChange(v7);
        EtwTraceDisplayReqChange(v7);
        return v11;
      }
      return (unsigned int)-1073741811;
    }
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v62 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( v62 )
      v62[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v334, 1);
    v63 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v334);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v63;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v311);
    v67 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = v67[2];
        v68 = *v67;
        v67[2] = 0LL;
        if ( !*(_DWORD *)(v68 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v65, v64, v66);
        v71 = GetDomainLockRef(8);
        if ( v71 == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v70, v69, v72);
        tagObjLock::UnLock((tagObjLock *)v71);
        HMUnlockObject(*v67);
        tagObjLock::LockExclusive((struct _KTHREAD **)v71);
        v67 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v11 = 0;
    }
    tagObjLock::UnLock(v311);
    if ( gWakeInProgress )
    {
      v76 = gWakeInProgressReason;
      gWakeInProgressReason = MonitorRequestReasonUnknown;
      gWakeInProgress = 0;
      if ( gnPoSessionSwitchBlockCount < 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v74, v73, v75);
      LODWORD(v309) = 12;
      v310 = v76;
LABEL_41:
      QueuePowerRequest(&v309, 0LL);
      goto LABEL_42;
    }
    goto LABEL_42;
  }
  if ( gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( v9 != 4 || !a4 || a5 != 4 || !v6 )
    return (unsigned int)-1073741811;
  v14 = *a4;
  v15 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( v15 )
    v15[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v337, 1);
  v16 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v337);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v16;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v314);
  v20 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    do
    {
      gpducstulHead = v20[2];
      v94 = *v20;
      v20[2] = 0LL;
      if ( !*(_DWORD *)(v94 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      v97 = GetDomainLockRef(8);
      if ( v97 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v96, v95, v98);
      tagObjLock::UnLock((tagObjLock *)v97);
      HMUnlockObject(*v20);
      tagObjLock::LockExclusive((struct _KTHREAD **)v97);
      v20 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
    v11 = 0;
  }
  tagObjLock::UnLock(v314);
  v21 = dword_1C01CE1E8;
  v22 = dword_1C01CE1E8 + v14;
  dword_1C01CE1E8 += v14;
  if ( v21 != 1 )
  {
    if ( !v21 && v22 == 1 )
    {
      CitDisplayRequestChange(1u);
      EtwTraceDisplayReqChange(1LL);
    }
LABEL_20:
    v23 = v22 == 0;
    v24 = v22 < 0;
    goto LABEL_21;
  }
  v23 = v22 == 0;
  v24 = v22 < 0;
  if ( !v22 )
  {
    CitDisplayRequestChange(0);
    EtwTraceDisplayReqChange(0LL);
    if ( !gbBlockSendInputResets )
      CInputGlobals::UpdateLastInputTime(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        9);
    goto LABEL_20;
  }
LABEL_21:
  v308[0] = !v24 && !v23;
  ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, v308, 1LL, 0LL, &gSessionId, 0, 0);
  UserSessionSwitchLeaveCrit();
  if ( !v21 && v22 == 1 && dword_1C01CE1F0 == 2 )
  {
    LODWORD(v309) = 4;
    v310 = 0LL;
    QueuePowerRequest(&v309, 0LL);
  }
  if ( v22 >= 0 )
    v7 = v22;
  *(_DWORD *)v6 = v7;
  return v11;
}
