/*
 * XREFs of UserFindBaseWindowHandle @ 0x1C011FE34
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C0091C4C (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00726E8 (WPP_RECORDER_SF_qq.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     LockProcessByClientId @ 0x1C009AE20 (LockProcessByClientId.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C011F984 (LookForMatchingBaseWindowPHE.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserFindBaseWindowHandle(PDEVICE_OBJECT a1, int *a2)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  void *v5; // rdx
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *v33; // rdi
  __int64 v34; // r8
  int v35; // edx
  __int64 ProcessWin32Process; // rax
  char *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v43; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+44h] [rbp-BCh] BYREF
  int v45; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT v47; // [rsp+58h] [rbp-A8h]
  _BYTE v48[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+70h] [rbp-90h]
  unsigned __int8 v50; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+C0h] [rbp-40h] BYREF
  int *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v58; // [rsp+F0h] [rbp-10h] BYREF
  int *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]

  v47 = a1;
  v3 = (__int64)a1;
  v4 = 0LL;
  v5 = &WPP_e1a61034c95d336a845754ebf9035259_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v5,
        11,
        18,
        (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids);
    }
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v50 = 1;
    v8 = PsGetCurrentThreadWin32Thread(v6);
    v49 = v8;
    if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v49 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v43 = v50;
          v53 = &v43;
          v54 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v49 = 0LL;
  }
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v10 )
      v9 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v9 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v49 && (*(_DWORD *)(v49 + 48) || *(int *)(v49 + 24) > 0) )
  {
    *(_DWORD *)(v49 + 44) = 1;
    *(GUID *)(v49 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v44 = v50;
        v56 = &v44;
        v57 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v55);
        v16 = dword_1C020FB50;
      }
      if ( v16 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v45 = v50;
        v59 = &v45;
        v60 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v58);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v17, v18);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v22);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v29 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v29[2];
        v30 = *v29;
        v29[2] = 0LL;
        if ( !*(_DWORD *)(v30 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
        v33 = (PERESOURCE *)GetDomainLockRef(12LL, v26, v28);
        if ( v33 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34);
        ExReleaseResourceAndLeaveCriticalRegion(*v33);
        HMUnlockObject(*v29);
        tagDomLock::LockExclusive(v33);
        v29 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v3 = (__int64)v47;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&gWndLock, 0LL);
  if ( (int)LockProcessByClientId(*a2, &Object) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_58;
    LOBYTE(v35) = 2;
    WPP_RECORDER_SF_q((_DWORD)gBaseLog, v35, 11, 20, (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids, *a2);
  }
  else
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    v37 = LookForMatchingBaseWindowPHE(v3, ProcessWin32Process, 0LL);
    ObfDereferenceObject(Object);
    if ( v37 )
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        (__int64)v48,
        v38,
        v39);
      v4 = **((_QWORD **)gpKernelHandleTable + 3 * (unsigned int)((v37 - (char *)qword_1C0213758) >> 5));
      goto LABEL_58;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_58;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v38) = 5;
      WPP_RECORDER_SF_qq(
        (_DWORD)gBaseLog,
        v38,
        11,
        19,
        (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids,
        v3,
        *a2);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v38) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v38,
      11,
      21,
      (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids);
  }
LABEL_58:
  ExReleasePushLockSharedEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v41, v40);
  return v4;
}
