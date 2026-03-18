/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00A2C80
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C00A2C54 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2074 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0041E08 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A2BA0 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  wchar_t *v9; // rcx
  unsigned int v10; // ebx
  PDEVICE_OBJECT *v11; // r14
  wchar_t *v12; // rbx
  unsigned int v13; // edi
  unsigned int i; // edx
  wchar_t *j; // rbx
  wchar_t *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // esi
  PDEVICE_OBJECT *v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rdi
  __int64 v33; // rdx
  struct _DEVICE_OBJECT *v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  tagObjLock *v49; // [rsp+50h] [rbp-68h] BYREF
  int InputBuffer; // [rsp+58h] [rbp-60h] BYREF
  __int64 v51; // [rsp+60h] [rbp-58h]
  _BYTE v52[32]; // [rsp+68h] [rbp-50h] BYREF

  v4 = a2;
  InputBuffer = a2;
  v51 = a4;
  if ( gProtocolType )
    return;
  v7 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = v4;
  WdLogEvent5_WdTrace(v7);
  if ( !a3 )
  {
    v9 = gpGraphicsDeviceList;
    v10 = 0;
    while ( v9 )
    {
      if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v9 + 18) == a1) )
        ++v10;
      v9 = (wchar_t *)*((_QWORD *)v9 + 16);
    }
    v11 = (PDEVICE_OBJECT *)PALLOCMEM2(24 * v10, 1886221383LL, 1);
    if ( v11 )
    {
      v12 = gpGraphicsDeviceList;
      v13 = 0;
      while ( v12 )
      {
        if ( (*((_DWORD *)v12 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v12 + 18) == a1) )
        {
          for ( i = 0; i < v13; ++i )
          {
            if ( v11[3 * i + 2] == *((PDEVICE_OBJECT *)v12 + 18) )
              break;
          }
          if ( v13 == i )
          {
            v33 = 3LL * v13;
            v11[v33] = (PDEVICE_OBJECT)*((_QWORD *)v12 + 17);
            v34 = (struct _DEVICE_OBJECT *)*((_QWORD *)v12 + 29);
            v11[v33 + 1] = v34;
            v11[v33 + 2] = (PDEVICE_OBJECT)*((_QWORD *)v12 + 18);
            ObfReferenceObject(v34);
            ++v13;
          }
        }
        v12 = (wchar_t *)*((_QWORD *)v12 + 16);
      }
      KeResetEvent(gpevtMonitorPowerWaiter);
      gfMonitorPowerInProgress = 1;
      UserSessionSwitchLeaveCrit();
      v20 = 0;
      if ( v13 )
      {
        v21 = v11;
        do
        {
          DrvDxgkLogCodePointPacket(0x5Au, v20, v13, 0);
          v22 = GreDeviceIoControlImpl(*v21, 0x23200Fu, &InputBuffer, 0x10u, 0LL, 0, (unsigned int *)&v49, 1u, 1);
          v26 = v22;
          if ( v22 < 0 )
          {
            v41 = WdLogNewEntry5_WdError(v24, v23, v25);
            *(_QWORD *)(v41 + 24) = *v21;
            *(_QWORD *)(v41 + 32) = v26;
            WdLogEvent5_WdError(v41);
          }
          ObfDereferenceObject(v21[1]);
          DrvDxgkLogCodePointPacket(0x5Bu, v26, 0, 0);
          ++v20;
          v21 += 3;
        }
        while ( v20 < v13 );
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v18, v17, v19);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v52, 1);
      v28 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v52);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v28;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v49);
      while ( 1 )
      {
        v32 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
        v42 = *v32;
        v32[2] = 0LL;
        if ( !*(_DWORD *)(v42 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
        DomainLockRef = GetDomainLockRef(8);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v32);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
      }
      tagObjLock::UnLock(v49);
      gfMonitorPowerInProgress = 0;
      KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
      Win32FreePool((__int64)v11);
      return;
    }
    v47 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v47 + 24) = v10;
    WdLogEvent5_WdLowResource(v47);
  }
  for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
  {
    if ( (*((_DWORD *)j + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)j + 18) == a1) )
    {
      v16 = gpGraphicsDeviceList;
      if ( gpGraphicsDeviceList )
      {
        v8 = *((_QWORD *)j + 18);
        do
        {
          if ( *((_QWORD *)v16 + 18) == v8 )
            break;
          v16 = (wchar_t *)*((_QWORD *)v16 + 16);
        }
        while ( v16 );
      }
      if ( v16 == j )
      {
        DrvDxgkLogCodePointPacket(0x5Au, 0, 0, 0);
        v35 = GreDeviceIoControlImpl(
                *((PDEVICE_OBJECT *)j + 17),
                0x23200Fu,
                &InputBuffer,
                0x10u,
                0LL,
                0,
                (unsigned int *)&v49,
                1u,
                1);
        v39 = v35;
        if ( v35 < 0 )
        {
          v48 = WdLogNewEntry5_WdError(v37, v36, v38);
          *(_QWORD *)(v48 + 24) = j;
          *(_QWORD *)(v48 + 32) = v39;
          WdLogEvent5_WdError(v48);
        }
        DrvDxgkLogCodePointPacket(0x5Bu, v39, 0, 0);
      }
    }
  }
  v40 = WdLogNewEntry5_WdTrace(v8);
  WdLogEvent5_WdTrace(v40);
}
