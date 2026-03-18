/*
 * XREFs of ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C00E3F24
 * Callers:
 *     xxxInitProcessInfo @ 0x1C009B0FC (xxxInitProcessInfo.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // edi
  int v3; // ebx
  void *ProcessInheritedFromUniqueProcessId; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v19; // r8
  __int64 *v20; // rsi
  void *ProcessHandle; // [rsp+38h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-51h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v24; // [rsp+98h] [rbp+7h]
  struct _CLIENT_ID ClientId; // [rsp+B8h] [rbp+27h] BYREF

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && (unsigned int)GreIsCurrentProcessSystemCritical() )
    return 0LL;
  if ( gpepCSRSS && gpidLogon && (gdwHydraHint & 0x40000) != 0 )
  {
    if ( (int)IsGreWaitForTextReadySupported() >= 0 && (gdwHydraHint & 0x10000000) == 0 )
    {
      v3 = 1;
      goto LABEL_9;
    }
    return 0LL;
  }
LABEL_9:
  if ( gSessionId != gServiceSessionId )
  {
    ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)a1);
    if ( ProcessInheritedFromUniqueProcessId )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ClientId.UniqueThread = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueProcess = ProcessInheritedFromUniqueProcessId;
      InformationProcess = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
      if ( InformationProcess < 0 )
        goto LABEL_18;
      InformationProcess = ZwQueryInformationProcess(
                             ProcessHandle,
                             ProcessImageInformation,
                             ProcessInformation,
                             0x40u,
                             0LL);
      if ( InformationProcess >= 0
        && (int)IsIsNativeSubSystemTypeSupported() >= 0
        && !(unsigned int)IsNativeSubSystemType(v24) )
      {
        InformationProcess = -1073741790;
      }
      ZwClose(ProcessHandle);
      if ( InformationProcess < 0 )
      {
LABEL_18:
        if ( InformationProcess == -1073741813 || InformationProcess == -1073741558 )
          InformationProcess = 0;
        if ( InformationProcess < 0 && v3 )
        {
          UserSessionSwitchLeaveCrit();
          v5 = GreWaitForTextReady();
          InformationProcess = v5;
          if ( v5 == 259 )
          {
            InformationProcess = 0;
          }
          else if ( v5 >= 0 )
          {
            gdwHydraHint |= 0x10000000u;
          }
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7, v6, v8);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)&ClientId, 1);
          v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&ClientId);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v11;
          gbValidateHandleForIL = 1;
          CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&ProcessHandle);
          while ( 1 )
          {
            v20 = (__int64 *)gpducstulHead;
            if ( !gpducstulHead )
              break;
            gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
            v15 = *v20;
            v20[2] = 0LL;
            if ( !*(_DWORD *)(v15 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
            DomainLockRef = GetDomainLockRef(8);
            if ( DomainLockRef == &gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
            tagObjLock::UnLock((tagObjLock *)DomainLockRef);
            HMUnlockObject(*v20);
            tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
          }
          tagObjLock::UnLock((tagObjLock *)ProcessHandle);
        }
      }
    }
  }
  return (unsigned int)InformationProcess;
}
