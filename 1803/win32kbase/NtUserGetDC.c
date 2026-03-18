/*
 * XREFs of NtUserGetDC @ 0x1C0030850
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C001E910 (GreCreateRectRgnIndirect.c)
 *     ValidateHwndEx @ 0x1C0022ED0 (ValidateHwndEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     GreSelectVisRgn @ 0x1C00315A0 (GreSelectVisRgn.c)
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 */

__int64 __fastcall NtUserGetDC(void *a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // ecx
  unsigned int v16; // r8d
  _QWORD *v17; // rcx
  __int64 DCEx; // rdi
  __int64 v19; // r8
  _QWORD *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 RectRgnIndirect; // rbx

  v4 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    _InterlockedAdd(&gcDITHitTestWaiters, 1u);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredSharedUserCrit(v10, v9, v11);
  if ( a1 )
  {
    v14 = ValidateHwndEx(a1, 1, 0);
    if ( !v14 )
    {
      DCEx = 0LL;
      goto LABEL_20;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) & 0x20000000) != 0 )
    v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 760LL)
                    + 24LL) & 1;
  else
    v15 = 0;
  if ( !v15 )
  {
LABEL_15:
    if ( v14 )
    {
LABEL_16:
      v16 = 0x10000;
      v17 = (_QWORD *)v14;
LABEL_17:
      DCEx = GetDCEx(v17, 0LL, v16);
      goto LABEL_18;
    }
    goto LABEL_28;
  }
  if ( v14 )
    goto LABEL_16;
  v21 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL) + 24LL);
  if ( v21 )
    v21 = (_QWORD *)*v21;
  if ( !ValidateHwndEx(v21, 1, 0) )
  {
    v4 = 0;
    goto LABEL_15;
  }
LABEL_28:
  v22 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448);
  if ( v22 )
  {
    v16 = 3;
    v17 = *(_QWORD **)(*(_QWORD *)(v22 + 8) + 24LL);
    goto LABEL_17;
  }
  DCEx = 0LL;
LABEL_18:
  if ( !v4 )
  {
    RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    GreSelectVisRgn(DCEx, RectRgnIndirect, 1LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  }
LABEL_20:
  v19 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v13, v12, v19);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return DCEx;
}
