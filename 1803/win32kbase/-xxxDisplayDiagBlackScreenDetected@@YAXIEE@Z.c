/*
 * XREFs of ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00A61B0
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00D02B4 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00A611C (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C00A6D60 (xxxUserSetDisplayConfig.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C00D48B0 (DrvDxgkPollDisplayChildren.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(unsigned int a1, char a2, char a3)
{
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *i; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v23; // rdx
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessImageFileName; // r8
  int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  LARGE_INTEGER *v30; // rbx
  struct tagTHREADINFO *v31; // rbx
  struct tagTHREADINFO **v32; // rax
  __int64 v33; // rcx
  PVOID v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 *v44; // rbx
  __int64 v45; // rdx
  const GUID *v46; // r9
  int v47; // r10d
  char v49; // [rsp+51h] [rbp-AFh] BYREF
  __int16 v50; // [rsp+52h] [rbp-AEh] BYREF
  unsigned int v51; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v53[4]; // [rsp+68h] [rbp-98h] BYREF
  tagObjLock *v54; // [rsp+88h] [rbp-78h] BYREF
  tagObjLock *v55; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v56[10]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  __int16 *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  char *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  _QWORD *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  _QWORD *v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  _QWORD *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  char *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  char *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  _DWORD *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  const GUID *v74; // [rsp+190h] [rbp+90h]
  _DWORD v75[2]; // [rsp+198h] [rbp+98h] BYREF
  unsigned int *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]

  v51 = a1;
  v4 = a3;
  memset(v56, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v56[1]);
  v56[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v56[4]) = v51;
  LODWORD(v56[3]) = 15;
  LOBYTE(v56[6]) = -1;
  while ( gfSwitchInProgress )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
    KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5, v7);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v9 = 0LL;
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v9 = *v10;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v9 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v14, v13, v15);
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v54);
    for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
    {
      gpducstulHead = i[2];
      v19 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v19 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
      DomainLockRef = GetDomainLockRef(8LL, v16);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*i);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v23);
    }
    tagObjLock::UnLock(v54);
  }
  memset(v53, 0, sizeof(v53));
  LOWORD(v53[0]) = gProtocolType;
  if ( !gProtocolType )
  {
    if ( a2 )
    {
      if ( gptiForeground )
      {
        ThreadProcess = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
        ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
      }
      else
      {
        ProcessImageFileName = 0LL;
      }
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD *))qword_1C01A2038)(v51, 1LL, ProcessImageFileName, v56);
      xmmword_1C01A6510 = *(_OWORD *)&v56[1];
    }
    if ( v4 )
    {
      DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)v53);
      HIDWORD(v53[0]) = 1;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
      v52 = 0x1A00000000LL;
      v26 = DrvDxgkPollDisplayChildren(&v52);
      LODWORD(v53[1]) = v26;
      v30 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v28, v27, v29);
      if ( v30 )
        v30[1] = KeQueryPerformanceCounter(0LL);
      v31 = 0LL;
      while ( 1 )
      {
        v32 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v32 )
          v31 = *v32;
        v34 = (PVOID)PsGetCurrentProcess(v33);
        if ( v34 )
        {
          if ( v34 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v36) == gpepCSRSS && v31 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v31 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      EtwTraceAcquiredExclusiveUserCrit(v36, v35, v37);
      gptiCurrent = v31;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v55);
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
          v44 = GetDomainLockRef(8LL, v38);
          if ( v44 == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42);
          tagObjLock::UnLock((tagObjLock *)v44);
          HMUnlockObject(*v40);
          tagObjLock::LockExclusive((struct _KTHREAD **)v44, v45);
          v40 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v4 = a3;
      }
      tagObjLock::UnLock(v55);
      *(_OWORD *)&v56[1] = xmmword_1C01A6510;
      if ( v26 >= 0 )
        HIDWORD(v53[1]) = xxxUserSetDisplayConfig(0, 0, 391, 128, 0LL, 0, 0LL, (__int64)&v49, 0LL, (__int64)v56);
    }
  }
  v46 = (const GUID *)v53[3];
  if ( v4 && dword_1C019A200 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019A200, 0x400000000008uLL) )
  {
    v59 = 2LL;
    v50 = 4;
    v58 = &v50;
    v60 = (char *)v53 + 4;
    v62 = v53;
    v64 = &v53[2];
    v66 = &v53[1];
    v68 = (char *)&v53[1] + 4;
    v70 = (char *)&v53[2] + 4;
    v72 = v75;
    v76 = &v51;
    v61 = 4LL;
    v63 = 2LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 2LL;
    v74 = v46;
    v75[0] = v47;
    v75[1] = 0;
    v77 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A200, &unk_1C0177C97, (LPCGUID)&v56[1], v46, 0xCu, &pData);
    v46 = (const GUID *)v53[3];
  }
  if ( v46 )
    Win32FreePool((__int64)v46);
}
