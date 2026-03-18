/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C00367BC
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1C0036B40 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0036A70 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0036AD4 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C017866C (-DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  __int64 v2; // rax
  CBaseInput *v4; // r14
  unsigned int v5; // edi
  void **v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v16; // rbx
  struct tagTHREADINFO **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  PVOID CurrentProcess; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rsi
  int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v43; // r15d
  const CHAR *v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r9d
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PERESOURCE *v50; // rdi
  __int64 v51; // r8
  int v52; // [rsp+30h] [rbp-D0h] BYREF
  int v53; // [rsp+34h] [rbp-CCh] BYREF
  int v54; // [rsp+38h] [rbp-C8h] BYREF
  CBaseInput *v55; // [rsp+40h] [rbp-C0h]
  LPCWSTR *v56; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v58; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR v60; // [rsp+70h] [rbp-90h] BYREF
  int *v61; // [rsp+90h] [rbp-70h]
  int v62; // [rsp+98h] [rbp-68h]
  int v63; // [rsp+9Ch] [rbp-64h]
  EVENT_DATA_DESCRIPTOR v64; // [rsp+A0h] [rbp-60h] BYREF
  int *v65; // [rsp+C0h] [rbp-40h]
  int v66; // [rsp+C8h] [rbp-38h]
  int v67; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR v68; // [rsp+D0h] [rbp-30h] BYREF
  int *v69; // [rsp+F0h] [rbp-10h]
  int v70; // [rsp+F8h] [rbp-8h]
  int v71; // [rsp+FCh] [rbp-4h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF

  v2 = *(_QWORD *)this;
  v4 = this;
  v55 = this;
  (*(void (__fastcall **)(CBaseInput *))(v2 + 112))(this);
  v5 = 0;
  v6 = (void **)((char *)v4 + 200);
  while ( *v6 != a2 )
  {
    ++v5;
    v6 += 8;
    if ( v5 >= 0x10 )
    {
      v43 = 16;
      goto LABEL_9;
    }
  }
  v7 = (unsigned __int64)v5 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)v4 + v7 + 152)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v43 = *(_DWORD *)((char *)v4 + v7 + 168);
  if ( v5 != v43 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v43 = *(_DWORD *)((char *)v4 + v7 + 168);
  }
LABEL_9:
  if ( v43 == 16 )
  {
    v36 = -1073741823;
  }
  else
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v56, L"DispatcherObjectSignaled", 0LL);
    if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 2uLL) )
    {
      v44 = (const CHAR *)InputTraceLogging::DispatcherHandleNameToString(v43);
      TlgCreateSz(&pDesc, v44);
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E705F, 0LL, 0LL, 3u, &pData);
    }
    if ( v43 != *((_DWORD *)&unk_1C01D30D0 + 6 * v43) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( *((_BYTE *)&unk_1C01D30D0 + 24 * v43 + 16) )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&ActivityId.Data1 = 0LL;
      *(_QWORD *)ActivityId.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v58 = 1;
        v45 = PsGetCurrentThreadWin32Thread(v14);
        v57 = v45;
        if ( v45 && (*(int *)(v45 + 24) > 0 || *(_DWORD *)(v57 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( dword_1C020FB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v63 = 0;
              v52 = v58;
              v61 = &v52;
              v62 = 4;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &v60);
            }
          }
        }
      }
      else
      {
        v57 = 0LL;
      }
      v16 = 0LL;
      while ( 1 )
      {
        v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v17 )
          v16 = *v17;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v19, v18);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v22, v21) == gpepCSRSS && v16 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v16 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v57 && (*(_DWORD *)(v57 + 48) || *(int *)(v57 + 24) > 0) )
      {
        *(_DWORD *)(v57 + 44) = 1;
        *(GUID *)(v57 + 28) = ActivityId;
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v67 = 0;
            v53 = v58;
            v65 = &v53;
            v66 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v64);
            v46 = dword_1C020FB50;
          }
          if ( v46 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v71 = 0;
            v54 = v58;
            v69 = &v54;
            v70 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v68);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v16;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v23, v24);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v35 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v35[2];
            v47 = *v35;
            v35[2] = 0LL;
            if ( !*(_DWORD *)(v47 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
            v50 = (PERESOURCE *)GetDomainLockRef(12LL, v32, v34);
            if ( v50 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51);
            ExReleaseResourceAndLeaveCriticalRegion(*v50);
            HMUnlockObject(*v35);
            tagDomLock::LockExclusive(v50);
            v35 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v4 = v55;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
      v36 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C01D30D0 + 3 * v43 + 1))(v4);
      UserSessionSwitchLeaveCrit(v38, v37);
    }
    else
    {
      v36 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C01D30D0 + 3 * v43 + 1))(v4);
    }
    if ( v36 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
    CRIMBase::SignalMarshalingCompleted(v4, v43);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v56);
  }
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)v4 + 120LL))(v4);
  return (unsigned int)v36;
}
