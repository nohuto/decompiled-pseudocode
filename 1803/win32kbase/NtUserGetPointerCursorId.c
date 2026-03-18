/*
 * XREFs of NtUserGetPointerCursorId @ 0x1C00B6680
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C011424C (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // rdi
  int v4; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  int v7; // r14d
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _BOOL8 v13; // rcx
  CTouchProcessor *v14; // rcx
  ULONG64 v15; // rcx
  int PointerCursorId; // ebx
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF

  v3 = a2;
  v4 = a1;
  v18 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  do
  {
    v7 = 0;
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v8 )
      v6 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9);
    v13 = 0LL;
    if ( CurrentProcess )
      v13 = CurrentProcess == g_pepDwm;
    if ( v13 || (PVOID)PsGetCurrentProcess(v13) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbDITInHitTest == 1 && v6 != gptiRit )
    {
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      v7 = 1;
    }
  }
  while ( v7 == 1 );
  EtwTraceAcquiredSharedUserCrit(v13, v11, v12);
  if ( v4 && !HIWORD(v4) && v3 )
  {
    PointerCursorId = CTouchProcessor::GetPointerCursorId(v14, v6, v4, &v18);
    if ( PointerCursorId )
    {
      v15 = MmUserProbeAddress;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_DWORD *)MmUserProbeAddress;
      *v3 = v18;
    }
  }
  else
  {
    PointerCursorId = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v15);
  return PointerCursorId;
}
