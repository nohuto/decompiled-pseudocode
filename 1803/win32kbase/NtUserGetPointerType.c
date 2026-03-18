/*
 * XREFs of NtUserGetPointerType @ 0x1C00B70B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0116B40 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall NtUserGetPointerType(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // rdi
  int v4; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  int v6; // ebx
  __int64 v7; // r14
  int v8; // r15d
  __int64 *v9; // rax
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _BOOL8 v14; // rdx
  ULONG64 v15; // rcx
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF

  v3 = a2;
  v4 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  v6 = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  do
  {
    v8 = 0;
    v9 = (__int64 *)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v9 )
      v7 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10);
    v14 = 0LL;
    if ( CurrentProcess )
      v14 = CurrentProcess == g_pepDwm;
    if ( v14 || (PVOID)PsGetCurrentProcess(v12) == gpepCSRSS && v7 != gptiTSRequest )
      break;
    if ( gbDITInHitTest == 1 && (struct tagTHREADINFO *)v7 != gptiRit )
    {
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      v8 = 1;
    }
  }
  while ( v8 == 1 );
  EtwTraceAcquiredSharedUserCrit(v12, v14, v13);
  if ( !v4 || HIWORD(v4) || !v3 )
    goto LABEL_24;
  if ( v4 != 1 )
  {
    if ( CTouchProcessor::GetThreadPointerData(
           gpTouchProcessor,
           (struct tagTHREADINPUTPOINTERLIST *)(v7 + 1072),
           v4,
           &v17,
           0LL,
           0LL) )
    {
      goto LABEL_21;
    }
LABEL_24:
    UserSetLastError(87);
    goto LABEL_25;
  }
  v17 = 4;
LABEL_21:
  v15 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_DWORD *)MmUserProbeAddress;
  *v3 = v17;
  v6 = 1;
LABEL_25:
  UserSessionSwitchLeaveCrit(v15);
  return v6;
}
