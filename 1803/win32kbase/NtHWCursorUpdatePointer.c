/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C00CB140
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0031CD0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0031D50 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     UserGetHDevFromMonitor @ 0x1C00595F8 (UserGetHDevFromMonitor.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(ULONG64 a1, __int128 *a2, __int64 a3)
{
  __int128 *v3; // rdi
  ULONG64 v4; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v6; // rsi
  int v7; // r14d
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _BOOL8 v13; // rcx
  ULONG64 v14; // rcx
  unsigned int v15; // edi
  __int64 HDevFromMonitor; // rax
  __int64 v18; // rbx
  int v19; // eax
  unsigned int v20; // edx
  struct _LUID *v21; // rax
  int v22; // ebx
  bool v23; // sf
  const void *v24; // rdi
  int v25; // r13d
  int v26; // r15d
  int v27; // r14d
  size_t v28; // r12
  void *v29; // rsi
  struct _LUID *v30; // rax
  __int64 v31; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+38h] [rbp-B0h]
  __int128 v33; // [rsp+48h] [rbp-A0h]
  void *v34; // [rsp+58h] [rbp-90h]
  __int128 v35; // [rsp+60h] [rbp-88h]
  __int64 v36; // [rsp+70h] [rbp-78h]
  _DWORD v37[6]; // [rsp+78h] [rbp-70h] BYREF
  void *v38; // [rsp+90h] [rbp-58h]
  __int64 v39; // [rsp+98h] [rbp-50h]
  int v40; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v41; // [rsp+A4h] [rbp-44h]
  int v42; // [rsp+ACh] [rbp-3Ch]

  v3 = a2;
  v4 = a1;
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
  if ( !(unsigned int)IsHWCursorUpdatePointerSupported() && !gbOSTestSigningEnabled )
  {
    v15 = -1073741822;
LABEL_20:
    UserSessionSwitchLeaveCrit(v14);
    return v15;
  }
  if ( !v4 )
  {
LABEL_19:
    v15 = -1073741811;
    goto LABEL_20;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v35 = *(_OWORD *)v4;
  v36 = *(_QWORD *)(v4 + 16);
  HDevFromMonitor = UserGetHDevFromMonitor();
  v18 = HDevFromMonitor;
  if ( !HDevFromMonitor )
    goto LABEL_24;
  v31 = HDevFromMonitor;
  v19 = *(_DWORD *)(HDevFromMonitor + 40);
  if ( (v19 & 1) == 0
    || (v19 & 0x400) != 0
    || (v19 & 0x20000) != 0
    || !(unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v31) )
  {
    v22 = -1073741811;
  }
  else
  {
    v41 = *((_QWORD *)&v35 + 1);
    v40 = *(_DWORD *)(*(_QWORD *)(v18 + 2568) + 256LL);
    v42 = v36 & 1;
    if ( v3 )
    {
      v14 = MmUserProbeAddress;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (__int128 *)MmUserProbeAddress;
      v32 = *v3;
      v33 = v3[1];
      if ( (_DWORD)v32 != 1 || (v24 = (const void *)*((_QWORD *)&v33 + 1)) == 0LL )
      {
LABEL_24:
        UserSessionSwitchLeaveCrit(v14);
        return 3221225485LL;
      }
      v25 = DWORD1(v32);
      if ( DWORD1(v32) > 0x100 )
        goto LABEL_19;
      v26 = DWORD2(v32);
      if ( DWORD2(v32) > 0x100 )
        goto LABEL_19;
      v27 = HIDWORD(v32);
      if ( HIDWORD(v32) > v20 )
        goto LABEL_19;
      v28 = (unsigned int)(DWORD2(v32) * HIDWORD(v32));
      v29 = PALLOCMEM2(v28, 0x706D7447u, 1);
      v34 = v29;
      if ( !v29 )
      {
        v15 = -1073741823;
        goto LABEL_20;
      }
      if ( (unsigned __int64)v24 >= MmUserProbeAddress )
        v24 = (const void *)MmUserProbeAddress;
      memmove(v29, v24, v28);
      v37[0] = 2;
      v37[1] = v25;
      v37[2] = v26;
      v37[3] = v27;
      v37[4] = *(_DWORD *)(*(_QWORD *)(v18 + 2568) + 256LL);
      v38 = v29;
      v39 = v33;
      v30 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v31);
      v22 = ((__int64 (__fastcall *)(struct _LUID *, int *, _DWORD *, _QWORD))qword_1C01A1E70)(v30, &v40, v37, 0LL);
      Win32FreePool((__int64)v29);
      v23 = v22 < 0;
    }
    else
    {
      v21 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v31);
      v22 = ((__int64 (__fastcall *)(struct _LUID *, int *, _QWORD))qword_1C01A1E68)(v21, &v40, 0LL);
      v23 = v22 < 0;
    }
    if ( v23 )
      v22 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v14);
  return (unsigned int)v22;
}
