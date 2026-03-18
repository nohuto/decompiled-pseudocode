/*
 * XREFs of GreGetDCPoint @ 0x1C0061630
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0057430 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrg @ 0x1C0061590 (GreGetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C00615B0 (GreGetDCOrgEx.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserIsUserCritSecIn @ 0x1C00617F0 (UserIsUserCritSecIn.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00C8624 (-vMakeIso@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, __int64 a3)
{
  unsigned int AspectRatioFilter; // ebp
  DC *v7; // rsi
  _BOOL8 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // si
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v20; // rbx
  struct tagTHREADINFO **v21; // rax
  PVOID CurrentProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  DC *v30; // [rsp+30h] [rbp-28h] BYREF
  int v31; // [rsp+38h] [rbp-20h]
  int v32; // [rsp+3Ch] [rbp-1Ch]
  int v33; // [rsp+78h] [rbp+20h] BYREF
  int v34; // [rsp+7Ch] [rbp+24h]

  v31 = 0;
  v32 = 0;
  AspectRatioFilter = 1;
  XDCOBJ::vLock((XDCOBJ *)&v30, a1);
  v7 = v30;
  if ( !v30 )
    return 0;
  v8 = (a2 & 0x40) != 0;
  v9 = (a2 & 0xFFFFFFBF) - 1;
  if ( !v9 )
  {
    v28 = *((_QWORD *)v30 + 10);
    v29 = v28;
    if ( (*(_DWORD *)(v28 + 352) & 0x4000) != 0 && *(_DWORD *)(v28 + 308) == 7 )
    {
      DC::vMakeIso(v30);
      v29 = *((_QWORD *)v7 + 10);
    }
    *(_QWORD *)a3 = *(_QWORD *)(v29 + 344);
    goto LABEL_9;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)v30 + 10) + 328LL);
LABEL_28:
    *(_QWORD *)a3 = v27;
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 10) + 312LL) & 1) != 0 )
      *(_DWORD *)a3 = -(int)v27;
    goto LABEL_9;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)v30 + 10) + 336LL);
    goto LABEL_28;
  }
  v12 = v11 - 4;
  if ( v12 )
  {
    v13 = v12 - 8;
    if ( v13 )
    {
      if ( v13 == 16 )
      {
        *(_QWORD *)a3 = *((_QWORD *)v30 + (*((_DWORD *)v30 + 10) & 1LL) + 178);
        if ( v8 && (*((_DWORD *)v7 + 9) & 0x4000) != 0 )
        {
          if ( (unsigned int)UserIsUserCritSecIn() )
          {
            v18 = 0;
          }
          else
          {
            v18 = 1;
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16, v15, v17);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            v20 = 0LL;
            while ( 1 )
            {
              v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
              if ( v21 )
                v20 = *v21;
              CurrentProcess = (PVOID)PsGetCurrentProcess();
              if ( CurrentProcess )
              {
                if ( CurrentProcess == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v20 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v20 == gptiRit )
              {
                break;
              }
              _InterlockedAdd(&gcDITHitTestWaiters, 1u);
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            EtwTraceAcquiredSharedUserCrit(v24, v23, v25);
          }
          if ( (unsigned int)UserGetRedirectedWindowOrigin(a1, &v33) )
          {
            *(_DWORD *)a3 += v33;
            *(_DWORD *)(a3 + 4) += v34;
          }
          if ( v18 )
            UserSessionSwitchLeaveCrit(v26);
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
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v30 + 10) + 320LL);
    *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v7 + 10) + 316LL);
  }
LABEL_9:
  XDCOBJ::vUnlockFast((XDCOBJ *)&v30);
  return AspectRatioFilter;
}
