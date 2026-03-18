/*
 * XREFs of xxxDisplayDiagBlackScreenDetected @ 0x1C0108B80
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C012817C (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062C00 (xxxUserSetDisplayConfig.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C0108AE4 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvDxgkCheckDisplayState @ 0x1C012B178 (DrvDxgkCheckDisplayState.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C012B260 (DrvDxgkPollDisplayChildren.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(int a1, char a2, char a3, __int128 *a4, int *a5)
{
  __int128 *v7; // r12
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rax
  struct tagTHREADINFO *v14; // rbx
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int *v42; // r15
  __int128 *v43; // rbx
  PEPROCESS ThreadProcess; // rax
  int ProcessImageFileName; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  LARGE_INTEGER *v48; // rbx
  __int64 v49; // rax
  struct tagTHREADINFO *v50; // rbx
  struct tagTHREADINFO **v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  PVOID v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned int v57; // r9d
  __int64 v58; // rdx
  __int64 v59; // rcx
  PERESOURCE *v60; // rbx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 *v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  PERESOURCE *v72; // rdi
  __int64 v73; // r8
  __int64 v74; // rdx
  int v75; // r14d
  __int64 v76; // rcx
  __int64 v77; // rcx
  LARGE_INTEGER *v78; // rbx
  __int64 v79; // rax
  struct tagTHREADINFO *v80; // rbx
  struct tagTHREADINFO **v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  PVOID v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned int v87; // r9d
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // rcx
  PERESOURCE *v92; // rbx
  __int64 v93; // r8
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 *v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  PERESOURCE *v104; // rdi
  __int64 v105; // r8
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int128 *v108; // rbx
  PEPROCESS v109; // rax
  int v110; // eax
  __int64 v111; // rcx
  __int64 v112; // rcx
  LARGE_INTEGER *v113; // rbx
  __int64 v114; // rax
  struct tagTHREADINFO *v115; // rbx
  struct tagTHREADINFO **v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  PVOID v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  unsigned int v122; // r9d
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // rdx
  __int64 v126; // rcx
  PERESOURCE *v127; // rbx
  __int64 v128; // r8
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  PERESOURCE *v138; // rdi
  __int64 v139; // r8
  __int64 *v140; // rsi
  __int64 v141; // r9
  int v142; // r10d
  bool v143; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v144; // [rsp+52h] [rbp-AEh] BYREF
  int v145; // [rsp+54h] [rbp-ACh] BYREF
  int v146; // [rsp+58h] [rbp-A8h] BYREF
  int v147; // [rsp+5Ch] [rbp-A4h] BYREF
  int v148; // [rsp+60h] [rbp-A0h] BYREF
  int v149; // [rsp+64h] [rbp-9Ch] BYREF
  int v150; // [rsp+68h] [rbp-98h] BYREF
  int v151; // [rsp+6Ch] [rbp-94h] BYREF
  int v152; // [rsp+70h] [rbp-90h] BYREF
  int v153; // [rsp+74h] [rbp-8Ch] BYREF
  int v154; // [rsp+78h] [rbp-88h] BYREF
  int v155; // [rsp+7Ch] [rbp-84h] BYREF
  int v156; // [rsp+80h] [rbp-80h] BYREF
  __int64 v157; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v158[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 *v159; // [rsp+B0h] [rbp-50h]
  __int128 v160; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v161; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v162; // [rsp+E0h] [rbp-20h]
  unsigned __int8 v163; // [rsp+E8h] [rbp-18h]
  GUID pActivityId; // [rsp+ECh] [rbp-14h] BYREF
  __int64 v165; // [rsp+100h] [rbp+0h]
  unsigned __int8 v166; // [rsp+108h] [rbp+8h]
  GUID v167; // [rsp+10Ch] [rbp+Ch] BYREF
  __int64 v168; // [rsp+120h] [rbp+20h]
  unsigned __int8 v169; // [rsp+128h] [rbp+28h]
  GUID v170; // [rsp+12Ch] [rbp+2Ch] BYREF
  __int64 v171; // [rsp+140h] [rbp+40h]
  unsigned __int8 v172; // [rsp+148h] [rbp+48h]
  GUID v173; // [rsp+14Ch] [rbp+4Ch] BYREF
  _QWORD v174[2]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v175[10]; // [rsp+170h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR v176; // [rsp+1C0h] [rbp+C0h] BYREF
  __int16 *v177; // [rsp+1E0h] [rbp+E0h]
  __int64 v178; // [rsp+1E8h] [rbp+E8h]
  char *v179; // [rsp+1F0h] [rbp+F0h]
  __int64 v180; // [rsp+1F8h] [rbp+F8h]
  _QWORD *v181; // [rsp+200h] [rbp+100h]
  __int64 v182; // [rsp+208h] [rbp+108h]
  _QWORD *v183; // [rsp+210h] [rbp+110h]
  __int64 v184; // [rsp+218h] [rbp+118h]
  _QWORD *v185; // [rsp+220h] [rbp+120h]
  __int64 v186; // [rsp+228h] [rbp+128h]
  char *v187; // [rsp+230h] [rbp+130h]
  __int64 v188; // [rsp+238h] [rbp+138h]
  char *v189; // [rsp+240h] [rbp+140h]
  __int64 v190; // [rsp+248h] [rbp+148h]
  _DWORD *v191; // [rsp+250h] [rbp+150h]
  __int64 v192; // [rsp+258h] [rbp+158h]
  __int64 v193; // [rsp+260h] [rbp+160h]
  _DWORD v194[2]; // [rsp+268h] [rbp+168h] BYREF
  int *v195; // [rsp+270h] [rbp+170h]
  __int64 v196; // [rsp+278h] [rbp+178h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+280h] [rbp+180h] BYREF
  int *v198; // [rsp+2A0h] [rbp+1A0h]
  __int64 v199; // [rsp+2A8h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR v200; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v201; // [rsp+2D0h] [rbp+1D0h]
  __int64 v202; // [rsp+2D8h] [rbp+1D8h]
  EVENT_DATA_DESCRIPTOR v203; // [rsp+2E0h] [rbp+1E0h] BYREF
  int *v204; // [rsp+300h] [rbp+200h]
  __int64 v205; // [rsp+308h] [rbp+208h]
  EVENT_DATA_DESCRIPTOR v206; // [rsp+310h] [rbp+210h] BYREF
  int *v207; // [rsp+330h] [rbp+230h]
  __int64 v208; // [rsp+338h] [rbp+238h]
  EVENT_DATA_DESCRIPTOR v209; // [rsp+340h] [rbp+240h] BYREF
  int *v210; // [rsp+360h] [rbp+260h]
  __int64 v211; // [rsp+368h] [rbp+268h]
  EVENT_DATA_DESCRIPTOR v212; // [rsp+370h] [rbp+270h] BYREF
  int *v213; // [rsp+390h] [rbp+290h]
  __int64 v214; // [rsp+398h] [rbp+298h]
  EVENT_DATA_DESCRIPTOR v215; // [rsp+3A0h] [rbp+2A0h] BYREF
  int *v216; // [rsp+3C0h] [rbp+2C0h]
  __int64 v217; // [rsp+3C8h] [rbp+2C8h]
  EVENT_DATA_DESCRIPTOR v218; // [rsp+3D0h] [rbp+2D0h] BYREF
  int *v219; // [rsp+3F0h] [rbp+2F0h]
  __int64 v220; // [rsp+3F8h] [rbp+2F8h]
  EVENT_DATA_DESCRIPTOR v221; // [rsp+400h] [rbp+300h] BYREF
  int *v222; // [rsp+420h] [rbp+320h]
  __int64 v223; // [rsp+428h] [rbp+328h]
  EVENT_DATA_DESCRIPTOR v224; // [rsp+430h] [rbp+330h] BYREF
  int *v225; // [rsp+450h] [rbp+350h]
  __int64 v226; // [rsp+458h] [rbp+358h]
  EVENT_DATA_DESCRIPTOR v227; // [rsp+460h] [rbp+360h] BYREF
  int *v228; // [rsp+480h] [rbp+380h]
  __int64 v229; // [rsp+488h] [rbp+388h]
  EVENT_DATA_DESCRIPTOR v230; // [rsp+490h] [rbp+390h] BYREF
  int *v231; // [rsp+4B0h] [rbp+3B0h]
  __int64 v232; // [rsp+4B8h] [rbp+3B8h]
  int v233; // [rsp+510h] [rbp+410h] BYREF

  v233 = a1;
  v159 = a4;
  v7 = a4;
  memset(v175, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v175[1]);
  v175[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v175[4]) = v233;
  v174[0] = 0LL;
  v9 = 0;
  v174[1] = 0LL;
  LODWORD(v175[3]) = 15;
  LOBYTE(v175[6]) = -1;
  while ( gfSwitchInProgress )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v8);
    KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&pActivityId.Data1 = 0LL;
    *(_QWORD *)pActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v163 = 1;
      v13 = PsGetCurrentThreadWin32Thread(v11);
      v162 = v13;
      if ( v13 && (*(int *)(v13 + 24) > 0 || *(_DWORD *)(v162 + 48)) )
      {
        EtwActivityIdControl(3u, &pActivityId);
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v145 = v163;
            v198 = &v145;
            v199 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &pActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v162 = 0LL;
    }
    v14 = 0LL;
    while ( 1 )
    {
      v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v15 )
        v14 = *v15;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v20, v19) == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v14 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v162
      && (*(_DWORD *)(v162 + 48) || *(int *)(v162 + 24) > 0) )
    {
      *(_DWORD *)(v162 + 44) = 1;
      *(GUID *)(v162 + 28) = pActivityId;
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v146 = v163;
          v201 = &v146;
          v202 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &pActivityId, 0LL, 3u, &v200);
          v21 = dword_1C020CB50;
        }
        if ( v21 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v147 = v163;
          v204 = &v147;
          v205 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &pActivityId, 0LL, 3u, &v203);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v14;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v8, v22);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v33 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v33[2];
          v34 = *v33;
          v33[2] = 0LL;
          if ( !*(_DWORD *)(v34 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
          v37 = (PERESOURCE *)GetDomainLockRef(12LL, v30, v32);
          if ( v37 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v38);
          ExReleaseResourceAndLeaveCriticalRegion(*v37);
          HMUnlockObject(*v33);
          tagDomLock::LockExclusive(v37);
          v33 = (__int64 *)gpducstulHead;
          v9 = 0;
        }
        while ( gpducstulHead );
        v7 = v159;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  memset(v158, 0, sizeof(v158));
  LOWORD(v158[0]) = gProtocolType;
  if ( !gProtocolType )
  {
    v42 = a5;
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit(v40, v39);
      if ( v42 )
        v9 = *v42;
      v43 = (__int128 *)v174;
      if ( v7 )
        v43 = v7;
      if ( gptiForeground )
      {
        ThreadProcess = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
        ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
      }
      else
      {
        ProcessImageFileName = 0;
      }
      v160 = *v43;
      DrvDxgkCheckDisplayState(v233, 1, ProcessImageFileName, (unsigned int)v175, (__int64)&v160, v9);
      xmmword_1C02169D8 = *(_OWORD *)&v175[1];
      v9 = 0;
      v48 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v46);
      if ( v48 )
        v48[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&v167.Data1 = 0LL;
      *(_QWORD *)v167.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v166 = 1;
        v49 = PsGetCurrentThreadWin32Thread(v47);
        v165 = v49;
        if ( v49 && (*(int *)(v49 + 24) > 0 || *(_DWORD *)(v165 + 48)) )
        {
          EtwActivityIdControl(3u, &v167);
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v148 = v166;
              v207 = &v148;
              v208 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v167, 0LL, 3u, &v206);
            }
          }
        }
      }
      else
      {
        v165 = 0LL;
      }
      v50 = 0LL;
      while ( 1 )
      {
        v51 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v51 )
          v50 = *v51;
        v54 = (PVOID)PsGetCurrentProcess(v53, v52);
        if ( v54 )
        {
          if ( v54 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v56, v55) == gpepCSRSS && v50 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v50 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v165
        && (*(_DWORD *)(v165 + 48) || *(int *)(v165 + 24) > 0) )
      {
        *(_DWORD *)(v165 + 44) = 1;
        *(GUID *)(v165 + 28) = v167;
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v149 = v166;
            v210 = &v149;
            v211 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v167, 0LL, 3u, &v209);
            v57 = dword_1C020CB50;
          }
          if ( v57 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v150 = v166;
            v213 = &v150;
            v214 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v167, 0LL, 3u, &v212);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v50;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        v60 = (PERESOURCE *)GetDomainLockRef(12LL, v39, v41);
        if ( v60 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v61);
        if ( ExIsResourceAcquiredExclusiveLite(*v60) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v63, v62, v64);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v60);
        v68 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v68[2];
            v69 = *v68;
            v68[2] = 0LL;
            if ( !*(_DWORD *)(v69 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v65, v67);
            v72 = (PERESOURCE *)GetDomainLockRef(12LL, v65, v67);
            if ( v72 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v71, v70, v73);
            ExReleaseResourceAndLeaveCriticalRegion(*v72);
            HMUnlockObject(*v68);
            tagDomLock::LockExclusive(v72);
            v68 = (__int64 *)gpducstulHead;
            v9 = 0;
          }
          while ( gpducstulHead );
          v42 = a5;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v60);
      }
    }
    if ( a3 )
    {
      DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)v158, v39, v41);
      HIDWORD(v158[0]) = 1;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v74);
      v157 = 0x1A00000000LL;
      v75 = DrvDxgkPollDisplayChildren(&v157);
      LODWORD(v158[1]) = v75;
      v78 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v76);
      if ( v78 )
        v78[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&v170.Data1 = 0LL;
      *(_QWORD *)v170.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v169 = 1;
        v79 = PsGetCurrentThreadWin32Thread(v77);
        v168 = v79;
        if ( v79 && (*(int *)(v79 + 24) > 0 || *(_DWORD *)(v168 + 48)) )
        {
          EtwActivityIdControl(3u, &v170);
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v151 = v169;
              v216 = &v151;
              v217 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v170, 0LL, 3u, &v215);
            }
          }
        }
      }
      else
      {
        v168 = 0LL;
      }
      v80 = 0LL;
      while ( 1 )
      {
        v81 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v81 )
          v80 = *v81;
        v84 = (PVOID)PsGetCurrentProcess(v83, v82);
        if ( v84 )
        {
          if ( v84 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v86, v85) == gpepCSRSS && v80 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v80 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v168
        && (*(_DWORD *)(v168 + 48) || *(int *)(v168 + 24) > 0) )
      {
        *(_DWORD *)(v168 + 44) = 1;
        *(GUID *)(v168 + 28) = v170;
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v152 = v169;
            v219 = &v152;
            v220 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v170, 0LL, 3u, &v218);
            v87 = dword_1C020CB50;
          }
          if ( v87 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v153 = v169;
            v222 = &v153;
            v223 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v170, 0LL, 3u, &v221);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v80;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        v92 = (PERESOURCE *)GetDomainLockRef(12LL, v88, v89);
        if ( v92 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v91, v90, v93);
        if ( ExIsResourceAcquiredExclusiveLite(*v92) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v95, v94, v96);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v92);
        v100 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v100[2];
            v101 = *v100;
            v100[2] = 0LL;
            if ( !*(_DWORD *)(v101 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v98, v97, v99);
            v104 = (PERESOURCE *)GetDomainLockRef(12LL, v97, v99);
            if ( v104 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v103, v102, v105);
            ExReleaseResourceAndLeaveCriticalRegion(*v104);
            HMUnlockObject(*v100);
            tagDomLock::LockExclusive(v104);
            v100 = (__int64 *)gpducstulHead;
            v9 = 0;
          }
          while ( gpducstulHead );
          v42 = a5;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v92);
      }
      *(_OWORD *)&v175[1] = xmmword_1C02169D8;
      if ( v75 >= 0 )
      {
        HIDWORD(v158[1]) = xxxUserSetDisplayConfig(0, 0LL, 0x187u, 0x80u, 0LL, 0, 0LL, &v143, 0LL, (__int64)v175);
        if ( v158[1] >= 0 )
        {
          UserSessionSwitchLeaveCrit(v107, v106);
          if ( v42 )
            v9 = *v42;
          v108 = (__int128 *)v174;
          if ( v7 )
            v108 = v7;
          if ( gptiForeground )
          {
            v109 = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
            v110 = PsGetProcessImageFileName(v109);
          }
          else
          {
            v110 = 0;
          }
          v161 = *v108;
          DrvDxgkCheckDisplayState(v233, 0, v110, (unsigned int)v175, (__int64)&v161, v9);
          v113 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v111);
          if ( v113 )
            v113[1] = KeQueryPerformanceCounter(0LL);
          *(_QWORD *)&v173.Data1 = 0LL;
          *(_QWORD *)v173.Data4 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v172 = 1;
            v114 = PsGetCurrentThreadWin32Thread(v112);
            v171 = v114;
            if ( v114 && (*(int *)(v114 + 24) > 0 || *(_DWORD *)(v171 + 48)) )
            {
              EtwActivityIdControl(3u, &v173);
              if ( dword_1C020CB50 > 6u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                {
                  v154 = v172;
                  v225 = &v154;
                  v226 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v173, 0LL, 3u, &v224);
                }
              }
            }
          }
          else
          {
            v171 = 0LL;
          }
          v115 = 0LL;
          while ( 1 )
          {
            v116 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v116 )
              v115 = *v116;
            v119 = (PVOID)PsGetCurrentProcess(v118, v117);
            if ( v119 )
            {
              if ( v119 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v121, v120) == gpepCSRSS && v115 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v115 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v171
            && (*(_DWORD *)(v171 + 48) || *(int *)(v171 + 24) > 0) )
          {
            *(_DWORD *)(v171 + 44) = 1;
            *(GUID *)(v171 + 28) = v173;
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v155 = v172;
                v228 = &v155;
                v229 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v173, 0LL, 3u, &v227);
                v122 = dword_1C020CB50;
              }
              if ( v122 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v156 = v172;
                v231 = &v156;
                v232 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v173, 0LL, 3u, &v230);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v115;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            v127 = (PERESOURCE *)GetDomainLockRef(12LL, v123, v124);
            if ( v127 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v126, v125, v128);
            if ( ExIsResourceAcquiredExclusiveLite(*v127) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v130, v129, v131);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*v127);
            while ( 1 )
            {
              v140 = (__int64 *)gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v135 = *v140;
              v140[2] = 0LL;
              if ( !*(_DWORD *)(v135 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v133, v132, v134);
              v138 = (PERESOURCE *)GetDomainLockRef(12LL, v132, v134);
              if ( v138 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v137, v136, v139);
              ExReleaseResourceAndLeaveCriticalRegion(*v138);
              HMUnlockObject(*v140);
              tagDomLock::LockExclusive(v138);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v127);
          }
        }
      }
    }
  }
  v141 = v158[3];
  if ( a3 && dword_1C020C458 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C458, 0x400000000008uLL) )
  {
    v178 = 2LL;
    v144 = 4;
    v177 = &v144;
    v179 = (char *)v158 + 4;
    v181 = v158;
    v183 = &v158[2];
    v185 = &v158[1];
    v187 = (char *)&v158[1] + 4;
    v189 = (char *)&v158[2] + 4;
    v191 = v194;
    v195 = &v233;
    v180 = 4LL;
    v182 = 2LL;
    v184 = 4LL;
    v186 = 4LL;
    v188 = 4LL;
    v190 = 4LL;
    v192 = 2LL;
    v193 = v141;
    v194[0] = v142;
    v194[1] = 0;
    v196 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C020C458, &unk_1C01E1702, (LPCGUID)&v175[1], 0LL, 0xCu, &v176);
    v141 = v158[3];
  }
  if ( v141 )
    Win32FreePool(v141);
}
