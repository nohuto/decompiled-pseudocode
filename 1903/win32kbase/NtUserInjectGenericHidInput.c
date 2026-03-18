/*
 * XREFs of NtUserInjectGenericHidInput @ 0x1C0119F50
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0051D60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0067E40 (WPP_RECORDER_SF_qqd.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C01487F4 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C014CBD4 (RIMIDE_InjectGenericHidInput.c)
 *     UserGetLastError @ 0x1C01A1E3C (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserInjectGenericHidInput(char *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  __int64 v4; // r13
  __int64 v6; // rcx
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  __int64 v37; // r8
  PVOID v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  PVOID v45; // rdi
  _UNKNOWN **v46; // rdx
  __int64 v47; // rcx
  int v48; // ebx
  int v49; // r9d
  int v50; // ecx
  int v51; // ecx
  int v52; // eax
  NTSTATUS v53; // r14d
  _UNKNOWN **v54; // rdx
  ULONG v55; // eax
  __int64 v56; // rdx
  char LastError; // bl
  char v58; // al
  int v59; // edx
  char v61; // [rsp+30h] [rbp-D0h]
  int v62; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh] BYREF
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v65; // [rsp+4Ch] [rbp-B4h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  LPCWSTR *v67; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v69; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v72; // [rsp+A0h] [rbp-60h]
  __int64 v73; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v74; // [rsp+B0h] [rbp-50h] BYREF
  int *v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v77; // [rsp+E0h] [rbp-20h] BYREF
  int *v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]

  v3 = a3;
  v65 = a3;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v61 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      (_DWORD)gBaseLog,
      a2,
      21,
      10,
      (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
      (char)a1,
      v61,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v67, L"InjectGenericHidInput", 0LL);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v9 = 1LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v69 = 1;
    v10 = PsGetCurrentThreadWin32Thread(v7);
    v68 = v10;
    if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v68 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v62 = v69;
          v72 = &v62;
          v73 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v68 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v11 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v68 && (*(_DWORD *)(v68 + 48) || *(int *)(v68 + 24) > 0) )
  {
    *(_DWORD *)(v68 + 44) = 1;
    *(GUID *)(v68 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v63 = v69;
        v75 = &v63;
        v76 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v74);
        v18 = dword_1C020FB50;
      }
      if ( v18 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v64 = v69;
        v78 = &v64;
        v79 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v77);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v19, v21);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v25);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v32 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v32[2];
        v33 = *v32;
        v32[2] = 0LL;
        if ( !*(_DWORD *)(v33 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
        v36 = (PERESOURCE *)GetDomainLockRef(12LL, v29, v31);
        if ( v36 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37);
        ExReleaseResourceAndLeaveCriticalRegion(*v36);
        HMUnlockObject(*v32);
        tagDomLock::LockExclusive(v36);
        v32 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v3 = v65;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  Object = 0LL;
  v38 = (PVOID)PsGetCurrentProcess(v20, v19);
  if ( (!v38 || v38 != g_pepDwm) && !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v39) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v39, 21, 11, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    }
    v40 = 5LL;
LABEL_52:
    UserSetLastError(v40, v39);
    v9 = 0LL;
LABEL_88:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v58 = UserGetLastError();
      LOBYTE(v59) = 2;
      WPP_RECORDER_SF_Dd(
        (_DWORD)gBaseLog,
        v59,
        21,
        19,
        (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
        v58,
        LastError);
    }
    goto LABEL_90;
  }
  if ( !v3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v39) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v39, 21, 12, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    }
    v40 = 87LL;
    goto LABEL_52;
  }
  v43 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v45 = Object;
  if ( v43 < 0 )
  {
    v46 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v46) = 2;
      WPP_RECORDER_SF_D(
        (_DWORD)gBaseLog,
        (_DWORD)v46,
        21,
        13,
        (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
        v43);
    }
    v47 = 6LL;
    goto LABEL_61;
  }
  if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
  {
    v46 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_67:
      v47 = 87LL;
LABEL_61:
      v48 = 0;
      UserSetLastError(v47, (__int64)v46);
LABEL_62:
      v9 = 0LL;
      goto LABEL_85;
    }
    v49 = 14;
LABEL_66:
    LOBYTE(v46) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)v46, 21, v49, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    goto LABEL_67;
  }
  if ( *((_BYTE *)Object + 136) != 2 )
  {
    v46 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_67;
    v49 = 15;
    goto LABEL_66;
  }
  if ( (*((_DWORD *)Object + 72) & 0x80u) != 0 )
  {
    v50 = *(_DWORD *)(*((_QWORD *)Object + 71) + 312LL);
    if ( (v50 & 8) != 0 && (v50 & 0x2000) == 0 )
    {
      v46 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v49 = 16;
      goto LABEL_66;
    }
  }
  v51 = *(unsigned __int16 *)(*((_QWORD *)Object + 69) + 44LL);
  if ( v51 != v3 )
  {
    v46 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v46) = 2;
      WPP_RECORDER_SF_Dd(
        (_DWORD)gBaseLog,
        (_DWORD)v46,
        21,
        17,
        (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
        v3,
        v51);
    }
    goto LABEL_67;
  }
  v52 = RIMIDE_InjectGenericHidInput(Object, v44, v4, v3);
  v53 = v52;
  if ( v52 < 0 )
  {
    v54 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v54) = 2;
      WPP_RECORDER_SF_D(
        (_DWORD)gBaseLog,
        (_DWORD)v54,
        21,
        18,
        (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
        v52);
    }
    v48 = 0;
    v55 = RtlNtStatusToDosError(v53);
    UserSetLastError(v55, v56);
    goto LABEL_62;
  }
  v48 = 1;
LABEL_85:
  if ( v45 )
    ObfDereferenceObject(v45);
  if ( !v48 )
    goto LABEL_88;
LABEL_90:
  UserSessionSwitchLeaveCrit(v42, v41);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v67);
  return v9;
}
