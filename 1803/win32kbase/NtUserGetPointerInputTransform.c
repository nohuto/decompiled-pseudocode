/*
 * XREFs of NtUserGetPointerInputTransform @ 0x1C00B6EE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0116354 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ApiSetGetMiPInputTransform @ 0x1C01407FC (ApiSetGetMiPInputTransform.c)
 */

__int64 __fastcall NtUserGetPointerInputTransform(__int64 a1, __int64 a2, volatile void *a3)
{
  __int64 v4; // r15
  int v5; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  int v7; // ebx
  struct tagTHREADINFO *v8; // rdi
  int v9; // r12d
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  _BOOL8 v15; // rcx
  __int64 v16; // rcx
  __int64 CurrentProcessWow64Process; // rax
  CTouchProcessor *v18; // rcx
  int MiPInputTransform; // eax
  __int64 v20; // rcx

  v4 = (unsigned int)a2;
  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  v7 = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = 0LL;
  do
  {
    v9 = 0;
    v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v10 )
      v8 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11);
    v15 = 0LL;
    if ( CurrentProcess )
      v15 = CurrentProcess == g_pepDwm;
    if ( v15 || (PVOID)PsGetCurrentProcess(v15) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbDITInHitTest == 1 && v8 != gptiRit )
    {
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      v9 = 1;
    }
  }
  while ( v9 == 1 );
  EtwTraceAcquiredSharedUserCrit(v15, v13, v14);
  if ( v5 && !HIWORD(v5) && (unsigned int)(v4 - 1) <= 0x63 && a3 && (v5 != 1 || (_DWORD)v4 == 1) )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16);
    ProbeForWrite(a3, v4 << 6, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( v5 == 1 )
      MiPInputTransform = ApiSetGetMiPInputTransform(v8, a3);
    else
      MiPInputTransform = CTouchProcessor::GetPointerTransform(v18, v8, v5, v4, (struct tagINPUT_TRANSFORM *)a3);
    v7 = MiPInputTransform;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v20);
  return v7;
}
