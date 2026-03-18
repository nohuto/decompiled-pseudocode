/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00D6068
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A34A0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C00D5C04 (DrvSetMonitorPowerState.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  wchar_t *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PDEVICE_OBJECT *v16; // r14
  wchar_t *v17; // rbx
  unsigned int v18; // edi
  unsigned int i; // edx
  __int64 v20; // rdx
  struct _DEVICE_OBJECT *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // esi
  PDEVICE_OBJECT *v27; // rbx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rbp
  __int64 v33; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v35; // rbx
  struct tagTHREADINFO **v36; // rax
  __int64 v37; // rcx
  PVOID CurrentProcess; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v48; // rdx
  __int64 *v49; // rdi
  __int64 v50; // rax
  wchar_t *j; // rbx
  wchar_t *v52; // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  int InputBuffer; // [rsp+50h] [rbp-38h] BYREF
  __int64 v61; // [rsp+58h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  unsigned int v63; // [rsp+98h] [rbp+10h] BYREF
  tagObjLock *v64; // [rsp+A8h] [rbp+20h] BYREF

  result = &retaddr;
  v5 = a2;
  InputBuffer = a2;
  v61 = a4;
  if ( gProtocolType )
    return result;
  v8 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v8 + 24) = a1;
  *(_QWORD *)(v8 + 32) = v5;
  WdLogEvent5_WdTrace(v8);
  if ( !a3 )
  {
    v10 = gpGraphicsDeviceList;
    v11 = 0;
    while ( v10 )
    {
      if ( (*((_DWORD *)v10 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v10 + 18) == a1) )
        ++v11;
      v10 = (wchar_t *)*((_QWORD *)v10 + 16);
    }
    v16 = (PDEVICE_OBJECT *)PALLOCMEM2(24 * v11, 0x706D7447u, 1);
    if ( v16 )
    {
      v17 = gpGraphicsDeviceList;
      v18 = 0;
      while ( v17 )
      {
        if ( (*((_DWORD *)v17 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v17 + 18) == a1) )
        {
          for ( i = 0; i < v18; ++i )
          {
            if ( v16[3 * i + 2] == *((PDEVICE_OBJECT *)v17 + 18) )
              break;
          }
          if ( v18 == i )
          {
            v20 = 3LL * v18;
            v16[v20] = (PDEVICE_OBJECT)*((_QWORD *)v17 + 17);
            v21 = (struct _DEVICE_OBJECT *)*((_QWORD *)v17 + 29);
            v16[v20 + 1] = v21;
            v16[v20 + 2] = (PDEVICE_OBJECT)*((_QWORD *)v17 + 18);
            ObfReferenceObject(v21);
            ++v18;
          }
        }
        v17 = (wchar_t *)*((_QWORD *)v17 + 16);
      }
      KeResetEvent(gpevtMonitorPowerWaiter);
      gfMonitorPowerInProgress = 1;
      UserSessionSwitchLeaveCrit(v22);
      v26 = 0;
      if ( v18 )
      {
        v27 = v16;
        do
        {
          DrvDxgkLogCodePointPacket(0x5Au, v26, v18, 0);
          v28 = GreDeviceIoControlImpl(*v27, 0x23200Fu, &InputBuffer, 0x10u, 0LL, 0, &v63, 1u, 1);
          v32 = v28;
          if ( v28 < 0 )
          {
            v33 = WdLogNewEntry5_WdError(v30, v29, v31);
            *(_QWORD *)(v33 + 24) = *v27;
            *(_QWORD *)(v33 + 32) = v32;
            WdLogEvent5_WdError(v33);
          }
          ObfDereferenceObject(v27[1]);
          DrvDxgkLogCodePointPacket(0x5Bu, v32, 0, 0);
          ++v26;
          v27 += 3;
        }
        while ( v26 < v18 );
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v24, v23, v25);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v35 = 0LL;
      while ( 1 )
      {
        v36 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v36 )
          v35 = *v36;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v37);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v40) == gpepCSRSS && v35 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v35 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      EtwTraceAcquiredExclusiveUserCrit(v40, v39, v41);
      gptiCurrent = v35;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v64);
      while ( 1 )
      {
        v49 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
        v44 = *v49;
        v49[2] = 0LL;
        if ( !*(_DWORD *)(v44 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42);
        DomainLockRef = GetDomainLockRef(8LL, v42);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v49);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v48);
      }
      tagObjLock::UnLock(v64);
      gfMonitorPowerInProgress = 0;
      KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
      return (_UNKNOWN **)Win32FreePool((__int64)v16);
    }
    v50 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v50 + 24) = v11;
    WdLogEvent5_WdLowResource(v50);
  }
  for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
  {
    if ( (*((_DWORD *)j + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)j + 18) == a1) )
    {
      v52 = gpGraphicsDeviceList;
      if ( gpGraphicsDeviceList )
      {
        v9 = *((_QWORD *)j + 18);
        do
        {
          if ( *((_QWORD *)v52 + 18) == v9 )
            break;
          v52 = (wchar_t *)*((_QWORD *)v52 + 16);
        }
        while ( v52 );
      }
      if ( v52 == j )
      {
        DrvDxgkLogCodePointPacket(0x5Au, 0, 0, 0);
        v53 = GreDeviceIoControlImpl(*((PDEVICE_OBJECT *)j + 17), 0x23200Fu, &InputBuffer, 0x10u, 0LL, 0, &v63, 1u, 1);
        v57 = v53;
        if ( v53 < 0 )
        {
          v58 = WdLogNewEntry5_WdError(v55, v54, v56);
          *(_QWORD *)(v58 + 24) = j;
          *(_QWORD *)(v58 + 32) = v57;
          WdLogEvent5_WdError(v58);
        }
        DrvDxgkLogCodePointPacket(0x5Bu, v57, 0, 0);
      }
    }
  }
  v59 = WdLogNewEntry5_WdTrace(v9);
  return (_UNKNOWN **)WdLogEvent5_WdTrace(v59);
}
