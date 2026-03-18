/*
 * XREFs of hdcOpenDCW @ 0x1C0044DB0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0043B40 (NtGdiOpenDCW.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002D39C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002D3D0 (--1DCOBJ@@QEAA@XZ.c)
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032330 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     DrvGetHDEV @ 0x1C0045110 (DrvGetHDEV.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00452F0 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     UserGetMonitorDC @ 0x1C0045330 (UserGetMonitorDC.c)
 *     bDeleteDCInternal @ 0x1C0059000 (bDeleteDCInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     DrvDestroyMDEV @ 0x1C006D1EC (DrvDestroyMDEV.c)
 *     UserGetCurrentDesktopId @ 0x1C009FE04 (UserGetCurrentDesktopId.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CD344 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 */

HDC __fastcall hdcOpenDCW(
        unsigned __int16 *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        __int64 a7,
        ULONG64 a8,
        int a9)
{
  struct _devicemodeW *v9; // r15
  unsigned __int16 *v10; // r12
  HDC MonitorDC; // rbx
  __int64 v12; // r14
  struct _MDEV *v13; // rdi
  struct PDEV *HDEV; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // r15
  struct tagTHREADINFO *v19; // r15
  int v20; // r12d
  struct tagTHREADINFO **v21; // rax
  PVOID CurrentProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _BOOL8 v25; // rcx
  __int64 v26; // rax
  int v27; // r9d
  int v28; // r8d
  PERESOURCE v29; // rcx
  __int64 v31; // rdx
  struct _LDEV *DriverWrap; // rdi
  int v33; // r9d
  struct PDEV *v34; // rcx
  signed __int32 v35; // ett
  _QWORD *v36; // r8
  _QWORD *v37; // rdx
  int v38; // r8d
  BOOL v39; // [rsp+70h] [rbp-88h]
  struct PDEV *v40; // [rsp+78h] [rbp-80h] BYREF
  void *v41; // [rsp+80h] [rbp-78h] BYREF
  struct PDEV *v42; // [rsp+88h] [rbp-70h] BYREF
  struct PDEV *v43; // [rsp+90h] [rbp-68h] BYREF
  struct _UNICODE_STRING v44; // [rsp+98h] [rbp-60h] BYREF
  _QWORD v45[10]; // [rsp+A8h] [rbp-50h] BYREF

  v9 = a2;
  v10 = SourceString;
  MonitorDC = 0LL;
  v12 = a7;
  v39 = a7 != 0;
  if ( SourceString && !a7 )
  {
    v13 = 0LL;
    HDEV = 0LL;
    RtlInitUnicodeString(&v44, SourceString);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16, v15, v17);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v19 = 0LL;
    do
    {
      v20 = 0;
      v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v21 )
        v19 = *v21;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      v25 = 0LL;
      if ( CurrentProcess )
        v25 = CurrentProcess == g_pepDwm;
      if ( v25 || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v19 != (struct tagTHREADINFO *)gptiTSRequest )
        break;
      if ( gbDITInHitTest == 1 && v19 != gptiRit )
      {
        _InterlockedAdd(&gcDITHitTestWaiters, 1u);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        v20 = 1;
      }
    }
    while ( v20 == 1 );
    EtwTraceAcquiredSharedUserCrit(v25, v23, v24);
    DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&a7);
    if ( a9 )
    {
      HDEV = (struct PDEV *)DrvGetHDEV(&v44);
      v9 = a2;
    }
    else
    {
      v9 = a2;
      if ( a2 )
      {
        v13 = DrvCreateMDEV(&v44, a2, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
        if ( !v13 && (unsigned int)UserGetCurrentDesktopId(&v41) )
          v13 = DrvCreateMDEV(&v44, a2, v41, 3u, 0LL, 0, 0, 0, 0LL);
        if ( v13 )
          HDEV = (struct PDEV *)*((_QWORD *)v13 + 4);
      }
      else
      {
        v26 = DrvGetHDEV(&v44);
        HDEV = (struct PDEV *)v26;
        if ( !a3 && a4 )
          MonitorDC = (HDC)UserGetMonitorDC(v26);
      }
    }
    if ( HDEV )
    {
      if ( MonitorDC || (MonitorDC = GreCreateDisplayDC((__int64)HDEV, 0, 0, v27)) != 0LL )
      {
        DCOBJ::DCOBJ((DCOBJ *)v45, MonitorDC);
        if ( v45[0] )
        {
          v42 = *(struct PDEV **)(v45[0] + 48LL);
          if ( v42 )
            PDEVOBJ::vUnreferencePdev(&v42, 0, v28);
        }
        DCOBJ::~DCOBJ((DCOBJ *)v45);
      }
      else if ( v13 )
      {
        DrvDestroyMDEV(v13);
      }
      else
      {
        v43 = HDEV;
        PDEVOBJ::vUnreferencePdev(&v43, 0, v38);
      }
    }
    if ( v13 )
      Win32FreePool((__int64)v13);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    v29 = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
    UserSessionSwitchLeaveCrit((__int64)v29);
    v10 = SourceString;
  }
  if ( !MonitorDC && a5 && v12 )
  {
    if ( (int)IsUMPD_ldevLoadDriverSupported() < 0 )
    {
      DriverWrap = 0LL;
    }
    else
    {
      LOBYTE(v31) = 2;
      DriverWrap = (struct _LDEV *)UMPD_ldevLoadDriverWrap(*(_QWORD *)(v12 + 24), v31);
    }
    if ( DriverWrap )
    {
      PDEVOBJ::PDEVOBJ(
        (PDEVOBJ *)&v40,
        DriverWrap,
        v9,
        v10,
        *(unsigned __int16 **)(v12 + 32),
        *(unsigned __int16 **)(v12 + 8),
        a5,
        a6,
        0LL,
        0LL,
        v39,
        0,
        0);
      v34 = v40;
      if ( v40 )
      {
        _m_prefetchw((char *)v40 + 40);
        do
          v35 = *((_DWORD *)v34 + 10);
        while ( v35 != _InterlockedCompareExchange((volatile signed __int32 *)v34 + 10, v35 | 0x80, v35) );
        MonitorDC = GreCreateDisplayDC((__int64)v40, a3, 1, v33);
        if ( MonitorDC )
        {
          v36 = (_QWORD *)a8;
          if ( a8 )
          {
            v37 = (_QWORD *)a8;
            if ( a8 >= MmUserProbeAddress )
              v37 = (_QWORD *)MmUserProbeAddress;
            *v37 = *v37;
            *v36 = *((_QWORD *)v40 + 224);
          }
        }
        PDEVOBJ::vUnreferencePdev(&v40, 0, (int)v36);
      }
      else if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
      {
        UMPD_ldevUnloadImageWrap(DriverWrap);
      }
    }
    else
    {
      EngSetLastError(0x77u);
    }
  }
  return MonitorDC;
}
