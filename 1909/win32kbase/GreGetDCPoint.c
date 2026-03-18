/*
 * XREFs of GreGetDCPoint @ 0x1C003FB00
 * Callers:
 *     GreGetDCOrg @ 0x1C003F7B0 (GreGetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C003FA80 (GreGetDCOrgEx.c)
 *     xxxEnumDisplayMonitors @ 0x1C004C7E0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     UserIsUserCritSecIn @ 0x1C003FDC0 (UserIsUserCritSecIn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C0126110 (-vMakeIso@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, __int64 a3)
{
  unsigned int AspectRatioFilter; // r14d
  DC *v7; // rsi
  _BOOL8 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  __int64 v14; // rcx
  char v15; // si
  __int64 v16; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v18; // rdi
  struct tagTHREADINFO **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  PVOID CurrentProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // [rsp+30h] [rbp-49h] BYREF
  __int64 v33; // [rsp+38h] [rbp-41h] BYREF
  DC *v34; // [rsp+40h] [rbp-39h] BYREF
  int v35; // [rsp+48h] [rbp-31h]
  int v36; // [rsp+4Ch] [rbp-2Dh]
  __int64 v37; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int8 v38; // [rsp+58h] [rbp-21h]
  GUID ActivityId; // [rsp+5Ch] [rbp-1Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  int *v41; // [rsp+90h] [rbp+17h]
  int v42; // [rsp+98h] [rbp+1Fh]
  int v43; // [rsp+9Ch] [rbp+23h]

  v35 = 0;
  v36 = 0;
  AspectRatioFilter = 1;
  XDCOBJ::vLock((XDCOBJ *)&v34, a1);
  v7 = v34;
  if ( !v34 )
    return 0;
  v8 = (a2 & 0x40) != 0;
  v9 = (a2 & 0xFFFFFFBF) - 1;
  if ( !v9 )
  {
    v30 = *((_QWORD *)v34 + 122);
    v31 = v30;
    if ( (*(_DWORD *)(v30 + 340) & 0x4000) != 0 && *(_DWORD *)(v30 + 104) == 7 )
    {
      DC::vMakeIso(v34);
      v31 = *((_QWORD *)v7 + 122);
    }
    *(_QWORD *)a3 = *(_QWORD *)(v31 + 332);
    goto LABEL_27;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v28 = *(_QWORD *)(*((_QWORD *)v34 + 122) + 316LL);
LABEL_30:
    *(_QWORD *)a3 = v28;
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 122) + 108LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
    goto LABEL_27;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    v28 = *(_QWORD *)(*((_QWORD *)v34 + 122) + 324LL);
    goto LABEL_30;
  }
  v12 = v11 - 4;
  if ( v12 )
  {
    v13 = v12 - 8;
    if ( v13 )
    {
      if ( v13 == 16 )
      {
        *(_QWORD *)a3 = *((_QWORD *)v34 + (*((_DWORD *)v34 + 10) & 1LL) + 127);
        if ( v8 && (*((_DWORD *)v7 + 9) & 0x4000) != 0 )
        {
          v33 = 0LL;
          if ( (unsigned int)UserIsUserCritSecIn() )
          {
            v15 = 0;
          }
          else
          {
            v15 = 1;
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            *(_QWORD *)&ActivityId.Data1 = 0LL;
            *(_QWORD *)ActivityId.Data4 = 0LL;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v38 = 0;
              v29 = PsGetCurrentThreadWin32Thread(v16);
              v37 = v29;
              if ( v29 && (*(int *)(v29 + 24) > 0 || *(_DWORD *)(v37 + 48)) )
              {
                EtwActivityIdControl(3u, &ActivityId);
                if ( dword_1C020CB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v43 = 0;
                    v32 = v38;
                    v41 = &v32;
                    v42 = 4;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
                  }
                }
              }
            }
            else
            {
              v37 = 0LL;
            }
            v18 = 0LL;
            while ( 1 )
            {
              v19 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
              if ( v19 )
                v18 = *v19;
              CurrentProcess = (PVOID)PsGetCurrentProcess(v21, v20);
              if ( CurrentProcess )
              {
                if ( CurrentProcess == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v24, v23) == gpepCSRSS && v18 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v18 == gptiRit )
              {
                break;
              }
              _InterlockedAdd(&gcDITHitTestWaiters, 1u);
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v37);
            EtwTraceAcquiredSharedUserCrit();
          }
          if ( (unsigned int)UserGetRedirectedWindowOrigin(a1, &v33) )
          {
            *(_DWORD *)a3 += v33;
            *(_DWORD *)(a3 + 4) += HIDWORD(v33);
          }
          if ( v15 )
            UserSessionSwitchLeaveCrit(v26, v25);
        }
      }
      else
      {
        AspectRatioFilter = 0;
      }
    }
    else if ( (int)IsGreGetAspectRatioFilterSupported(v8) >= 0 )
    {
      AspectRatioFilter = GreGetAspectRatioFilter(a1, a3);
    }
  }
  else
  {
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v34 + 122) + 308LL);
    *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 304LL);
  }
LABEL_27:
  XDCOBJ::vUnlockFast((XDCOBJ *)&v34);
  return AspectRatioFilter;
}
