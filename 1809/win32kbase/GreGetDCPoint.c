/*
 * XREFs of GreGetDCPoint @ 0x1C0076160
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0039060 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrg @ 0x1C00760C0 (GreGetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C00760E0 (GreGetDCOrgEx.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0028720 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C0028F0C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     UserIsUserCritSecIn @ 0x1C0048890 (UserIsUserCritSecIn.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00FC860 (-vMakeIso@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, __int64 a3)
{
  unsigned int AspectRatioFilter; // esi
  __int64 v7; // rcx
  DC *v8; // r8
  _BOOL8 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  char *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // bp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v21; // rbx
  struct tagTHREADINFO **v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD v27[2]; // [rsp+30h] [rbp-78h] BYREF
  DC *v28[6]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v29[32]; // [rsp+68h] [rbp-40h] BYREF

  AspectRatioFilter = 1;
  DCOBJ::DCOBJ((DCOBJ *)v28, a1);
  v8 = v28[0];
  if ( !v28[0] )
    goto LABEL_41;
  v9 = (a2 & 0x40) != 0;
  v10 = (a2 & 0xFFFFFFBF) - 1;
  if ( !v10 )
  {
    v25 = *((_QWORD *)v28[0] + 122);
    if ( (*(_DWORD *)(v25 + 340) & 0x4000) != 0 && *(_DWORD *)(v25 + 104) == 7 )
    {
      DC::vMakeIso(v28[0]);
      v8 = v28[0];
    }
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v8 + 122) + 332LL);
    goto LABEL_42;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v24 = *(_QWORD *)(*((_QWORD *)v28[0] + 122) + 316LL);
LABEL_35:
    *(_QWORD *)a3 = v24;
    if ( (*(_DWORD *)(*((_QWORD *)v8 + 122) + 108LL) & 1) != 0 )
      *(_DWORD *)a3 = -(int)v24;
    goto LABEL_42;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    v24 = *(_QWORD *)(*((_QWORD *)v28[0] + 122) + 324LL);
    goto LABEL_35;
  }
  v13 = v12 - 4;
  if ( !v13 )
  {
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v28[0] + 122) + 308LL);
    *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v8 + 122) + 304LL);
    goto LABEL_42;
  }
  v14 = v13 - 8;
  if ( v14 )
  {
    if ( v14 == 16 )
    {
      v15 = (char *)v28[0] + 1024;
      if ( (*((_DWORD *)v28[0] + 10) & 1) == 0 )
        v15 = (char *)v28[0] + 1016;
      *(_QWORD *)a3 = *(_QWORD *)v15;
      if ( v9 && (*((_DWORD *)v8 + 9) & 0x4000) != 0 )
      {
        if ( (unsigned int)UserIsUserCritSecIn() )
        {
          v19 = 0;
        }
        else
        {
          v19 = 1;
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v17, v16, v18);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v29, 0);
          v21 = 0LL;
          while ( 1 )
          {
            v22 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
            if ( v22 )
              v21 = *v22;
            if ( IsCurrentProcessDwm()
              || (PVOID)PsGetCurrentProcess(v23) == gpepCSRSS && v21 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v21 == gptiRit )
            {
              break;
            }
            _InterlockedAdd(&gcDITHitTestWaiters, 1u);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v29);
          EtwTraceAcquiredSharedUserCrit();
        }
        if ( (unsigned int)UserGetRedirectedWindowOrigin(a1, v27) )
        {
          *(_DWORD *)a3 += v27[0];
          *(_DWORD *)(a3 + 4) += v27[1];
        }
        if ( v19 )
          UserSessionSwitchLeaveCrit();
      }
      goto LABEL_42;
    }
LABEL_41:
    AspectRatioFilter = 0;
    goto LABEL_42;
  }
  if ( (int)IsGreGetAspectRatioFilterSupported(v7, v9) >= 0 )
    AspectRatioFilter = GreGetAspectRatioFilter(a1, a3);
LABEL_42:
  DCOBJ::~DCOBJ((DCOBJ *)v28);
  return AspectRatioFilter;
}
