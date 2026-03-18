/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C006B700
 * Callers:
 *     NtUserInitialize @ 0x1C006B340 (NtUserInitialize.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0013C98 (RtlStringCchCopyW.c)
 *     OpenCacheKeyEx @ 0x1C0018CC0 (OpenCacheKeyEx.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     InitLoadResources @ 0x1C003BB24 (InitLoadResources.c)
 *     FastGetProfileIntFromID @ 0x1C0046AF0 (FastGetProfileIntFromID.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     xxxSystemParametersInfo @ 0x1C00688C0 (xxxSystemParametersInfo.c)
 *     CreateKernelEvent @ 0x1C006C700 (CreateKernelEvent.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C006CDAC (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     RtlStringCchPrintfW @ 0x1C006CE5C (RtlStringCchPrintfW.c)
 *     InitVideo @ 0x1C0098C74 (InitVideo.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00EBE5C (-DrvDriverFailure@@YAJXZ.c)
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C00EC154 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EC2B8 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitCreateObjectDirectory @ 0x1C021C618 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *i; // rdi
  int ObjectDirectory; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // edi
  void *v12; // rsi
  int v13; // r14d
  void *v14; // rsi
  int v15; // r14d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v21; // r8
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  PVOID MappedBase; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 InputBuffer; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v28; // [rsp+54h] [rbp-ACh] BYREF
  tagObjLock *v29; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v33[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+F0h] [rbp-10h] BYREF
  int v35; // [rsp+FCh] [rbp-4h]
  _BYTE v36[12]; // [rsp+108h] [rbp+8h] BYREF
  int v37; // [rsp+114h] [rbp+14h]

  memset(v32, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v32[1]);
  v32[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v32[3]) = 28;
  LOBYTE(v32[6]) = -1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1, v0, v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v33, 1);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v33);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v29);
  for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
  {
    gpducstulHead = i[2];
    v17 = *i;
    i[2] = 0LL;
    if ( !*(_DWORD *)(v17 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v21);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*i);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v29);
  if ( ghSMSS && gpidLogon )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  gdwHydraHint |= 2u;
  if ( gbRemoteSession )
    RtlStringCchPrintfW(
      &szWindowStationDirectory,
      0x100uLL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      gSessionId,
      L"\\Windows\\WindowStations");
  else
    RtlStringCchCopyW(&szWindowStationDirectory, 0x100uLL, L"\\Windows\\WindowStations");
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    gpEventPnPWainting = CreateKernelEvent(SynchronizationEvent);
    if ( gpEventPnPWainting
      && (FastGetProfileIntFromID(0, 39, 0x268u, 1, &gbSnapShotWindowsAndMonitors, 0),
          FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, &gdwWaitToKillServiceTimeout, 0),
          *((_DWORD *)gpsi + 559) |= 4u,
          (gpEventDiconnectDesktop = CreateKernelEvent(SynchronizationEvent)) != 0) )
    {
      if ( !gbRemoteSession || gbFirstInteractiveSession )
      {
        ObjectDirectory = ReserveUserSessionViews(&Object, &MappedBase);
        if ( ObjectDirectory < 0 )
          goto LABEL_35;
        if ( !InitVideo((__int64)v32) )
        {
          ObjectDirectory = DrvDriverFailure();
          MmUnmapViewInSessionSpace(MappedBase);
          ObfDereferenceObject(Object);
          goto LABEL_35;
        }
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        gbVideoInitialized = 1;
        InputBuffer = 2LL;
        ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
      }
      CurrentThread = KeGetCurrentThread();
      gbUserInitialized = 1;
      ObjectDirectory = xxxCreateThreadInfo(CurrentThread);
      if ( ObjectDirectory >= 0 )
      {
        if ( giDelayedPowerTimeout )
        {
          xxxSystemParametersInfo(0x51u, giDelayedPowerTimeout, 0LL, 0);
          xxxSystemParametersInfo(0x52u, giDelayedPowerTimeout, 0LL, 0);
          giDelayedPowerTimeout = 0;
        }
        ObjectDirectory = InitializeRemoteSessionOcclusionEvent();
        if ( ObjectDirectory >= 0 )
        {
          if ( !gbRemoteSession || gbFirstInteractiveSession )
            LW_BrushInit();
          if ( gbFirstInteractiveSession && !gbSetupDPIInitialized && gbRemoteSession )
            SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v32);
          InitLoadResources(0);
          v11 = v22;
          v23 = gdwPolicyFlags;
          do
          {
            v12 = OpenCacheKeyEx(0LL, 0x33u, 0x20019u, &v23);
            if ( !v12 )
            {
              v11 = 0;
              goto LABEL_27;
            }
            RtlInitUnicodeString(&DestinationString, L"ConvertibleSlateMode");
            if ( ZwQueryValueKey(
                   v12,
                   &DestinationString,
                   KeyValuePartialInformation,
                   KeyValueInformation,
                   0x14u,
                   &ResultLength) < 0 )
            {
              v13 = v23;
              if ( !v23 )
                v11 = 0;
            }
            else
            {
              v11 = v35;
              v13 = 0;
              v23 = 0;
            }
            ZwClose(v12);
          }
          while ( v13 );
          if ( !v11 )
          {
LABEL_27:
            *((_DWORD *)gpsi + 559) &= ~8u;
            goto LABEL_28;
          }
          *((_DWORD *)gpsi + 559) |= 8u;
LABEL_28:
          v22 = gdwPolicyFlags;
          do
          {
            v14 = OpenCacheKeyEx(0LL, 0x33u, 0x20019u, &v22);
            if ( !v14 )
              goto LABEL_34;
            RtlInitUnicodeString(&ValueName, L"SystemDockMode");
            if ( ZwQueryValueKey(v14, &ValueName, KeyValuePartialInformation, v36, 0x14u, &v28) < 0 )
            {
              v15 = v22;
              if ( !v22 )
                v11 = 0;
            }
            else
            {
              v11 = v37;
              v15 = 0;
              v22 = 0;
            }
            ZwClose(v14);
          }
          while ( v15 );
          if ( !v11 )
          {
LABEL_34:
            *((_DWORD *)gpsi + 559) &= ~0x10u;
            goto LABEL_35;
          }
          *((_DWORD *)gpsi + 559) |= 0x10u;
        }
      }
    }
    else
    {
      ObjectDirectory = -1073741801;
    }
  }
LABEL_35:
  KeSetEvent(gpevtVideoInitialized, 1, 0);
  UserSessionSwitchLeaveCrit();
  return (unsigned int)ObjectDirectory;
}
