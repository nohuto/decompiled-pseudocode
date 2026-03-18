/*
 * XREFs of hdcOpenDCW @ 0x1C003BC90
 * Callers:
 *     NtGdiOpenDCW @ 0x1C003B7F0 (NtGdiOpenDCW.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCrit @ 0x1C002A0D0 (EnterSharedCrit.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003BFD0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C27C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     DrvGetHDEV @ 0x1C003C2B0 (DrvGetHDEV.c)
 *     UserGetMonitorDC @ 0x1C003C430 (UserGetMonitorDC.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0046570 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvDestroyMDEV @ 0x1C0048854 (DrvDestroyMDEV.c)
 *     bDeleteDCInternal @ 0x1C0064FC0 (bDeleteDCInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00AC8D0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00BDBB4 (--1DCOBJ@@QEAA@XZ.c)
 *     UserGetCurrentDesktopId @ 0x1C0105DF8 (UserGetCurrentDesktopId.c)
 */

HDC __fastcall hdcOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        __int64 a7,
        ULONG64 a8,
        int a9)
{
  HDC MonitorDC; // rbx
  __int64 v13; // rsi
  struct _MDEV *v14; // rdi
  __int64 HDEV; // r14
  __int64 v16; // rax
  int v17; // r9d
  bool v18; // zf
  unsigned int v19; // r15d
  __int64 v20; // rdx
  PERESOURCE v21; // rcx
  void *v23; // r14
  __int64 v24; // rdx
  struct _LDEV *DriverWrap; // rdi
  int v26; // r9d
  __int64 v27; // rcx
  signed __int32 v28; // ett
  _QWORD *v29; // r8
  _QWORD *v30; // rdx
  __int64 v31; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v32[2]; // [rsp+78h] [rbp-60h] BYREF
  struct _UNICODE_STRING v33; // [rsp+88h] [rbp-50h] BYREF
  _QWORD v34[3]; // [rsp+98h] [rbp-40h] BYREF
  void *v35; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v36; // [rsp+F0h] [rbp+18h]

  v36 = a3;
  MonitorDC = 0LL;
  v13 = a7;
  LODWORD(a7) = a7 != 0;
  if ( !a1 || v13 )
  {
    v19 = v36;
    goto LABEL_19;
  }
  v14 = 0LL;
  HDEV = 0LL;
  *(_QWORD *)&v33.Length = 0LL;
  v33.Buffer = 0LL;
  RtlInitUnicodeString(&v33, a1);
  EnterSharedCrit(0, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  if ( a9 )
  {
    HDEV = DrvGetHDEV(&v33);
  }
  else
  {
    if ( !a2 )
    {
      v16 = DrvGetHDEV(&v33);
      HDEV = v16;
      v18 = a4 == 0;
      v19 = v36;
      if ( !v18 && !v36 )
        MonitorDC = (HDC)UserGetMonitorDC(v16);
      goto LABEL_8;
    }
    v14 = DrvCreateMDEV(&v33, a2, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
    if ( !v14 && (unsigned int)UserGetCurrentDesktopId(&v35) )
      v14 = DrvCreateMDEV(&v33, a2, v35, 3u, 0LL, 0, 0, 0, 0LL);
    if ( v14 )
      HDEV = *((_QWORD *)v14 + 5);
  }
  v19 = v36;
LABEL_8:
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = (HDC)GreCreateDisplayDC(HDEV, 0, 0LL, v17)) != 0LL )
    {
      DCOBJ::DCOBJ((DCOBJ *)v34, MonitorDC);
      if ( v34[0] )
      {
        v31 = *(_QWORD *)(v34[0] + 48LL);
        if ( v31 )
          PDEVOBJ::vUnreferencePdev(&v31, 0LL);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v34);
    }
    else if ( v14 )
    {
      DrvDestroyMDEV(v14);
    }
    else
    {
      v32[0] = HDEV;
      PDEVOBJ::vUnreferencePdev(v32, 0LL);
    }
  }
  if ( v14 )
    Win32FreePool((__int64)v14);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v21 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  UserSessionSwitchLeaveCrit((__int64)v21, v20);
LABEL_19:
  if ( !MonitorDC )
  {
    v23 = a5;
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
          LOBYTE(v24) = 2;
          DriverWrap = (struct _LDEV *)UMPD_ldevLoadDriverWrap(*(_QWORD *)(v13 + 24), v24);
        }
        if ( DriverWrap )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&a7,
            DriverWrap,
            a2,
            a1,
            *(unsigned __int16 **)(v13 + 32),
            *(unsigned __int16 **)(v13 + 8),
            v23,
            a6,
            0LL,
            0LL,
            a7,
            0,
            0);
          v27 = a7;
          if ( a7 )
          {
            _m_prefetchw((const void *)(a7 + 40));
            do
              v28 = *(_DWORD *)(v27 + 40);
            while ( v28 != _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 40), v28 | 0x80, v28) );
            MonitorDC = (HDC)GreCreateDisplayDC(a7, v19, 1LL, v26);
            v32[1] = MonitorDC;
            if ( MonitorDC )
            {
              v29 = (_QWORD *)a8;
              if ( a8 )
              {
                v30 = (_QWORD *)a8;
                if ( a8 >= MmUserProbeAddress )
                  v30 = (_QWORD *)MmUserProbeAddress;
                *v30 = *v30;
                *v29 = *(_QWORD *)(a7 + 1800);
              }
            }
            PDEVOBJ::vUnreferencePdev(&a7, 0LL);
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
