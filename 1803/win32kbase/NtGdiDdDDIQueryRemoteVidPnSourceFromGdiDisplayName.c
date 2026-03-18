/*
 * XREFs of NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00CA880
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     DrvGetDeviceFromName @ 0x1C0045200 (DrvGetDeviceFromName.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  unsigned int v5; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v7; // rdi
  int v8; // esi
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  PVOID CurrentProcess; // rcx
  __int64 v13; // r8
  BOOL v14; // eax
  wchar_t *DeviceFromName; // rax
  ULONG64 v16; // rcx
  _DWORD *v17; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  WCHAR SourceString[8]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v21; // [rsp+50h] [rbp-68h]
  __int128 v22; // [rsp+60h] [rbp-58h]
  __int128 v23; // [rsp+70h] [rbp-48h]
  int v24; // [rsp+80h] [rbp-38h]

  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)SourceString = *(_OWORD *)v4;
  v21 = *(_OWORD *)(v4 + 16);
  v22 = *(_OWORD *)(v4 + 32);
  v23 = *(_OWORD *)(v4 + 48);
  v24 = *(_DWORD *)(v4 + 64);
  v5 = 0;
  HIWORD(v23) = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, MmUserProbeAddress, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  do
  {
    v8 = 0;
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v9 )
      v7 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10);
    v14 = 0;
    if ( CurrentProcess )
      v14 = CurrentProcess == g_pepDwm;
    if ( v14 || (PVOID)PsGetCurrentProcess(CurrentProcess) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbDITInHitTest == 1 && v7 != gptiRit )
    {
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      v8 = 1;
    }
  }
  while ( v8 == 1 );
  EtwTraceAcquiredSharedUserCrit((__int64)CurrentProcess, v11, v13);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString, 0);
  if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x4000000) != 0 )
  {
    v17 = (_DWORD *)(a1 + 64);
    v16 = MmUserProbeAddress;
    if ( a1 + 64 >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = *((_DWORD *)DeviceFromName + 64);
  }
  else
  {
    v5 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v16);
  return v5;
}
