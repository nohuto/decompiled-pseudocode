/*
 * XREFs of NtUserGetRawPointerDeviceData @ 0x1C00B7280
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0115DCC (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 */

__int64 __fastcall NtUserGetRawPointerDeviceData(__int64 a1, __int64 a2, __int64 a3, char *a4, volatile void *Address)
{
  int v6; // r13d
  int v7; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  int PointerRawDataInternal; // edi
  struct tagTHREADINFO *v10; // r15
  int v11; // ebx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _BOOL8 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // r12
  int v21; // ecx
  __int64 v22; // rcx
  void *v23; // rsi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v25; // rcx
  CTouchProcessor *v26; // rcx
  __int64 v27; // rcx
  unsigned __int16 v29; // [rsp+C0h] [rbp+8h]
  unsigned int v30; // [rsp+C8h] [rbp+10h]
  unsigned int v31; // [rsp+D0h] [rbp+18h]

  v31 = a3;
  v30 = a2;
  v29 = a1;
  v6 = a2;
  v7 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  PointerRawDataInternal = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = 0LL;
  do
  {
    v11 = 0;
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v12 )
      v10 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v13);
    v17 = 0LL;
    if ( CurrentProcess )
      v17 = CurrentProcess == g_pepDwm;
    if ( v17 || (PVOID)PsGetCurrentProcess(v17) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbDITInHitTest == 1 && v10 != gptiRit )
    {
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      v11 = 1;
    }
  }
  while ( v11 == 1 );
  EtwTraceAcquiredSharedUserCrit(v17, v15, v16);
  if ( !v7
    || HIWORD(v7)
    || !v6
    || !v31
    || !a4
    || !Address
    || (v18 = v31 * (unsigned __int64)v30, v18 > 0xFFFFFFFF)
    || (v19 = (unsigned int)v18, v20 = 28LL * v31, v20 > 0xFFFFFFFF) )
  {
    v21 = 87;
    goto LABEL_34;
  }
  if ( (unsigned int)v20 >= 0x2710000 || (v23 = (void *)Win32AllocPoolWithQuota((unsigned int)v20, 0x78707355u)) == 0LL )
  {
    v21 = 8;
LABEL_34:
    UserSetLastError(v21);
    goto LABEL_35;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v22);
  ProbeForWrite(Address, 4 * v19, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( v20 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v25) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a4[v20] > MmUserProbeAddress || &a4[v20] < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v23, a4, (unsigned int)v20);
  PointerRawDataInternal = CTouchProcessor::GetPointerRawDataInternal(
                             v26,
                             v10,
                             v29,
                             v30,
                             v31,
                             (const struct tagPOINTER_DEVICE_PROPERTY *)v23,
                             v19,
                             (int *)Address);
  Win32FreePool((__int64)v23);
LABEL_35:
  UserSessionSwitchLeaveCrit(v27);
  return PointerRawDataInternal;
}
