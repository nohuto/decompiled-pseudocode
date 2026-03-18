/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00AB1F4
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C00B7990 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105800 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002C014 (EnterCritAvoidingDitHitTestHazard.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C002C14C (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C003CF30 (UserIsWddmConnectedSession.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1C00776F0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00B6660 (DrvDxgkLogCodePointPacket.c)
 *     GreGdoDeviceIoControlEx @ 0x1C00B75B0 (GreGdoDeviceIoControlEx.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  wchar_t *v10; // rcx
  unsigned int v11; // ebx
  _QWORD *v12; // r14
  wchar_t *v13; // rbx
  __int64 v14; // rdi
  __int64 i; // rdx
  __int64 v16; // rdx
  void *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // esi
  _QWORD *v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbp
  __int64 v28; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v36; // r8
  PERESOURCE *j; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  PERESOURCE *v43; // rdi
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 *v46; // rsi
  __int64 v47; // rax
  wchar_t *k; // rbx
  wchar_t *v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // [rsp+40h] [rbp-68h] BYREF
  int v58[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v59; // [rsp+50h] [rbp-58h]
  _BYTE v60[32]; // [rsp+58h] [rbp-50h] BYREF

  v4 = a2;
  v58[0] = a2;
  v58[1] = 0;
  v59 = a4;
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return;
  v8 = WdLogNewEntry5_WdTrace(v7);
  *(_QWORD *)(v8 + 24) = a1;
  *(_QWORD *)(v8 + 32) = v4;
  WdLogEvent5_WdTrace(v8);
  if ( !a3 )
  {
    v10 = gpGraphicsDeviceList;
    v11 = 0;
    while ( v10 )
    {
      if ( (*((_DWORD *)v10 + 40) & 0x800000) != 0 && *((_QWORD *)v10 + 29) && (!a1 || *((_QWORD *)v10 + 18) == a1) )
        ++v11;
      v10 = (wchar_t *)*((_QWORD *)v10 + 16);
    }
    v12 = PALLOCMEM2(24 * v11, 0x706D7447u, 1);
    if ( v12 )
    {
      v13 = gpGraphicsDeviceList;
      v14 = 0LL;
      while ( v13 )
      {
        if ( (*((_DWORD *)v13 + 40) & 0x800000) != 0 && *((_QWORD *)v13 + 29) && (!a1 || *((_QWORD *)v13 + 18) == a1) )
        {
          for ( i = 0LL; (unsigned int)i < (unsigned int)v14; i = (unsigned int)(i + 1) )
          {
            if ( v12[3 * i + 2] == *((_QWORD *)v13 + 18) )
              break;
          }
          if ( (_DWORD)v14 == (_DWORD)i )
          {
            v16 = 3 * v14;
            v12[v16] = *((_QWORD *)v13 + 17);
            v17 = (void *)*((_QWORD *)v13 + 29);
            v12[v16 + 1] = v17;
            v12[v16 + 2] = *((_QWORD *)v13 + 18);
            ObfReferenceObject(v17);
            v14 = (unsigned int)(v14 + 1);
          }
        }
        v13 = (wchar_t *)*((_QWORD *)v13 + 16);
      }
      KeResetEvent(gpevtMonitorPowerWaiter);
      gfMonitorPowerInProgress = 1;
      UserSessionSwitchLeaveCrit(v19, v18);
      v21 = 0;
      if ( (_DWORD)v14 )
      {
        v22 = v12;
        do
        {
          DrvDxgkLogCodePointPacket(90LL, v21, (unsigned int)v14, 0LL);
          v23 = GreGdoDeviceIoControlEx(*v22, 2301967, (int)v58, 16, 0LL, 0, &v57, 1u);
          v27 = v23;
          if ( v23 < 0 )
          {
            v28 = WdLogNewEntry5_WdError(v25, v24, v26);
            *(_QWORD *)(v28 + 24) = *v22;
            *(_QWORD *)(v28 + 32) = v27;
            WdLogEvent5_WdError(v28);
          }
          ObfDereferenceObject((PVOID)v22[1]);
          DrvDxgkLogCodePointPacket(91LL, (unsigned int)v27, 0LL, 0LL);
          ++v21;
          v22 += 3;
        }
        while ( v21 < (unsigned int)v14 );
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v20);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v60, 1);
      v30 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v60);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v30;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v31, v32);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36);
        for ( j = DomainLockRef; ; j = v43 )
        {
          tagDomLock::LockExclusive(j);
          v46 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v38 = *v46;
          v46[2] = 0LL;
          if ( !*(_DWORD *)(v38 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v39, v40);
          v43 = (PERESOURCE *)GetDomainLockRef(12LL, v39, v40);
          if ( v43 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v44);
          tagDomLock::UnLockExclusive(v43);
          HMUnlockObject(*v46);
        }
        tagDomLock::UnLockExclusive(DomainLockRef);
      }
      gfMonitorPowerInProgress = 0;
      KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
      Win32FreePool((__int64)v12);
      return;
    }
    v47 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v47 + 24) = v11;
    WdLogEvent5_WdLowResource(v47);
  }
  for ( k = gpGraphicsDeviceList; k; k = (wchar_t *)*((_QWORD *)k + 16) )
  {
    if ( (*((_DWORD *)k + 40) & 0x800000) != 0 && *((_QWORD *)k + 17) && (!a1 || *((_QWORD *)k + 18) == a1) )
    {
      v49 = gpGraphicsDeviceList;
      if ( gpGraphicsDeviceList )
      {
        v9 = *((_QWORD *)k + 18);
        do
        {
          if ( *((_QWORD *)v49 + 18) == v9 )
            break;
          v49 = (wchar_t *)*((_QWORD *)v49 + 16);
        }
        while ( v49 );
      }
      if ( v49 == k )
      {
        DrvDxgkLogCodePointPacket(90LL, 0LL, 0LL, 0LL);
        v50 = GreGdoDeviceIoControlEx(*((_QWORD *)k + 17), 2301967, (int)v58, 16, 0LL, 0, &v57, 1u);
        v54 = v50;
        if ( v50 < 0 )
        {
          v55 = WdLogNewEntry5_WdError(v52, v51, v53);
          *(_QWORD *)(v55 + 24) = k;
          *(_QWORD *)(v55 + 32) = v54;
          WdLogEvent5_WdError(v55);
        }
        DrvDxgkLogCodePointPacket(91LL, (unsigned int)v54, 0LL, 0LL);
      }
    }
  }
  v56 = WdLogNewEntry5_WdTrace(v9);
  WdLogEvent5_WdTrace(v56);
}
