/*
 * XREFs of EnterSharedCrit @ 0x1C002ACE0
 * Callers:
 *     hdcOpenDCW @ 0x1C0039EC0 (hdcOpenDCW.c)
 *     NtUserQueryDisplayConfig @ 0x1C003ACE0 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C003AFC0 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C003B090 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserGetAsyncKeyState @ 0x1C005B840 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C00894C0 (NtUserGetKeyboardLayoutList.c)
 *     NtUserQueryActivationObject @ 0x1C0114000 (NtUserQueryActivationObject.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0114EF0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetPointerCursorId @ 0x1C0115900 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerFrameTimes @ 0x1C0115AE0 (NtUserGetPointerFrameTimes.c)
 *     NtUserGetPointerInfoList @ 0x1C0115BF0 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerInputTransform @ 0x1C0116040 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerType @ 0x1C0116240 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C0116350 (NtUserGetRawPointerDeviceData.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C011FCB0 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     NtHWCursorUpdatePointer @ 0x1C012DDE0 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

struct tagTHREADINFO *__fastcall EnterSharedCrit(int a1, int a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  int v14; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int8 v16; // [rsp+40h] [rbp-58h]
  GUID ActivityId; // [rsp+44h] [rbp-54h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-40h] BYREF
  int *v19; // [rsp+78h] [rbp-20h]
  __int64 v20; // [rsp+80h] [rbp-18h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v16 = 0;
    v13 = PsGetCurrentThreadWin32Thread();
    v15 = v13;
    if ( v13 && (*(int *)(v13 + 24) > 0 || *(_DWORD *)(v15 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v14 = v16;
          v19 = &v14;
          v20 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v15 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( a1
      || (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && a2 && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v15);
  EtwTraceAcquiredSharedUserCrit();
  return v5;
}
