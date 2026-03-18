/*
 * XREFs of ?ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C018B670
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     RimInputTypeToDeviceInputType @ 0x1C0054E9C (RimInputTypeToDeviceInputType.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C018586C (-ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C018CC90 (-ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C018CF3C (-ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::ivOnChildNotification(CBaseInput *this, _DWORD *a2)
{
  _DWORD *v2; // rsi
  unsigned int v3; // r14d
  bool v5; // bl
  struct RIMDEV *i; // rbx
  int v7; // eax
  unsigned __int8 v8; // r8
  int v9; // edx
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
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v24; // [rsp+30h] [rbp-29h] BYREF
  int v25; // [rsp+34h] [rbp-25h] BYREF
  __int64 v26; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int8 v27; // [rsp+40h] [rbp-19h]
  GUID ActivityId; // [rsp+44h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-1h] BYREF
  int *v30; // [rsp+78h] [rbp+1Fh]
  __int64 v31; // [rsp+80h] [rbp+27h]

  v2 = a2;
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      20,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  v5 = 0;
  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  v24 = v2[1];
  if ( *v2 == 1 )
  {
    ++*((_DWORD *)this + 298);
    for ( i = CBaseInput::_spDevList; i; i = (struct RIMDEV *)*((_QWORD *)i + 7) )
    {
      if ( *((_BYTE *)i + 48) <= 2u )
      {
        v7 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
        if ( v8 == v7 )
        {
          CBaseInput::ivRootPnpCreated(
            this,
            *((struct RawInputManagerDeviceObject **)i + 4),
            (const struct CONTAINER_ID *)&v24);
          v3 = CBaseInput::ivRootPnp(this, i, 2u, (const struct CONTAINER_ID *)&v24);
        }
      }
    }
    v5 = (*((_DWORD *)this + 36) & 0x10) != 0;
  }
  else if ( *v2 == 2 )
  {
    --*((_DWORD *)this + 298);
  }
  qword_1C02152E8 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v27 = 0;
      v13 = PsGetCurrentThreadWin32Thread(v11);
      v26 = v13;
      if ( v13 && (*(int *)(v13 + 24) > 0 || *(_DWORD *)(v26 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v25 = v27;
            v30 = &v25;
            v31 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v26 = 0LL;
    }
    v14 = 0LL;
    while ( 1 )
    {
      v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
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
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v26);
    EtwTraceAcquiredSharedUserCrit();
    ivSendSettingsUpdateToContainer((const struct CONTAINER_ID *)&v24);
    UserSessionSwitchLeaveCrit(v22, v21);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      12,
      21,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return v3;
}
