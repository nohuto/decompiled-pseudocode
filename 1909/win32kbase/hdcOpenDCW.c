/*
 * XREFs of hdcOpenDCW @ 0x1C0039EC0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0039A20 (NtGdiOpenDCW.c)
 * Callees:
 *     bDeleteDCInternal @ 0x1C0010100 (bDeleteDCInternal.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C001A510 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001B230 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCrit @ 0x1C002ACE0 (EnterSharedCrit.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     DrvGetHDEV @ 0x1C003A200 (DrvGetHDEV.c)
 *     UserGetMonitorDC @ 0x1C003A380 (UserGetMonitorDC.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0042E30 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvDestroyMDEV @ 0x1C00448A4 (DrvDestroyMDEV.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007AEF0 (--1DCOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00AA5D0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     UserGetCurrentDesktopId @ 0x1C0103488 (UserGetCurrentDesktopId.c)
 */

struct PDEV *__fastcall hdcOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        struct PDEV *a7,
        ULONG64 a8,
        int a9)
{
  struct PDEV *MonitorDC; // rbx
  struct PDEV *v13; // rsi
  struct _MDEV *v14; // rdi
  struct PDEV *HDEV; // r14
  __int64 v16; // rax
  int v17; // r9d
  bool v18; // zf
  unsigned int v19; // r15d
  __int64 v20; // r8
  __int64 v21; // rdx
  PERESOURCE v22; // rcx
  void *v24; // r14
  __int64 v25; // rdx
  struct _LDEV *DriverWrap; // rdi
  int v27; // r9d
  struct PDEV *v28; // rcx
  signed __int32 v29; // ett
  _QWORD *v30; // r8
  _QWORD *v31; // rdx
  __int64 v32; // r8
  struct PDEV *v33; // [rsp+70h] [rbp-68h] BYREF
  struct PDEV *v34[2]; // [rsp+78h] [rbp-60h] BYREF
  struct _UNICODE_STRING v35; // [rsp+88h] [rbp-50h] BYREF
  _QWORD v36[3]; // [rsp+98h] [rbp-40h] BYREF
  void *v37; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+F0h] [rbp+18h]

  v38 = a3;
  MonitorDC = 0LL;
  v13 = a7;
  LODWORD(a7) = a7 != 0LL;
  if ( !a1 || v13 )
  {
    v19 = v38;
    goto LABEL_19;
  }
  v14 = 0LL;
  HDEV = 0LL;
  *(_QWORD *)&v35.Length = 0LL;
  v35.Buffer = 0LL;
  RtlInitUnicodeString(&v35, a1);
  EnterSharedCrit(0, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  if ( a9 )
  {
    HDEV = (struct PDEV *)DrvGetHDEV(&v35);
  }
  else
  {
    if ( !a2 )
    {
      v16 = DrvGetHDEV(&v35);
      HDEV = (struct PDEV *)v16;
      v18 = a4 == 0;
      v19 = v38;
      if ( !v18 && !v38 )
        MonitorDC = (struct PDEV *)UserGetMonitorDC(v16);
      goto LABEL_8;
    }
    v14 = DrvCreateMDEV(&v35, a2, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
    if ( !v14 && (unsigned int)UserGetCurrentDesktopId(&v37) )
      v14 = DrvCreateMDEV(&v35, a2, v37, 3u, 0LL, 0, 0, 0, 0LL);
    if ( v14 )
      HDEV = (struct PDEV *)*((_QWORD *)v14 + 5);
  }
  v19 = v38;
LABEL_8:
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = (struct PDEV *)GreCreateDisplayDC((__int64)HDEV, 0, 0LL, v17)) != 0LL )
    {
      DCOBJ::DCOBJ((DCOBJ *)v36, (HDC)MonitorDC);
      if ( v36[0] )
      {
        v33 = *(struct PDEV **)(v36[0] + 48LL);
        if ( v33 )
          PDEVOBJ::vUnreferencePdev(&v33, 0, v20);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v36);
    }
    else if ( v14 )
    {
      DrvDestroyMDEV(v14);
    }
    else
    {
      v34[0] = HDEV;
      PDEVOBJ::vUnreferencePdev(v34, 0, v32);
    }
  }
  if ( v14 )
    Win32FreePool((__int64)v14);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v22 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  UserSessionSwitchLeaveCrit((__int64)v22, v21);
LABEL_19:
  if ( !MonitorDC )
  {
    v24 = a5;
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
          LOBYTE(v25) = 2;
          DriverWrap = (struct _LDEV *)UMPD_ldevLoadDriverWrap(*((_QWORD *)v13 + 3), v25);
        }
        if ( DriverWrap )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&a7,
            DriverWrap,
            a2,
            a1,
            *((unsigned __int16 **)v13 + 4),
            *((unsigned __int16 **)v13 + 1),
            v24,
            a6,
            0LL,
            0LL,
            (int)a7,
            0,
            0);
          v28 = a7;
          if ( a7 )
          {
            _m_prefetchw((char *)a7 + 40);
            do
              v29 = *((_DWORD *)v28 + 10);
            while ( v29 != _InterlockedCompareExchange((volatile signed __int32 *)v28 + 10, v29 | 0x80, v29) );
            MonitorDC = (struct PDEV *)GreCreateDisplayDC((__int64)a7, v19, 1LL, v27);
            v34[1] = MonitorDC;
            if ( MonitorDC )
            {
              v30 = (_QWORD *)a8;
              if ( a8 )
              {
                v31 = (_QWORD *)a8;
                if ( a8 >= MmUserProbeAddress )
                  v31 = (_QWORD *)MmUserProbeAddress;
                *v31 = *v31;
                *v30 = *((_QWORD *)a7 + 225);
              }
            }
            PDEVOBJ::vUnreferencePdev(&a7, 0, (__int64)v30);
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
