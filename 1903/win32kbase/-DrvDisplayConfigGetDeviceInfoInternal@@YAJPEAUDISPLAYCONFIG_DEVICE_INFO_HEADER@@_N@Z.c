/*
 * XREFs of ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00BE9A0
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C004DE80 (NtUserDisplayConfigGetDeviceInfo.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004E650 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002A1F0 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A450 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C002C65C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C002C6AC (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C003AFF4 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C004D6D0 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C004DAA0 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     DrvIsWddmDriverPresent @ 0x1C00502CC (DrvIsWddmDriverPresent.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C009A72C (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C012D0D0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfoInternal(
        struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edi
  unsigned int v9; // eax
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbp
  _QWORD *v16; // rax
  int v17; // eax
  unsigned __int64 v18; // rdx
  wchar_t *v19; // rcx
  __int64 v20; // rax
  int DisplayDeviceInfo; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v26; // rbx
  struct tagTHREADINFO **v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  int v43; // [rsp+30h] [rbp-48h] BYREF
  int v44; // [rsp+34h] [rbp-44h] BYREF
  _BYTE v45[32]; // [rsp+38h] [rbp-40h] BYREF

  v3 = a2;
  v5 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v5 + 24) = *(int *)a1;
  WdLogEvent5_WdEvent(v5);
  v8 = 0;
  if ( !(unsigned int)DrvIsWddmDriverPresent() )
  {
    v9 = *(_DWORD *)a1 + 22;
    if ( v9 > 0x1C )
      return 3221225659LL;
    v6 = 386976263LL;
    if ( !_bittest((const int *)&v6, v9) )
      return 3221225659LL;
  }
  v11 = (_DWORD *)((char *)a1 + 16);
  v12 = *((unsigned int *)a1 + 4);
  if ( (_DWORD)v12 == -1
    || (v13 = ((__int64 (__fastcall *)(char *, __int64, char *, char *))qword_1C0215238)(
                (char *)a1 + 8,
                v12,
                (char *)a1 + 8,
                (char *)a1 + 16),
        v15 = v13,
        v13 >= 0) )
  {
    v17 = *(_DWORD *)a1;
    if ( *(int *)a1 > 100 )
    {
LABEL_53:
      LODWORD(v11) = -1073741811;
    }
    else if ( v17 == 100 )
    {
LABEL_51:
      LOBYTE(v6) = 1;
      v37 = ((__int64 (__fastcall *)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))qword_1C0215108)(v6, a1);
      v11 = (_DWORD *)v37;
      if ( v37 < 0 )
      {
        v41 = WdLogNewEntry5_WdWarning(v39, v38, v40);
        *(_QWORD *)(v41 + 24) = a1;
        *(_QWORD *)(v41 + 32) = v11;
        WdLogEvent5_WdWarning(v41);
      }
    }
    else
    {
      v18 = 0x1C0000000uLL;
      switch ( v17 )
      {
        case -22:
        case -14:
        case -13:
        case -12:
        case -10:
        case -5:
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 9:
        case 11:
          goto LABEL_51;
        case -21:
        case -11:
        case -2:
          DisplayDeviceInfo = DrvpDisplayConfigGetDisplayDeviceInfo((int *)a1);
          goto LABEL_24;
        case -20:
          *((_DWORD *)a1 + 5) = gRemoteSessionUseWddm;
          *((_DWORD *)a1 + 6) = UserRemoteConnectedSessionUsingWddm();
          *((_DWORD *)a1 + 7) = UserRemoteConnectedSessionUsingXddm();
          *((_DWORD *)a1 + 8) = UserIsWddmConnectedSession();
          *((_DWORD *)a1 + 9) = gbRemoteSession == 0;
          *((_DWORD *)a1 + 10) = gProtocolType == 0;
          *((_DWORD *)a1 + 11) = gProtocolType == -1;
          *((_WORD *)a1 + 24) = gProtocolType;
          *(_QWORD *)((char *)a1 + 52) = gRemoteTerminalLuid;
          goto LABEL_21;
        case -15:
          if ( *((_DWORD *)a1 + 1) < 0x20u )
            return 3221225507LL;
          v34 = *((unsigned int *)a1 + 5);
          v35 = (unsigned int)*v11;
          Timeout = (PLARGE_INTEGER)*((_QWORD *)a1 + 3);
          v36 = *((_QWORD *)a1 + 1);
          v44 = 0;
          LODWORD(v11) = ((__int64 (__fastcall *)(__int64, __int64, __int64, int *, PLARGE_INTEGER))qword_1C02152E8)(
                           v36,
                           v35,
                           v34,
                           &v44,
                           Timeout);
          *((_DWORD *)a1 + 5) = v44;
          return (unsigned int)v11;
        case -9:
          if ( *((_DWORD *)a1 + 1) < 0x18u )
            return 3221225507LL;
          v32 = (unsigned int)*v11;
          v33 = *((_QWORD *)a1 + 1);
          v43 = 0;
          LODWORD(v11) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *, _QWORD))qword_1C0215118)(
                           v33,
                           v32,
                           0LL,
                           &v43,
                           0LL);
          if ( (int)v11 >= 0 )
          {
            LOBYTE(v8) = v43 == 2;
            *((_DWORD *)a1 + 5) = v8;
          }
          return (unsigned int)v11;
        case -8:
          if ( *((_DWORD *)a1 + 1) < 0x218u )
            return 3221225507LL;
          DisplayDeviceInfo = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, char *, char *))qword_1C02152C8)(
                                *((_QWORD *)a1 + 1),
                                (unsigned int)*v11,
                                512LL,
                                (char *)a1 + 20,
                                (char *)a1 + 24);
          goto LABEL_24;
        case -7:
          if ( *((_DWORD *)a1 + 1) < 0x3A8u )
            return 3221225507LL;
          LODWORD(v11) = ((__int64 (__fastcall *)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *, _QWORD, _QWORD))qword_1C0215118)(
                           *((_QWORD *)a1 + 1),
                           (unsigned int)*v11,
                           a1,
                           0LL,
                           0LL);
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &Feature_OemPanelDriverSupport__private_propertyCache,
            0x801B31u,
            (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D8B58,
            1,
            3);
          if ( v3 )
          {
            UserSessionSwitchLeaveCrit(v23, v22);
            GetMonitorBrightnessCaps(a1);
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v24);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v45, 0);
            v26 = 0LL;
            while ( 1 )
            {
              v27 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
              if ( v27 )
                v26 = *v27;
              if ( IsCurrentProcessDwm(v29, v28)
                || (PVOID)PsGetCurrentProcess(v31, v30) == gpepCSRSS && v26 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v26 == gptiRit )
              {
                break;
              }
              _InterlockedIncrement(&gcDITHitTestWaiters);
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v45);
            EtwTraceAcquiredSharedUserCrit();
          }
          return (unsigned int)v11;
        case -3:
          if ( *((_DWORD *)a1 + 1) != 32 )
            return 3221225485LL;
          DisplayDeviceInfo = DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
LABEL_24:
          LODWORD(v11) = DisplayDeviceInfo;
          return (unsigned int)v11;
        case 1:
          v19 = gpGraphicsDeviceList;
          if ( *((_DWORD *)a1 + 1) < 0x54u )
            return 3221225507LL;
          if ( !gpGraphicsDeviceList )
            goto LABEL_22;
          v18 = *((unsigned int *)a1 + 2);
          do
          {
            if ( *((_QWORD *)a1 + 1) == *((_QWORD *)v19 + 31) && *((_DWORD *)v19 + 64) == *v11 )
              break;
            v19 = (wchar_t *)*((_QWORD *)v19 + 16);
          }
          while ( v19 );
          if ( !v19 )
          {
LABEL_22:
            v20 = WdLogNewEntry5_WdWarning(v19, v18, v7);
            WdLogEvent5_WdWarning(v20);
            return 3221226021LL;
          }
          *(_OWORD *)((char *)a1 + 20) = *((_OWORD *)v19 + 4);
          *(_OWORD *)((char *)a1 + 36) = *((_OWORD *)v19 + 5);
          *(_OWORD *)((char *)a1 + 52) = *((_OWORD *)v19 + 6);
          *(_OWORD *)((char *)a1 + 68) = *((_OWORD *)v19 + 7);
LABEL_21:
          LODWORD(v11) = 0;
          break;
        default:
          goto LABEL_53;
      }
    }
    return (unsigned int)v11;
  }
  else
  {
    if ( *(_DWORD *)a1 == -21 )
    {
      *((_DWORD *)a1 + 506) = 1144084231;
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v6, v14, v7);
      v16[3] = *((int *)a1 + 3);
      v16[4] = *((unsigned int *)a1 + 2);
      v16[5] = (unsigned int)*v11;
      v16[6] = v15;
      v16[7] = 1144084231LL;
      WdLogEvent5_WdError(v16);
    }
    return (unsigned int)v15;
  }
}
