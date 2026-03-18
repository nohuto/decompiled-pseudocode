/*
 * XREFs of UserPowerInfoCallout @ 0x1C005A654
 * Callers:
 *     W32CalloutDispatch @ 0x1C005A060 (W32CalloutDispatch.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0036000 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C003FAAC (-CitpLastInputUpdate@@YAXEI@Z.c)
 *     QueuePowerRequest @ 0x1C006DA70 (QueuePowerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00A1208 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A2820 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00A2A74 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     SetPendingInput @ 0x1C00A52E0 (SetPendingInput.c)
 *     SqmPowerState @ 0x1C00A5330 (SqmPowerState.c)
 *     EtwTraceDisplayReqChange @ 0x1C00ABAE0 (EtwTraceDisplayReqChange.c)
 *     UserLogError @ 0x1C00BCF40 (UserLogError.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C012346C (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     CitDisplayRequestChange @ 0x1C0164C9C (CitDisplayRequestChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, _BOOL8 a2, __int64 a3, int *a4, int a5, int *a6)
{
  int v6; // edi
  int v8; // r12d
  int v9; // r14d
  unsigned int v10; // r15d
  int v11; // r14d
  int v12; // r14d
  int *v13; // r14
  int v14; // r12d
  LARGE_INTEGER *v15; // rbx
  struct tagTHREADINFO *v16; // rbx
  struct tagTHREADINFO **v17; // rax
  PVOID v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // rsi
  int v25; // esi
  int v26; // ebx
  bool v27; // zf
  bool v28; // sf
  __int64 v29; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v32; // rbx
  struct tagTHREADINFO **v33; // rax
  PVOID CurrentProcess; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 *v40; // r13
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // r14d
  int v48; // r14d
  int v49; // r14d
  int v50; // r14d
  LARGE_INTEGER *v51; // rbx
  struct tagTHREADINFO *v52; // rbx
  struct tagTHREADINFO **v53; // rax
  PVOID v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 *v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  LARGE_INTEGER *v69; // rbx
  struct tagTHREADINFO *v70; // rbx
  struct tagTHREADINFO **v71; // rax
  PVOID v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 *v78; // r14
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 *v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rcx
  char v86; // r13
  char v87; // r12
  __int64 v88; // rcx
  LARGE_INTEGER *v89; // rbx
  struct tagTHREADINFO *v90; // rbx
  struct tagTHREADINFO **v91; // rax
  PVOID v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 *v98; // r14
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 *v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 *v108; // rbx
  __int64 v109; // rdx
  char v110; // r12
  char v111; // r13
  __int64 v112; // r14
  LARGE_INTEGER *v113; // rbx
  struct tagTHREADINFO *v114; // rbx
  struct tagTHREADINFO **v115; // rax
  PVOID v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 *v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 *v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rbx
  __int64 v129; // rcx
  LARGE_INTEGER *v130; // rbx
  struct tagTHREADINFO *v131; // rbx
  struct tagTHREADINFO **v132; // rax
  PVOID v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 *v139; // r14
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 *v143; // rbx
  __int64 v144; // rdx
  __int64 v145; // rcx
  LARGE_INTEGER *v146; // rbx
  struct tagTHREADINFO *v147; // rbx
  struct tagTHREADINFO **v148; // rax
  PVOID v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 *v155; // r14
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 *v159; // rbx
  __int64 v160; // rdx
  __int64 v161; // rcx
  LARGE_INTEGER *v162; // rbx
  struct tagTHREADINFO *v163; // rbx
  struct tagTHREADINFO **v164; // rax
  PVOID v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 *v171; // r14
  __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 *v175; // rbx
  __int64 v176; // rdx
  __int64 v177; // rcx
  LARGE_INTEGER *v178; // rbx
  struct tagTHREADINFO *v179; // rbx
  struct tagTHREADINFO **v180; // rax
  PVOID v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 *v187; // r14
  __int64 v188; // rax
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 *v191; // rbx
  __int64 v192; // rdx
  __int64 v193; // rcx
  LARGE_INTEGER *v194; // rbx
  struct tagTHREADINFO *v195; // rbx
  struct tagTHREADINFO **v196; // rax
  PVOID v197; // rax
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 *v203; // r14
  __int64 v204; // rax
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 *v207; // rbx
  __int64 v208; // rdx
  __int64 v209; // rcx
  LARGE_INTEGER *v210; // rbx
  struct tagTHREADINFO *v211; // rbx
  struct tagTHREADINFO **v212; // rax
  PVOID v213; // rax
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 *v219; // r14
  __int64 v220; // rax
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 *v223; // rbx
  __int64 v224; // rdx
  __int64 v225; // rcx
  LARGE_INTEGER *v226; // rbx
  struct tagTHREADINFO *v227; // rbx
  struct tagTHREADINFO **v228; // rax
  PVOID v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 *v235; // r14
  __int64 v236; // rax
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 *v239; // rbx
  __int64 v240; // rdx
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // rcx
  __int64 v244; // rcx
  LARGE_INTEGER *v245; // rbx
  struct tagTHREADINFO *v246; // rbx
  struct tagTHREADINFO **v247; // rax
  PVOID v248; // rax
  __int64 v249; // rdx
  __int64 v250; // rcx
  __int64 v251; // r8
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 *v254; // rsi
  __int64 v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 *v258; // rbx
  __int64 v259; // rdx
  enum POWER_MONITOR_REQUEST_REASON v260; // ecx
  __int64 v261; // rcx
  LARGE_INTEGER *v262; // rbx
  struct tagTHREADINFO *v263; // rbx
  struct tagTHREADINFO **v264; // rax
  PVOID v265; // rax
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // rdx
  __int64 v270; // rcx
  __int64 *v271; // r14
  __int64 v272; // rax
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 *v275; // rbx
  __int64 v276; // rdx
  __int64 v277; // rcx
  LARGE_INTEGER *v278; // rbx
  struct tagTHREADINFO *v279; // rbx
  struct tagTHREADINFO **v280; // rax
  PVOID v281; // rax
  __int64 v282; // rdx
  __int64 v283; // rcx
  __int64 v284; // r8
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 *v287; // r14
  __int64 v288; // rax
  __int64 v289; // rdx
  __int64 v290; // rcx
  __int64 *v291; // rbx
  __int64 v292; // rdx
  __int64 v293; // rdx
  __int64 v294; // rcx
  LARGE_INTEGER *v295; // rbx
  struct tagTHREADINFO *v296; // rbx
  struct tagTHREADINFO **v297; // rax
  PVOID v298; // rax
  __int64 v299; // rdx
  __int64 v300; // rcx
  __int64 v301; // r8
  __int64 v302; // rdx
  __int64 v303; // rcx
  __int64 *v304; // r14
  __int64 v305; // rax
  __int64 v306; // rdx
  __int64 v307; // rcx
  __int64 *v308; // rbx
  __int64 v309; // rdx
  __int64 v310; // rcx
  LARGE_INTEGER *v311; // rbx
  struct tagTHREADINFO *v312; // rbx
  struct tagTHREADINFO **v313; // rax
  PVOID v314; // rax
  __int64 v315; // rdx
  __int64 v316; // rcx
  __int64 v317; // r8
  __int64 v318; // rdx
  __int64 v319; // rcx
  __int64 *v320; // r14
  __int64 v321; // rax
  __int64 v322; // rdx
  __int64 v323; // rcx
  __int64 *v324; // rbx
  __int64 v325; // rdx
  __int64 v326; // rcx
  LARGE_INTEGER *v327; // rbx
  struct tagTHREADINFO *v328; // rbx
  struct tagTHREADINFO **v329; // rax
  PVOID v330; // rax
  __int64 v331; // rdx
  __int64 v332; // rcx
  __int64 v333; // r8
  __int64 v334; // rdx
  __int64 v335; // rcx
  __int64 *v336; // r14
  __int64 v337; // rax
  __int64 v338; // rdx
  __int64 v339; // rcx
  __int64 *v340; // rbx
  __int64 v341; // rdx
  __int64 v342; // rcx
  LARGE_INTEGER *v343; // rbx
  struct tagTHREADINFO *v344; // rbx
  struct tagTHREADINFO **v345; // rax
  PVOID v346; // rax
  __int64 v347; // rdx
  __int64 v348; // rcx
  __int64 v349; // r8
  __int64 v350; // rdx
  __int64 v351; // rcx
  __int64 *v352; // rsi
  __int64 v353; // rax
  __int64 v354; // rdx
  __int64 v355; // rcx
  __int64 *v356; // rbx
  __int64 v357; // rdx
  __int64 v358; // rcx
  LARGE_INTEGER *v359; // rbx
  struct tagTHREADINFO *v360; // rbx
  struct tagTHREADINFO **v361; // rax
  PVOID v362; // rax
  __int64 v363; // rdx
  __int64 v364; // rcx
  __int64 v365; // r8
  __int64 v366; // rdx
  __int64 v367; // rcx
  __int64 *v368; // r14
  __int64 v369; // rax
  __int64 v370; // rdx
  __int64 v371; // rcx
  __int64 *v372; // rbx
  __int64 v373; // rdx
  __int64 v374; // rdx
  __int64 v375; // rdx
  __int64 v376; // rcx
  __int64 *v377; // rbx
  __int64 v378; // rdx
  __int64 v379; // r8
  __int64 v380; // r9
  LARGE_INTEGER *v381; // rbx
  struct tagTHREADINFO *v382; // rbx
  struct tagTHREADINFO **v383; // rax
  PVOID v384; // rax
  __int64 v385; // rdx
  __int64 v386; // rcx
  __int64 v387; // r8
  __int64 v388; // rdx
  __int64 v389; // rcx
  __int64 *v390; // r14
  __int64 v391; // rax
  __int64 v392; // rdx
  __int64 v393; // rcx
  __int64 *v394; // rbx
  __int64 v395; // rdx
  __int64 v396; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v397; // [rsp+58h] [rbp-B0h]
  tagObjLock *v398; // [rsp+60h] [rbp-A8h] BYREF
  tagObjLock *v399; // [rsp+68h] [rbp-A0h] BYREF
  tagObjLock *v400; // [rsp+70h] [rbp-98h] BYREF
  tagObjLock *v401; // [rsp+78h] [rbp-90h] BYREF
  tagObjLock *v402; // [rsp+80h] [rbp-88h] BYREF
  tagObjLock *v403; // [rsp+88h] [rbp-80h] BYREF
  tagObjLock *v404; // [rsp+90h] [rbp-78h] BYREF
  tagObjLock *v405; // [rsp+98h] [rbp-70h] BYREF
  tagObjLock *v406; // [rsp+A0h] [rbp-68h] BYREF
  tagObjLock *v407; // [rsp+A8h] [rbp-60h] BYREF
  tagObjLock *v408; // [rsp+B0h] [rbp-58h] BYREF
  tagObjLock *v409; // [rsp+B8h] [rbp-50h] BYREF
  tagObjLock *v410; // [rsp+C0h] [rbp-48h] BYREF
  tagObjLock *v411; // [rsp+C8h] [rbp-40h] BYREF
  tagObjLock *v412; // [rsp+D0h] [rbp-38h] BYREF
  tagObjLock *v413; // [rsp+D8h] [rbp-30h] BYREF
  tagObjLock *v414; // [rsp+E0h] [rbp-28h] BYREF
  tagObjLock *v415; // [rsp+E8h] [rbp-20h] BYREF
  tagObjLock *v416; // [rsp+F0h] [rbp-18h] BYREF
  tagObjLock *v417; // [rsp+F8h] [rbp-10h] BYREF
  tagObjLock *v418; // [rsp+100h] [rbp-8h] BYREF
  tagObjLock *v419; // [rsp+108h] [rbp+0h] BYREF
  bool v420; // [rsp+150h] [rbp+48h] BYREF

  v420 = a2;
  v6 = 0;
  v8 = a3;
  v9 = a1;
  v10 = 0;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  if ( !(_DWORD)a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_4;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v32 = 0LL;
    while ( 1 )
    {
      v33 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v33 )
        v32 = *v33;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v32 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v32 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v36, v35, v37);
    gptiCurrent = v32;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v398);
    v40 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = v40[2];
        v41 = *v40;
        v40[2] = 0LL;
        if ( !*(_DWORD *)(v41 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38);
        DomainLockRef = GetDomainLockRef(8LL, v38);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v40);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v45);
        v40 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v10 = 0;
    }
    tagObjLock::UnLock(v398);
    UserSessionSwitchLeaveCrit(v46);
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
LABEL_4:
  if ( !v9 )
  {
    if ( v8 != 20 || !a4 )
      return (unsigned int)-1073741823;
    v129 = *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 == *(_QWORD *)a4 )
      v129 = *(_QWORD *)GUID_CONSOLE_VIDEO_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
    if ( v129 )
    {
      v145 = *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 - *(_QWORD *)a4;
      if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4 )
        v145 = *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
      if ( v145 )
      {
        v161 = *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4 )
          v161 = *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
        if ( v161 )
        {
          v177 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - *(_QWORD *)a4;
          if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *(_QWORD *)a4 )
            v177 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
          if ( v177 )
          {
            v193 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
              v193 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
            if ( !v193 )
            {
              v194 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v194 )
                v194[1] = KeQueryPerformanceCounter(0LL);
              v195 = 0LL;
              while ( 1 )
              {
                v196 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v196 )
                  v195 = *v196;
                v197 = (PVOID)PsGetCurrentProcess();
                if ( v197 )
                {
                  if ( v197 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v195 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v195 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              EtwTraceAcquiredExclusiveUserCrit(v199, v198, v200);
              gptiCurrent = v195;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v408);
              v203 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = v203[2];
                  v204 = *v203;
                  v203[2] = 0LL;
                  if ( !*(_DWORD *)(v204 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v202, v201);
                  v207 = GetDomainLockRef(8LL, v201);
                  if ( v207 == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v206, v205);
                  tagObjLock::UnLock((tagObjLock *)v207);
                  HMUnlockObject(*v203);
                  tagObjLock::LockExclusive((struct _KTHREAD **)v207, v208);
                  v203 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v10 = 0;
              }
              tagObjLock::UnLock(v408);
              dword_1C01A0360 = a4[4];
              goto LABEL_222;
            }
            v209 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
              v209 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
            if ( !v209 )
            {
              v210 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v210 )
                v210[1] = KeQueryPerformanceCounter(0LL);
              v211 = 0LL;
              while ( 1 )
              {
                v212 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v212 )
                  v211 = *v212;
                v213 = (PVOID)PsGetCurrentProcess();
                if ( v213 )
                {
                  if ( v213 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v211 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v211 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              EtwTraceAcquiredExclusiveUserCrit(v215, v214, v216);
              gptiCurrent = v211;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v409);
              v219 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = v219[2];
                  v220 = *v219;
                  v219[2] = 0LL;
                  if ( !*(_DWORD *)(v220 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v218, v217);
                  v223 = GetDomainLockRef(8LL, v217);
                  if ( v223 == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v222, v221);
                  tagObjLock::UnLock((tagObjLock *)v223);
                  HMUnlockObject(*v219);
                  tagObjLock::LockExclusive((struct _KTHREAD **)v223, v224);
                  v219 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v10 = 0;
              }
              tagObjLock::UnLock(v409);
              dword_1C01A0358 = a4[4];
              goto LABEL_222;
            }
            v225 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4 )
              v225 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - *((_QWORD *)a4 + 1);
            if ( !v225 )
            {
              v226 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v226 )
                v226[1] = KeQueryPerformanceCounter(0LL);
              v227 = 0LL;
              while ( 1 )
              {
                v228 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v228 )
                  v227 = *v228;
                v229 = (PVOID)PsGetCurrentProcess();
                if ( v229 )
                {
                  if ( v229 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v227 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v227 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              EtwTraceAcquiredExclusiveUserCrit(v231, v230, v232);
              gptiCurrent = v227;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v410);
              v235 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = v235[2];
                  v236 = *v235;
                  v235[2] = 0LL;
                  if ( !*(_DWORD *)(v236 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v234, v233);
                  v239 = GetDomainLockRef(8LL, v233);
                  if ( v239 == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v238, v237);
                  tagObjLock::UnLock((tagObjLock *)v239);
                  HMUnlockObject(*v235);
                  tagObjLock::LockExclusive((struct _KTHREAD **)v239, v240);
                  v235 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v10 = 0;
              }
              tagObjLock::UnLock(v410);
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v242, v241);
              dword_1C01A0368 = a4[4];
              goto LABEL_222;
            }
            v243 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4 )
              v243 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *((_QWORD *)a4 + 1);
            if ( !v243 )
              goto LABEL_595;
            v243 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
              v243 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
            if ( v243 )
            {
              v244 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)a4 )
                v244 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - *((_QWORD *)a4 + 1);
              if ( v244 )
              {
                v261 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4 )
                  v261 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *((_QWORD *)a4 + 1);
                if ( !v261 )
                {
                  v262 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                  if ( v262 )
                    v262[1] = KeQueryPerformanceCounter(0LL);
                  v263 = 0LL;
                  while ( 1 )
                  {
                    v264 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v264 )
                      v263 = *v264;
                    v265 = (PVOID)PsGetCurrentProcess();
                    if ( v265 )
                    {
                      if ( v265 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v263 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v263 == gptiRit )
                    {
                      break;
                    }
                    ++gcDITHitTestWaiters;
                    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                  }
                  EtwTraceAcquiredExclusiveUserCrit(v267, v266, v268);
                  gptiCurrent = v263;
                  gbValidateHandleForIL = 1;
                  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v412);
                  v271 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = v271[2];
                      v272 = *v271;
                      v271[2] = 0LL;
                      if ( !*(_DWORD *)(v272 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v270, v269);
                      v275 = GetDomainLockRef(8LL, v269);
                      if ( v275 == &gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v274, v273);
                      tagObjLock::UnLock((tagObjLock *)v275);
                      HMUnlockObject(*v271);
                      tagObjLock::LockExclusive((struct _KTHREAD **)v275, v276);
                      v271 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v10 = 0;
                  }
                  tagObjLock::UnLock(v412);
                  LOBYTE(v6) = a4[4] != 0;
                  dword_1C01A30AC = v6;
                  goto LABEL_222;
                }
                v277 = *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4 )
                  v277 = *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 - *((_QWORD *)a4 + 1);
                if ( !v277 )
                {
                  v278 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                  if ( v278 )
                    v278[1] = KeQueryPerformanceCounter(0LL);
                  v279 = 0LL;
                  while ( 1 )
                  {
                    v280 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v280 )
                      v279 = *v280;
                    v281 = (PVOID)PsGetCurrentProcess();
                    if ( v281 )
                    {
                      if ( v281 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v279 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v279 == gptiRit )
                    {
                      break;
                    }
                    ++gcDITHitTestWaiters;
                    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                  }
                  EtwTraceAcquiredExclusiveUserCrit(v283, v282, v284);
                  gptiCurrent = v279;
                  gbValidateHandleForIL = 1;
                  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v413);
                  v287 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = v287[2];
                      v288 = *v287;
                      v287[2] = 0LL;
                      if ( !*(_DWORD *)(v288 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v286, v285);
                      v291 = GetDomainLockRef(8LL, v285);
                      if ( v291 == &gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v290, v289);
                      tagObjLock::UnLock((tagObjLock *)v291);
                      HMUnlockObject(*v287);
                      tagObjLock::LockExclusive((struct _KTHREAD **)v291, v292);
                      v287 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v10 = 0;
                  }
                  tagObjLock::UnLock(v413);
                  if ( !a4[4] )
                  {
                    dword_1C01A307C = 0;
                    goto LABEL_222;
                  }
                  if ( gbTtmEnabled )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v67, v293);
                  dword_1C01A307C = 1;
                  LODWORD(v396) = 5;
                  v397 = 13LL;
                  goto LABEL_225;
                }
                v294 = *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4 )
                  v294 = *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 - *((_QWORD *)a4 + 1);
                if ( v294 )
                {
                  v310 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *(_QWORD *)a4;
                  if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
                    v310 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
                  if ( v310 )
                  {
                    v326 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - *(_QWORD *)a4;
                    if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
                      v326 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
                    if ( v326 )
                    {
                      v342 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)a4;
                      if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4 )
                        v342 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *((_QWORD *)a4 + 1);
                      if ( v342 )
                      {
                        v358 = *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 - *(_QWORD *)a4;
                        if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *(_QWORD *)a4 )
                          v358 = *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 - *((_QWORD *)a4 + 1);
                        if ( v358 )
                          return (unsigned int)-1073741823;
                        v359 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                        if ( v359 )
                          v359[1] = KeQueryPerformanceCounter(0LL);
                        v360 = 0LL;
                        while ( 1 )
                        {
                          v361 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                          if ( v361 )
                            v360 = *v361;
                          v362 = (PVOID)PsGetCurrentProcess();
                          if ( v362 )
                          {
                            if ( v362 == g_pepDwm )
                              break;
                          }
                          if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS
                            && v360 != (struct tagTHREADINFO *)gptiTSRequest
                            || gbDITInHitTest != 1
                            || v360 == gptiRit )
                          {
                            break;
                          }
                          ++gcDITHitTestWaiters;
                          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                        }
                        EtwTraceAcquiredExclusiveUserCrit(v364, v363, v365);
                        gptiCurrent = v360;
                        gbValidateHandleForIL = 1;
                        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v418);
                        v368 = (__int64 *)gpducstulHead;
                        if ( gpducstulHead )
                        {
                          do
                          {
                            gpducstulHead = v368[2];
                            v369 = *v368;
                            v368[2] = 0LL;
                            if ( !*(_DWORD *)(v369 + 8) )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v367, v366);
                            v372 = GetDomainLockRef(8LL, v366);
                            if ( v372 == &gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v371, v370);
                            tagObjLock::UnLock((tagObjLock *)v372);
                            HMUnlockObject(*v368);
                            tagObjLock::LockExclusive((struct _KTHREAD **)v372, v373);
                            v368 = (__int64 *)gpducstulHead;
                          }
                          while ( gpducstulHead );
                          v10 = 0;
                        }
                        tagObjLock::UnLock(v418);
                        v377 = GetDomainLockRef(9LL, v374);
                        if ( v377 == &gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v376, v375);
                        tagObjLock::LockExclusive((struct _KTHREAD **)v377, v375);
                        dword_1C01A30B0 = a4[4] != 0;
                        UserLogError((unsigned int)(-(unsigned __int8)dword_1C01A30B0 - 2147482947), v378, v379, v380);
                        CBaseInput::OnInputSuppressedValueChanged(a4[4] != 0);
                        tagObjLock::UnLock((tagObjLock *)v377);
                      }
                      else
                      {
                        if ( !a4[4] )
                          return v10;
                        v343 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                        if ( v343 )
                          v343[1] = KeQueryPerformanceCounter(0LL);
                        v344 = 0LL;
                        while ( 1 )
                        {
                          v345 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                          if ( v345 )
                            v344 = *v345;
                          v346 = (PVOID)PsGetCurrentProcess();
                          if ( v346 )
                          {
                            if ( v346 == g_pepDwm )
                              break;
                          }
                          if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS
                            && v344 != (struct tagTHREADINFO *)gptiTSRequest
                            || gbDITInHitTest != 1
                            || v344 == gptiRit )
                          {
                            break;
                          }
                          ++gcDITHitTestWaiters;
                          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                        }
                        EtwTraceAcquiredExclusiveUserCrit(v348, v347, v349);
                        gptiCurrent = v344;
                        gbValidateHandleForIL = 1;
                        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v417);
                        v352 = (__int64 *)gpducstulHead;
                        if ( gpducstulHead )
                        {
                          do
                          {
                            gpducstulHead = v352[2];
                            v353 = *v352;
                            v352[2] = 0LL;
                            if ( !*(_DWORD *)(v353 + 8) )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v351, v350);
                            v356 = GetDomainLockRef(8LL, v350);
                            if ( v356 == &gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v355, v354);
                            tagObjLock::UnLock((tagObjLock *)v356);
                            HMUnlockObject(*v352);
                            tagObjLock::LockExclusive((struct _KTHREAD **)v356, v357);
                            v352 = (__int64 *)gpducstulHead;
                          }
                          while ( gpducstulHead );
                          v10 = 0;
                        }
                        tagObjLock::UnLock(v417);
                        gdwUpdateKeyboard |= 2u;
                      }
                    }
                    else
                    {
                      v327 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                      if ( v327 )
                        v327[1] = KeQueryPerformanceCounter(0LL);
                      v328 = 0LL;
                      while ( 1 )
                      {
                        v329 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                        if ( v329 )
                          v328 = *v329;
                        v330 = (PVOID)PsGetCurrentProcess();
                        if ( v330 )
                        {
                          if ( v330 == g_pepDwm )
                            break;
                        }
                        if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v328 != (struct tagTHREADINFO *)gptiTSRequest
                          || gbDITInHitTest != 1
                          || v328 == gptiRit )
                        {
                          break;
                        }
                        ++gcDITHitTestWaiters;
                        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                      }
                      EtwTraceAcquiredExclusiveUserCrit(v332, v331, v333);
                      gptiCurrent = v328;
                      gbValidateHandleForIL = 1;
                      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v416);
                      v336 = (__int64 *)gpducstulHead;
                      if ( gpducstulHead )
                      {
                        do
                        {
                          gpducstulHead = v336[2];
                          v337 = *v336;
                          v336[2] = 0LL;
                          if ( !*(_DWORD *)(v337 + 8) )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v335, v334);
                          v340 = GetDomainLockRef(8LL, v334);
                          if ( v340 == &gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v339, v338);
                          tagObjLock::UnLock((tagObjLock *)v340);
                          HMUnlockObject(*v336);
                          tagObjLock::LockExclusive((struct _KTHREAD **)v340, v341);
                          v336 = (__int64 *)gpducstulHead;
                        }
                        while ( gpducstulHead );
                        v10 = 0;
                      }
                      tagObjLock::UnLock(v416);
                      dword_1C01A30A8 = a4[4];
                    }
                  }
                  else
                  {
                    v311 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                    if ( v311 )
                      v311[1] = KeQueryPerformanceCounter(0LL);
                    v312 = 0LL;
                    while ( 1 )
                    {
                      v313 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                      if ( v313 )
                        v312 = *v313;
                      v314 = (PVOID)PsGetCurrentProcess();
                      if ( v314 )
                      {
                        if ( v314 == g_pepDwm )
                          break;
                      }
                      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v312 != (struct tagTHREADINFO *)gptiTSRequest
                        || gbDITInHitTest != 1
                        || v312 == gptiRit )
                      {
                        break;
                      }
                      ++gcDITHitTestWaiters;
                      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                    }
                    EtwTraceAcquiredExclusiveUserCrit(v316, v315, v317);
                    gptiCurrent = v312;
                    gbValidateHandleForIL = 1;
                    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v415);
                    v320 = (__int64 *)gpducstulHead;
                    if ( gpducstulHead )
                    {
                      do
                      {
                        gpducstulHead = v320[2];
                        v321 = *v320;
                        v320[2] = 0LL;
                        if ( !*(_DWORD *)(v321 + 8) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v319, v318);
                        v324 = GetDomainLockRef(8LL, v318);
                        if ( v324 == &gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v323, v322);
                        tagObjLock::UnLock((tagObjLock *)v324);
                        HMUnlockObject(*v320);
                        tagObjLock::LockExclusive((struct _KTHREAD **)v324, v325);
                        v320 = (__int64 *)gpducstulHead;
                      }
                      while ( gpducstulHead );
                      v10 = 0;
                    }
                    tagObjLock::UnLock(v415);
                    dword_1C01A036C = a4[4];
                  }
                }
                else
                {
                  v295 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                  if ( v295 )
                    v295[1] = KeQueryPerformanceCounter(0LL);
                  v296 = 0LL;
                  while ( 1 )
                  {
                    v297 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v297 )
                      v296 = *v297;
                    v298 = (PVOID)PsGetCurrentProcess();
                    if ( v298 )
                    {
                      if ( v298 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v296 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v296 == gptiRit )
                    {
                      break;
                    }
                    ++gcDITHitTestWaiters;
                    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                  }
                  EtwTraceAcquiredExclusiveUserCrit(v300, v299, v301);
                  gptiCurrent = v296;
                  gbValidateHandleForIL = 1;
                  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v414);
                  v304 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = v304[2];
                      v305 = *v304;
                      v304[2] = 0LL;
                      if ( !*(_DWORD *)(v305 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v303, v302);
                      v308 = GetDomainLockRef(8LL, v302);
                      if ( v308 == &gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v307, v306);
                      tagObjLock::UnLock((tagObjLock *)v308);
                      HMUnlockObject(*v304);
                      tagObjLock::LockExclusive((struct _KTHREAD **)v308, v309);
                      v304 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v10 = 0;
                  }
                  tagObjLock::UnLock(v414);
                  dword_1C01A30A4 = a4[4];
                }
                goto LABEL_222;
              }
              v245 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v245 )
                v245[1] = KeQueryPerformanceCounter(0LL);
              v246 = 0LL;
              while ( 1 )
              {
                v247 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v247 )
                  v246 = *v247;
                v248 = (PVOID)PsGetCurrentProcess();
                if ( v248 )
                {
                  if ( v248 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v246 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v246 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              EtwTraceAcquiredExclusiveUserCrit(v250, v249, v251);
              gptiCurrent = v246;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v411);
              v254 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = v254[2];
                  v255 = *v254;
                  v254[2] = 0LL;
                  if ( !*(_DWORD *)(v255 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v253, v252);
                  v258 = GetDomainLockRef(8LL, v252);
                  if ( v258 == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v257, v256);
                  tagObjLock::UnLock((tagObjLock *)v258);
                  HMUnlockObject(*v254);
                  tagObjLock::LockExclusive((struct _KTHREAD **)v258, v259);
                  v254 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v10 = 0;
              }
              tagObjLock::UnLock(v411);
              if ( gbTtmEnabled || gProtocolType || dword_1C01A3088 )
                goto LABEL_222;
              v260 = MonitorRequestReasonBatteryCountChange;
            }
            else
            {
LABEL_595:
              v381 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v243, a2, a3);
              if ( v381 )
                v381[1] = KeQueryPerformanceCounter(0LL);
              v382 = 0LL;
              while ( 1 )
              {
                v383 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v383 )
                  v382 = *v383;
                v384 = (PVOID)PsGetCurrentProcess();
                if ( v384 )
                {
                  if ( v384 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v382 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v382 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              EtwTraceAcquiredExclusiveUserCrit(v386, v385, v387);
              gptiCurrent = v382;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v419);
              v390 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = v390[2];
                  v391 = *v390;
                  v390[2] = 0LL;
                  if ( !*(_DWORD *)(v391 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v389, v388);
                  v394 = GetDomainLockRef(8LL, v388);
                  if ( v394 == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v393, v392);
                  tagObjLock::UnLock((tagObjLock *)v394);
                  HMUnlockObject(*v390);
                  tagObjLock::LockExclusive((struct _KTHREAD **)v394, v395);
                  v390 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v10 = 0;
              }
              tagObjLock::UnLock(v419);
              if ( gSqmIsOptedIn && !gProtocolType )
                SqmPowerState();
              dword_1C01A3088 = a4[4] == 0;
              v67 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
                v67 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
              if ( !v67 || gbTtmEnabled || gProtocolType )
                goto LABEL_222;
              v260 = MonitorRequestReasonAcDcDisplayBurst;
            }
            PowerDisplayBurst(v260);
            goto LABEL_222;
          }
          v178 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
          if ( v178 )
            v178[1] = KeQueryPerformanceCounter(0LL);
          v179 = 0LL;
          while ( 1 )
          {
            v180 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v180 )
              v179 = *v180;
            v181 = (PVOID)PsGetCurrentProcess();
            if ( v181 )
            {
              if ( v181 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v179 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v179 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          EtwTraceAcquiredExclusiveUserCrit(v183, v182, v184);
          gptiCurrent = v179;
          gbValidateHandleForIL = 1;
          CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v407);
          v187 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = v187[2];
              v188 = *v187;
              v187[2] = 0LL;
              if ( !*(_DWORD *)(v188 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v186, v185);
              v191 = GetDomainLockRef(8LL, v185);
              if ( v191 == &gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v190, v189);
              tagObjLock::UnLock((tagObjLock *)v191);
              HMUnlockObject(*v187);
              tagObjLock::LockExclusive((struct _KTHREAD **)v191, v192);
              v187 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v10 = 0;
          }
          tagObjLock::UnLock(v407);
          giDimTimeOutMs = 1000 * a4[4];
        }
        else
        {
          v162 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
          if ( v162 )
            v162[1] = KeQueryPerformanceCounter(0LL);
          v163 = 0LL;
          while ( 1 )
          {
            v164 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v164 )
              v163 = *v164;
            v165 = (PVOID)PsGetCurrentProcess();
            if ( v165 )
            {
              if ( v165 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v163 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v163 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          EtwTraceAcquiredExclusiveUserCrit(v167, v166, v168);
          gptiCurrent = v163;
          gbValidateHandleForIL = 1;
          CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v406);
          v171 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = v171[2];
              v172 = *v171;
              v171[2] = 0LL;
              if ( !*(_DWORD *)(v172 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v170, v169);
              v175 = GetDomainLockRef(8LL, v169);
              if ( v175 == &gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v174, v173);
              tagObjLock::UnLock((tagObjLock *)v175);
              HMUnlockObject(*v171);
              tagObjLock::LockExclusive((struct _KTHREAD **)v175, v176);
              v171 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v10 = 0;
          }
          tagObjLock::UnLock(v406);
          if ( gProtocolType )
            goto LABEL_222;
          giPowerSessionActivityTimeOutMs = 1000 * a4[4];
          if ( giPowerSessionActivityTimeOutMs )
            gPowerAdaptiveState = 0;
        }
      }
      else
      {
        v146 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
        if ( v146 )
          v146[1] = KeQueryPerformanceCounter(0LL);
        v147 = 0LL;
        while ( 1 )
        {
          v148 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v148 )
            v147 = *v148;
          v149 = (PVOID)PsGetCurrentProcess();
          if ( v149 )
          {
            if ( v149 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v147 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v147 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredExclusiveUserCrit(v151, v150, v152);
        gptiCurrent = v147;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v405);
        v155 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = v155[2];
            v156 = *v155;
            v155[2] = 0LL;
            if ( !*(_DWORD *)(v156 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v154, v153);
            v159 = GetDomainLockRef(8LL, v153);
            if ( v159 == &gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v158, v157);
            tagObjLock::UnLock((tagObjLock *)v159);
            HMUnlockObject(*v155);
            tagObjLock::LockExclusive((struct _KTHREAD **)v159, v160);
            v155 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v10 = 0;
        }
        tagObjLock::UnLock(v405);
        if ( !gProtocolType || !dword_1C01A3074 )
          goto LABEL_222;
        giPowerSessionActivityTimeOutMs = 1000 * a4[4];
      }
    }
    else
    {
      v130 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
      if ( v130 )
        v130[1] = KeQueryPerformanceCounter(0LL);
      v131 = 0LL;
      while ( 1 )
      {
        v132 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v132 )
          v131 = *v132;
        v133 = (PVOID)PsGetCurrentProcess();
        if ( v133 )
        {
          if ( v133 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v131 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v131 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      EtwTraceAcquiredExclusiveUserCrit(v135, v134, v136);
      gptiCurrent = v131;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v404);
      v139 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = v139[2];
          v140 = *v139;
          v139[2] = 0LL;
          if ( !*(_DWORD *)(v140 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v138, v137);
          v143 = GetDomainLockRef(8LL, v137);
          if ( v143 == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v142, v141);
          tagObjLock::UnLock((tagObjLock *)v143);
          HMUnlockObject(*v139);
          tagObjLock::LockExclusive((struct _KTHREAD **)v143, v144);
          v139 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v10 = 0;
      }
      tagObjLock::UnLock(v404);
      if ( gProtocolType )
        goto LABEL_222;
      giPowerOffTimeOutMs = 1000 * a4[4];
    }
    if ( (int)IsModerncoreUserPowerInfoCalloutSupported() >= 0 )
      ModerncoreUserPowerInfoCallout();
    goto LABEL_222;
  }
  v11 = v9 - 1;
  if ( !v11 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    if ( v8 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v110 = *(_BYTE *)a4;
    v111 = *((_BYTE *)a4 + 1);
    v112 = a4[1];
    v113 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( v113 )
      v113[1] = KeQueryPerformanceCounter(0LL);
    v114 = 0LL;
    while ( 1 )
    {
      v115 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v115 )
        v114 = *v115;
      v116 = (PVOID)PsGetCurrentProcess();
      if ( v116 )
      {
        if ( v116 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v114 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v114 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v118, v117, v119);
    gptiCurrent = v114;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v403);
    v122 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = v122[2];
        v123 = *v122;
        v122[2] = 0LL;
        if ( !*(_DWORD *)(v123 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v121, v120);
        v126 = GetDomainLockRef(8LL, v120);
        if ( v126 == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v125, v124);
        tagObjLock::UnLock((tagObjLock *)v126);
        HMUnlockObject(*v122);
        tagObjLock::LockExclusive((struct _KTHREAD **)v126, v127);
        v122 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v10 = 0;
    }
    tagObjLock::UnLock(v403);
    if ( !v110 || !gbBlockSendInputResets )
    {
      v128 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      CInputGlobals::UpdateLastInputTime((__int64)gpInputGlobals, v128, 4u);
      CitpLastInputUpdate(0x20u, v128);
      if ( !v111 )
      {
        if ( dword_1C01A3080 )
        {
          if ( !*(_BYTE *)gpbIgnoreSleepInput )
            SetPendingInput((unsigned int)v112);
          goto LABEL_222;
        }
        LODWORD(v396) = 4;
        v397 = v112;
        goto LABEL_225;
      }
    }
    goto LABEL_222;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v47 = v12 - 1;
    if ( v47 )
    {
      v48 = v47 - 1;
      if ( !v48 )
      {
        if ( v8 != 32 || !a4 )
          return (unsigned int)-1073741811;
        v69 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
        if ( v69 )
          v69[1] = KeQueryPerformanceCounter(0LL);
        v70 = 0LL;
        while ( 1 )
        {
          v71 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v71 )
            v70 = *v71;
          v72 = (PVOID)PsGetCurrentProcess();
          if ( v72 )
          {
            if ( v72 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v70 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v70 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredExclusiveUserCrit(v74, v73, v75);
        gptiCurrent = v70;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v400);
        v78 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = v78[2];
            v79 = *v78;
            v78[2] = 0LL;
            if ( !*(_DWORD *)(v79 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v77, v76);
            v82 = GetDomainLockRef(8LL, v76);
            if ( v82 == &gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v81, v80);
            tagObjLock::UnLock((tagObjLock *)v82);
            HMUnlockObject(*v78);
            tagObjLock::LockExclusive((struct _KTHREAD **)v82, v83);
            v78 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v10 = 0;
        }
        tagObjLock::UnLock(v400);
        dword_1C01A0374 = *a4;
        v84 = (unsigned int)a4[1];
        dword_1C01A0378 = a4[1];
        dword_1C01A037C = a4[2];
        dword_1C01A0380 = a4[3];
        dword_1C01A0384 = a4[4];
        dword_1C01A0388 = a4[5];
        dword_1C01A038C = a4[6];
        dword_1C01A0390 = a4[7];
        if ( !gProtocolType && !gbPowerHighPrecisionBrightnessSupported && (_DWORD)v84 != -1 )
        {
          if ( qword_1C01A1ED0 )
          {
            LOBYTE(v84) = 1;
            v10 = qword_1C01A1ED0(v84, a4);
          }
          else
          {
            v10 = -1073741637;
          }
          LOBYTE(v6) = (v10 & 0x80000000) == 0;
          gbPowerHighPrecisionBrightnessSupported = v6;
        }
        v67 = (unsigned int)dword_1C01A0374;
        dword_1C01A0358 = dword_1C01A0374;
        dword_1C01A035C = dword_1C01A0374;
        dword_1C01A0360 = dword_1C01A0384;
        dword_1C01A0364 = dword_1C01A0384;
        if ( dword_1C01A0350 == 1 )
        {
          if ( dword_1C01A0370 == dword_1C01A0374 )
            goto LABEL_222;
          LODWORD(v396) = 11;
          v397 = 1LL;
          QueuePowerRequest(&v396, 0LL);
        }
        if ( dword_1C01A0350 != 2 || dword_1C01A0370 == dword_1C01A0384 )
          goto LABEL_222;
        LODWORD(v396) = 11;
        v397 = 2LL;
        goto LABEL_225;
      }
      v49 = v48 - 1;
      if ( v49 )
      {
        v50 = v49 - 1;
        if ( v50 )
        {
          if ( v50 == 1 )
          {
            if ( !gbTtmEnabled )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
            if ( v8 == 4 && a4 )
            {
              LOBYTE(a2) = 1;
              v397 = *a4;
              LODWORD(v396) = 15;
LABEL_68:
              QueuePowerRequest(&v396, a2);
              return v10;
            }
          }
          return (unsigned int)-1073741823;
        }
        if ( !gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
        if ( v8 != 8 || !a4 )
          return (unsigned int)-1073741823;
        UserSessionSwitchBlock_Start();
        v397 = a4[1];
        LODWORD(v396) = 14;
        if ( *(_BYTE *)a4 )
          LODWORD(v396) = 13;
LABEL_67:
        a2 = 0LL;
        goto LABEL_68;
      }
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      v51 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
      if ( v51 )
        v51[1] = KeQueryPerformanceCounter(0LL);
      v52 = 0LL;
      while ( 1 )
      {
        v53 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v53 )
          v52 = *v53;
        v54 = (PVOID)PsGetCurrentProcess();
        if ( v54 )
        {
          if ( v54 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v52 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v52 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      EtwTraceAcquiredExclusiveUserCrit(v56, v55, v57);
      gptiCurrent = v52;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v399);
      v60 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = v60[2];
          v61 = *v60;
          v60[2] = 0LL;
          if ( !*(_DWORD *)(v61 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58);
          v64 = GetDomainLockRef(8LL, v58);
          if ( v64 == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v63, v62);
          tagObjLock::UnLock((tagObjLock *)v64);
          HMUnlockObject(*v60);
          tagObjLock::LockExclusive((struct _KTHREAD **)v64, v65);
          v60 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v10 = 0;
      }
      tagObjLock::UnLock(v399);
      if ( gWakeInProgress )
      {
        v68 = gWakeInProgressReason;
        gWakeInProgressReason = MonitorRequestReasonUnknown;
        gWakeInProgress = 0;
        if ( gnPoSessionSwitchBlockCount < 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v67, v66);
        LODWORD(v396) = 12;
        v397 = v68;
LABEL_225:
        QueuePowerRequest(&v396, 0LL);
      }
LABEL_222:
      UserSessionSwitchLeaveCrit(v67);
      return v10;
    }
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    if ( v8 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v85 = (unsigned int)*a4;
    v86 = 0;
    v87 = 0;
    if ( (_DWORD)v85 )
    {
      v88 = (unsigned int)(v85 - 1);
      if ( !(_DWORD)v88 )
      {
        v87 = 1;
LABEL_168:
        CInputGlobals::UpdateLastInputTime(
          (__int64)gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          4u);
LABEL_169:
        if ( v86 )
        {
          if ( gSystemIsAoAc )
            SetInputMode(1LL);
          if ( !v87 )
          {
            LODWORD(v396) = 5;
            goto LABEL_177;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v85, a2);
        }
        else if ( !v87 )
        {
          return v10;
        }
        LODWORD(v396) = 4;
LABEL_177:
        v397 = a4[1];
        goto LABEL_67;
      }
      if ( (_DWORD)v88 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v88, a2);
        return v10;
      }
      v89 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v88, a2, a3);
      if ( v89 )
        v89[1] = KeQueryPerformanceCounter(0LL);
      v90 = 0LL;
      while ( 1 )
      {
        v91 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v91 )
          v90 = *v91;
        v92 = (PVOID)PsGetCurrentProcess();
        if ( v92 )
        {
          if ( v92 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v90 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v90 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      EtwTraceAcquiredExclusiveUserCrit(v94, v93, v95);
      gptiCurrent = v90;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v401);
      v98 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = v98[2];
          v99 = *v98;
          v98[2] = 0LL;
          if ( !*(_DWORD *)(v99 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v97, v96);
          v102 = GetDomainLockRef(8LL, v96);
          if ( v102 == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v101, v100);
          tagObjLock::UnLock((tagObjLock *)v102);
          HMUnlockObject(*v98);
          tagObjLock::LockExclusive((struct _KTHREAD **)v102, v103);
          v98 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v10 = 0;
      }
      tagObjLock::UnLock(v401);
      if ( gPowerTransitionsState )
        v10 = 255;
      else
        v87 = 1;
      UserSessionSwitchLeaveCrit(v104);
    }
    else
    {
      v86 = 1;
    }
    if ( !v87 )
      goto LABEL_169;
    goto LABEL_168;
  }
  if ( gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( v8 != 4 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  if ( a5 != 4 )
    return (unsigned int)-1073741811;
  v13 = a6;
  if ( !a6 )
    return (unsigned int)-1073741811;
  v14 = *a4;
  v15 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( v15 )
    v15[1] = KeQueryPerformanceCounter(0LL);
  v16 = 0LL;
  while ( 1 )
  {
    v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v17 )
      v16 = *v17;
    v18 = (PVOID)PsGetCurrentProcess();
    if ( v18 )
    {
      if ( v18 == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v16 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v16 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v20, v19, v21);
  gptiCurrent = v16;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v402);
  v24 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    do
    {
      gpducstulHead = v24[2];
      v105 = *v24;
      v24[2] = 0LL;
      if ( !*(_DWORD *)(v105 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
      v108 = GetDomainLockRef(8LL, v22);
      if ( v108 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v107, v106);
      tagObjLock::UnLock((tagObjLock *)v108);
      HMUnlockObject(*v24);
      tagObjLock::LockExclusive((struct _KTHREAD **)v108, v109);
      v24 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
    v10 = 0;
  }
  tagObjLock::UnLock(v402);
  v25 = dword_1C01A0348;
  v26 = dword_1C01A0348 + v14;
  dword_1C01A0348 += v14;
  if ( v25 != 1 )
  {
    if ( !v25 && v26 == 1 )
    {
      CitDisplayRequestChange(1u);
      EtwTraceDisplayReqChange();
    }
LABEL_27:
    v27 = v26 == 0;
    v28 = v26 < 0;
    goto LABEL_28;
  }
  v27 = v26 == 0;
  v28 = v26 < 0;
  if ( !v26 )
  {
    CitDisplayRequestChange(0);
    EtwTraceDisplayReqChange();
    if ( !gbBlockSendInputResets )
      CInputGlobals::UpdateLastInputTime(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        9u);
    goto LABEL_27;
  }
LABEL_28:
  v420 = !v28 && !v27;
  ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &v420, 1LL, 0LL, &gSessionId, 0, 0);
  UserSessionSwitchLeaveCrit(v29);
  if ( !v25 && v26 == 1 && dword_1C01A0350 == 2 )
  {
    LODWORD(v396) = 4;
    v397 = 0LL;
    QueuePowerRequest(&v396, 0LL);
  }
  if ( v26 >= 0 )
    v6 = v26;
  *v13 = v6;
  return v10;
}
