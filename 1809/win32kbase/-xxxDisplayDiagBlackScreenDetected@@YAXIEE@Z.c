/*
 * XREFs of ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00E3750
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0102028 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     xxxUserSetDisplayConfig @ 0x1C0049150 (xxxUserSetDisplayConfig.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00E36BC (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C0104900 (DrvDxgkPollDisplayChildren.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(unsigned int a1, char a2, char a3)
{
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessImageFileName; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  LARGE_INTEGER *v26; // rbx
  struct tagTHREADINFO *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rbx
  __int64 v36; // r8
  int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  LARGE_INTEGER *v41; // rbx
  struct tagTHREADINFO *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // r10d
  bool v55; // [rsp+51h] [rbp-AFh] BYREF
  __int16 v56; // [rsp+52h] [rbp-AEh] BYREF
  unsigned int v57; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v59[4]; // [rsp+68h] [rbp-98h] BYREF
  tagObjLock *v60; // [rsp+88h] [rbp-78h] BYREF
  tagObjLock *v61; // [rsp+90h] [rbp-70h] BYREF
  tagObjLock *v62; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v63[10]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v64[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v65[32]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v66[32]; // [rsp+130h] [rbp+30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF
  __int16 *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  char *v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  _QWORD *v72; // [rsp+190h] [rbp+90h]
  __int64 v73; // [rsp+198h] [rbp+98h]
  _QWORD *v74; // [rsp+1A0h] [rbp+A0h]
  __int64 v75; // [rsp+1A8h] [rbp+A8h]
  _QWORD *v76; // [rsp+1B0h] [rbp+B0h]
  __int64 v77; // [rsp+1B8h] [rbp+B8h]
  char *v78; // [rsp+1C0h] [rbp+C0h]
  __int64 v79; // [rsp+1C8h] [rbp+C8h]
  char *v80; // [rsp+1D0h] [rbp+D0h]
  __int64 v81; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v82; // [rsp+1E0h] [rbp+E0h]
  __int64 v83; // [rsp+1E8h] [rbp+E8h]
  __int64 v84; // [rsp+1F0h] [rbp+F0h]
  _DWORD v85[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int *v86; // [rsp+200h] [rbp+100h]
  __int64 v87; // [rsp+208h] [rbp+108h]

  v57 = a1;
  v4 = a3;
  memset(v63, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v63[1]);
  v63[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v63[4]) = v57;
  LODWORD(v63[3]) = 15;
  LOBYTE(v63[6]) = -1;
  while ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5, v7);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v64, 1);
    v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v64);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v60);
    v13 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = v13[2];
        v14 = *v13;
        v13[2] = 0LL;
        if ( !*(_DWORD *)(v14 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
        DomainLockRef = GetDomainLockRef(8);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v13);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
        v13 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v4 = a3;
    }
    tagObjLock::UnLock(v60);
  }
  memset(v59, 0, sizeof(v59));
  LOWORD(v59[0]) = gProtocolType;
  if ( !gProtocolType )
  {
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit();
      if ( gptiForeground )
      {
        ThreadProcess = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
        ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
      }
      else
      {
        ProcessImageFileName = 0LL;
      }
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD *))qword_1C01CDEC8)(v57, 1LL, ProcessImageFileName, v63);
      xmmword_1C01D1EF0 = *(_OWORD *)&v63[1];
      v26 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v24, v23, v25);
      if ( v26 )
        v26[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v65, 1);
      v27 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v65);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v27;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v61);
      v31 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = v31[2];
          v32 = *v31;
          v31[2] = 0LL;
          if ( !*(_DWORD *)(v32 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
          v35 = GetDomainLockRef(8);
          if ( v35 == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36);
          tagObjLock::UnLock((tagObjLock *)v35);
          HMUnlockObject(*v31);
          tagObjLock::LockExclusive((struct _KTHREAD **)v35);
          v31 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v4 = a3;
      }
      tagObjLock::UnLock(v61);
    }
    if ( v4 )
    {
      DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)v59, v19, v20);
      HIDWORD(v59[0]) = 1;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      v58 = 0x1A00000000LL;
      v37 = DrvDxgkPollDisplayChildren(&v58);
      LODWORD(v59[1]) = v37;
      v41 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v39, v38, v40);
      if ( v41 )
        v41[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v66, 1);
      v42 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v66);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v42;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v62);
      v46 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = v46[2];
          v47 = *v46;
          v46[2] = 0LL;
          if ( !*(_DWORD *)(v47 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45);
          v50 = GetDomainLockRef(8);
          if ( v50 == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51);
          tagObjLock::UnLock((tagObjLock *)v50);
          HMUnlockObject(*v46);
          tagObjLock::LockExclusive((struct _KTHREAD **)v50);
          v46 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v4 = a3;
      }
      tagObjLock::UnLock(v62);
      *(_OWORD *)&v63[1] = xmmword_1C01D1EF0;
      if ( v37 >= 0 )
        HIDWORD(v59[1]) = xxxUserSetDisplayConfig(0, 0LL, 0x187u, 0x80u, 0LL, 0, 0LL, &v55, 0LL, (__int64)v63);
    }
  }
  v52 = v59[3];
  if ( v4 && dword_1C01C3348 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C3348, 0x400000000008uLL) )
  {
    v69 = 2LL;
    v56 = 4;
    v68 = &v56;
    v70 = (char *)v59 + 4;
    v72 = v59;
    v74 = &v59[2];
    v76 = &v59[1];
    v78 = (char *)&v59[1] + 4;
    v80 = (char *)&v59[2] + 4;
    v82 = v85;
    v86 = &v57;
    v71 = 4LL;
    v73 = 2LL;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 2LL;
    v84 = v52;
    v85[0] = v53;
    v85[1] = 0;
    v87 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C3348, &unk_1C019D705, (LPCGUID)&v63[1], 0LL, 0xCu, &pData);
    v52 = v59[3];
  }
  if ( v52 )
    Win32FreePool(v52);
}
