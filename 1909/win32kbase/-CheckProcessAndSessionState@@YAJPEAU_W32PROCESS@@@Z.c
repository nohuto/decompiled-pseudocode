/*
 * XREFs of ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C008A7A4
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00AA140 (xxxInitProcessInfo.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // esi
  int v3; // ebx
  void *ProcessInheritedFromUniqueProcessId; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  PERESOURCE *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // r14
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v30; // rax
  unsigned int v31; // r9d
  PERESOURCE *DomainLockRef; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  PERESOURCE *v39; // rbx
  void *ProcessHandle; // [rsp+38h] [rbp-D0h] BYREF
  int v41; // [rsp+40h] [rbp-C8h] BYREF
  int v42; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v43; // [rsp+48h] [rbp-C0h] BYREF
  _CLIENT_ID ClientId; // [rsp+50h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD ProcessInformation[16]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-30h]
  unsigned __int8 v48; // [rsp+E0h] [rbp-28h]
  GUID ActivityId; // [rsp+E4h] [rbp-24h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  int *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+128h] [rbp+20h] BYREF
  int *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR v56; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v57; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && (unsigned int)GreIsCurrentProcessSystemCritical() )
    return 0LL;
  if ( gpepCSRSS && gpidLogon && (gdwHydraHint & 0x40000) != 0 )
  {
    if ( (int)IsGreWaitForTextReadySupported() < 0 || (gdwHydraHint & 0x10000000) != 0 )
      return 0LL;
    v3 = 1;
  }
  if ( (unsigned int)PsGetCurrentProcessSessionId() )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    memset(ProcessInformation, 0, sizeof(ProcessInformation));
    ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)a1);
    if ( ProcessInheritedFromUniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ClientId.UniqueProcess = ProcessInheritedFromUniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      InformationProcess = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
      if ( InformationProcess < 0 )
        goto LABEL_20;
      InformationProcess = ZwQueryInformationProcess(
                             ProcessHandle,
                             ProcessImageInformation,
                             ProcessInformation,
                             0x40u,
                             0LL);
      if ( InformationProcess >= 0
        && (int)IsIsNativeSubSystemTypeSupported() >= 0
        && !(unsigned int)IsNativeSubSystemType(ProcessInformation[8]) )
      {
        InformationProcess = -1073741790;
      }
      ZwClose(ProcessHandle);
      if ( InformationProcess < 0 )
      {
LABEL_20:
        if ( InformationProcess == -1073741558 || InformationProcess == -1073741813 )
          InformationProcess = 0;
        if ( InformationProcess < 0 && v3 )
        {
          UserSessionSwitchLeaveCrit(v7, v6);
          v26 = GreWaitForTextReady();
          InformationProcess = v26;
          if ( v26 == 259 )
          {
            InformationProcess = 0;
          }
          else if ( v26 >= 0 )
          {
            gdwHydraHint |= 0x10000000u;
          }
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v27);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          *(_QWORD *)&ActivityId.Data1 = 0LL;
          *(_QWORD *)ActivityId.Data4 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v48 = 1;
            v30 = PsGetCurrentThreadWin32Thread(v28);
            v47 = v30;
            if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
            {
              EtwActivityIdControl(3u, &ActivityId);
              if ( dword_1C020CB50 > 6u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                {
                  v41 = v48;
                  v51 = &v41;
                  v52 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
                }
              }
            }
          }
          else
          {
            v47 = 0LL;
          }
          v8 = 0LL;
          while ( 1 )
          {
            v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v9 )
              v8 = *v9;
            CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
            if ( CurrentProcess )
            {
              if ( CurrentProcess == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v8 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v47
            && (*(_DWORD *)(v47 + 48) || *(int *)(v47 + 24) > 0) )
          {
            *(_DWORD *)(v47 + 44) = 1;
            *(GUID *)(v47 + 28) = ActivityId;
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v42 = v48;
                v54 = &v42;
                v55 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v53);
                v31 = dword_1C020CB50;
              }
              if ( v31 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                LODWORD(v43) = v48;
                v57 = &v43;
                v58 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v56);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v8;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v15, v16);
            v39 = DomainLockRef;
            ProcessHandle = DomainLockRef;
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35);
            if ( ExIsResourceAcquiredExclusiveLite(*v39) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*v39);
            v25 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v25[2];
                v17 = *v25;
                v25[2] = 0LL;
                if ( !*(_DWORD *)(v17 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v18, v19);
                v22 = (PERESOURCE *)GetDomainLockRef(12LL, v18, v19);
                if ( v22 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23);
                ExReleaseResourceAndLeaveCriticalRegion(*v22);
                HMUnlockObject(*v25);
                tagDomLock::LockExclusive(v22);
                v25 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v39 = (PERESOURCE *)ProcessHandle;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v39);
          }
        }
      }
    }
  }
  return (unsigned int)InformationProcess;
}
