/*
 * XREFs of hdcOpenDCW @ 0x1C002B5E0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C005E1A0 (NtGdiOpenDCW.c)
 * Callees:
 *     DrvGetHDEV @ 0x1C0014F70 (DrvGetHDEV.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     EnterSharedCrit @ 0x1C0028600 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     bDeleteDCInternal @ 0x1C00427D0 (bDeleteDCInternal.c)
 *     UserGetMonitorDC @ 0x1C00451E8 (UserGetMonitorDC.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     DrvDestroyMDEV @ 0x1C008299C (DrvDestroyMDEV.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C009B450 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     UserGetCurrentDesktopId @ 0x1C00DFFBC (UserGetCurrentDesktopId.c)
 */

HDC __fastcall hdcOpenDCW(
        unsigned __int16 *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        HDC a7,
        ULONG64 a8,
        int a9)
{
  HDC MonitorDC; // rbx
  HDC v13; // rsi
  struct _MDEV *v14; // rdi
  struct PDEV *HDEV; // r14
  struct PDEV *v16; // rax
  __int64 v17; // r8
  void *v19; // r14
  __int64 v20; // rdx
  struct _LDEV *DriverWrap; // rdi
  unsigned __int16 *v22; // rcx
  signed __int32 v23; // ett
  _QWORD *v24; // r8
  _QWORD *v25; // rdx
  __int64 v26; // r8
  void *v27; // [rsp+70h] [rbp-88h] BYREF
  struct PDEV *v28; // [rsp+78h] [rbp-80h] BYREF
  struct PDEV *v29; // [rsp+80h] [rbp-78h] BYREF
  struct _UNICODE_STRING v30; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v31[7]; // [rsp+98h] [rbp-60h] BYREF
  unsigned __int16 *v32; // [rsp+100h] [rbp+8h] BYREF

  v32 = SourceString;
  MonitorDC = 0LL;
  v13 = a7;
  LODWORD(a7) = a7 != 0LL;
  if ( SourceString && !v13 )
  {
    v14 = 0LL;
    HDEV = 0LL;
    RtlInitUnicodeString(&v30, SourceString);
    EnterSharedCrit(0, 1);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
    if ( a9 )
    {
      HDEV = DrvGetHDEV(&v30);
    }
    else if ( a2 )
    {
      v14 = DrvCreateMDEV(&v30, a2, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
      if ( !v14 && (unsigned int)UserGetCurrentDesktopId(&v27) )
        v14 = DrvCreateMDEV(&v30, a2, v27, 3u, 0LL, 0, 0, 0, 0LL);
      if ( v14 )
        HDEV = (struct PDEV *)*((_QWORD *)v14 + 4);
    }
    else
    {
      v16 = DrvGetHDEV(&v30);
      HDEV = v16;
      if ( a4 && !a3 )
        MonitorDC = (HDC)UserGetMonitorDC(v16);
    }
    if ( HDEV )
    {
      if ( MonitorDC || (MonitorDC = GreCreateDisplayDC((__int64)HDEV, 0, 0)) != 0LL )
      {
        DCOBJ::DCOBJ((DCOBJ *)v31, MonitorDC);
        if ( v31[0] )
        {
          v28 = *(struct PDEV **)(v31[0] + 48LL);
          if ( v28 )
            PDEVOBJ::vUnreferencePdev(&v28, 0, v17);
        }
        DCOBJ::~DCOBJ((DCOBJ *)v31);
      }
      else if ( v14 )
      {
        DrvDestroyMDEV(v14);
      }
      else
      {
        v29 = HDEV;
        PDEVOBJ::vUnreferencePdev(&v29, 0, v26);
      }
    }
    if ( v14 )
      Win32FreePool((__int64)v14);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
    UserSessionSwitchLeaveCrit();
  }
  if ( !MonitorDC )
  {
    v19 = a5;
    if ( a5 )
    {
      if ( v13 )
      {
        if ( (int)IsUMPD_ldevLoadDriverSupported() < 0 )
        {
          DriverWrap = 0LL;
        }
        else
        {
          LOBYTE(v20) = 2;
          DriverWrap = (struct _LDEV *)UMPD_ldevLoadDriverWrap(*((_QWORD *)v13 + 3), v20);
        }
        if ( DriverWrap )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&v32,
            DriverWrap,
            a2,
            v32,
            *((unsigned __int16 **)v13 + 4),
            *((unsigned __int16 **)v13 + 1),
            v19,
            a6,
            0LL,
            0LL,
            (int)a7,
            0,
            0);
          v22 = v32;
          if ( v32 )
          {
            _m_prefetchw(v32 + 20);
            do
              v23 = *((_DWORD *)v22 + 10);
            while ( v23 != _InterlockedCompareExchange((volatile signed __int32 *)v22 + 10, v23 | 0x80, v23) );
            MonitorDC = GreCreateDisplayDC((__int64)v32, a3, 1);
            a7 = MonitorDC;
            if ( MonitorDC )
            {
              v24 = (_QWORD *)a8;
              if ( a8 )
              {
                v25 = (_QWORD *)a8;
                if ( a8 >= MmUserProbeAddress )
                  v25 = (_QWORD *)MmUserProbeAddress;
                *v25 = *v25;
                *v24 = *((_QWORD *)v32 + 225);
              }
            }
            PDEVOBJ::vUnreferencePdev((struct PDEV **)&v32, 0, (__int64)v24);
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
    }
  }
  return MonitorDC;
}
