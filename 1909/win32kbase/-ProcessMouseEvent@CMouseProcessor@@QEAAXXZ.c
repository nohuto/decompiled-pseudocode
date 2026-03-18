/*
 * XREFs of ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00316B8
 * Callers:
 *     ProcessMouseEvent @ 0x1C0033C10 (ProcessMouseEvent.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0031A80 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C0031AA4 (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0031CA8 (isRootPartition.c)
 *     ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0031CE0 (-Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0031DC0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C0031F70 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0032088 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C0032144 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1C0033B40 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0033B60 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1C0033BF0 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0038A30 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0182CB8 (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01831FC (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C018E368 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C018E6F0 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C018F0B0 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  CMouseProcessor::CMouseQueue *v2; // r12
  bool v3; // al
  bool v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  CMouseProcessor *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // r14
  _BYTE *v29; // rdx
  int v30; // edx
  int v31; // r8d
  unsigned int v32; // edi
  bool (__fastcall **v33)(const struct CMouseProcessor::CMouseEvent *); // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  void (*v36)(void); // rax
  __int64 v37; // r9
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // r9
  const CHAR *v41; // rax
  const CHAR *v42; // rax
  __int64 v43; // rax
  unsigned int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  PERESOURCE *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // [rsp+38h] [rbp-D0h] BYREF
  int v53; // [rsp+3Ch] [rbp-CCh] BYREF
  int v54; // [rsp+40h] [rbp-C8h] BYREF
  int v55; // [rsp+44h] [rbp-C4h] BYREF
  int v56; // [rsp+48h] [rbp-C0h] BYREF
  int v57; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v58; // [rsp+50h] [rbp-B8h] BYREF
  void **v59; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE *v60; // [rsp+60h] [rbp-A8h]
  int v61; // [rsp+68h] [rbp-A0h]
  _BYTE v62[8]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v63; // [rsp+78h] [rbp-90h] BYREF
  __int64 v64; // [rsp+80h] [rbp-88h] BYREF
  __int64 v65; // [rsp+88h] [rbp-80h] BYREF
  int v66; // [rsp+90h] [rbp-78h]
  __int64 v67; // [rsp+98h] [rbp-70h]
  unsigned __int8 v68; // [rsp+A0h] [rbp-68h]
  GUID ActivityId; // [rsp+A4h] [rbp-64h] BYREF
  _BYTE v70[28]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int16 v71; // [rsp+D4h] [rbp-34h]
  unsigned __int16 v72; // [rsp+D6h] [rbp-32h]
  int v73; // [rsp+ECh] [rbp-1Ch]
  int v74; // [rsp+F0h] [rbp-18h]
  __int64 v75; // [rsp+108h] [rbp+0h]
  unsigned int v76; // [rsp+118h] [rbp+10h]
  unsigned int v77; // [rsp+11Ch] [rbp+14h]
  char v78; // [rsp+120h] [rbp+18h]
  __int64 v79; // [rsp+134h] [rbp+2Ch]
  int v80; // [rsp+13Ch] [rbp+34h]
  __int64 v81; // [rsp+150h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v83; // [rsp+178h] [rbp+70h]
  __int64 v84; // [rsp+180h] [rbp+78h]
  int *v85; // [rsp+188h] [rbp+80h]
  __int64 v86; // [rsp+190h] [rbp+88h]
  int *v87; // [rsp+198h] [rbp+90h]
  __int64 v88; // [rsp+1A0h] [rbp+98h]
  int *v89; // [rsp+1A8h] [rbp+A0h]
  __int64 v90; // [rsp+1B0h] [rbp+A8h]
  int *v91; // [rsp+1B8h] [rbp+B0h]
  __int64 v92; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+1D8h] [rbp+D0h] BYREF
  EVENT_DATA_DESCRIPTOR v95; // [rsp+1E8h] [rbp+E0h] BYREF
  int *v96; // [rsp+208h] [rbp+100h]
  __int64 v97; // [rsp+210h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR v98; // [rsp+218h] [rbp+110h] BYREF
  int *v99; // [rsp+238h] [rbp+130h]
  __int64 v100; // [rsp+240h] [rbp+138h]
  EVENT_DATA_DESCRIPTOR v101; // [rsp+248h] [rbp+140h] BYREF
  __int64 *v102; // [rsp+268h] [rbp+160h]
  __int64 v103; // [rsp+270h] [rbp+168h]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v63,
    L"ProcessMouse",
    0LL);
  EtwTraceStartProcessQueuedMouseEvents();
  CMouseProcessor::RawMouseEvent::RawMouseEvent((CMouseProcessor::RawMouseEvent *)v70);
  v2 = (CMouseProcessor *)((char *)this + 88);
  while ( 1 )
  {
    RIMLockExclusive((__int64)this + 2656);
    v3 = CMouseProcessor::CMouseQueue::Dequeue(v2, (struct CMouseProcessor::RawMouseEvent *)v70);
    *((_QWORD *)this + 333) = 0LL;
    v4 = v3;
    ExReleasePushLockExclusiveEx((char *)this + 2656, 0LL);
    KeLeaveCriticalRegion();
    if ( !v4 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v62,
      L"ProcessMouseEvent",
      (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v63);
    if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x40uLL) )
    {
      v64 = v75;
      v83 = &v64;
      v52 = v73;
      v85 = &v52;
      v53 = v74;
      v87 = &v53;
      v54 = v71;
      v89 = &v54;
      v55 = v72;
      v91 = &v55;
      v84 = 8LL;
      v86 = v40;
      v88 = v40;
      v90 = v40;
      v92 = v40;
      v41 = InputTraceLogging::DeviceTypeToString(v76);
      TlgCreateSz(&pDesc, v41);
      v42 = (const CHAR *)InputTraceLogging::OriginIdToString(v77);
      TlgCreateSz(&v94, v42);
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E659B, 0LL, 0LL, 9u, &pData);
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v68 = 1;
      v43 = PsGetCurrentThreadWin32Thread(v6);
      v67 = v43;
      if ( v43 && (*(int *)(v43 + 24) > 0 || *(_DWORD *)(v67 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v56 = v68;
            v96 = &v56;
            v97 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &v95);
          }
        }
      }
    }
    else
    {
      v67 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v67 && (*(_DWORD *)(v67 + 48) || *(int *)(v67 + 24) > 0) )
    {
      *(_DWORD *)(v67 + 44) = 1;
      *(GUID *)(v67 + 28) = ActivityId;
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v57 = v68;
          v99 = &v57;
          v100 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v98);
          v44 = dword_1C020CB50;
        }
        if ( v44 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          LODWORD(v58) = v68;
          v102 = &v58;
          v103 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v101);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v15, v17);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v21);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v28 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v28[2];
          v45 = *v28;
          v28[2] = 0LL;
          if ( !*(_DWORD *)(v45 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
          v48 = (PERESOURCE *)GetDomainLockRef(12LL, v25, v27);
          if ( v48 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v49);
          ExReleaseResourceAndLeaveCriticalRegion(*v48);
          HMUnlockObject(*v28);
          tagDomLock::LockExclusive(v48);
          v28 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = (CMouseProcessor *)((char *)this + 88);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    CMouseProcessor::ComputeUIPIForMouseEvent(v16, (struct CMouseProcessor::RawMouseEvent *)v70);
    v29 = v70;
    v59 = &CMouseProcessor::CMouseEvent::`vftable';
    v60 = v70;
    v61 = 0;
    if ( (v78 & 1) != 0 || v77 == 1 )
    {
LABEL_27:
      v31 = *((_DWORD *)v29 + 26);
      if ( (v31 & 0x800) == 0 )
      {
        v37 = *((unsigned __int16 *)v29 + 14);
        v38 = *((_QWORD *)v29 + 9);
        v39 = ((v31 & 0x40) != 0 ? 16 : 32) | 8;
        if ( (v31 & 0x80u) == 0 )
          v39 = (v31 & 0x40) != 0 ? 16 : 32;
        CInputGlobals::UpdateInputGlobals(gpInputGlobals, v38, 2LL, v37, 0, v39);
      }
      CMouseProcessor::CMouseRawInput::Initialize(
        (CMouseProcessor *)((char *)this + 3160),
        (const struct CMouseProcessor::CMouseEvent *)&v59);
      v32 = 0;
      v33 = &off_1C01CB128;
      do
      {
        if ( !*v33 || (*v33)((const struct CMouseProcessor::CMouseEvent *)&v59) )
          ((void (__fastcall *)(CMouseProcessor *, void ***))v33[1])(this, &v59);
        ++v32;
        v33 += 2;
      }
      while ( v32 < 3 );
      if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
        CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
          (CMouseProcessor *)((char *)this + 3592),
          (const struct CMouseProcessor::CMouseEvent *)&v59);
      v36 = (void (*)(void))*((_QWORD *)v60 + 19);
      if ( v36 )
        v36();
      UserSessionSwitchLeaveCrit(v35, v34);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v62);
    }
    else
    {
      v65 = v79;
      v66 = v80;
      if ( (unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v65, v70, v81 != 0) )
      {
        v29 = v60;
        goto LABEL_27;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v30) = 3;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v30, 6, 15, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
      }
      InputTraceLogging::Mouse::DropInput(*((_QWORD *)v60 + 10), 10LL);
      UserSessionSwitchLeaveCrit(v51, v50);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v62);
    }
  }
  if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3592));
  EtwTraceStopProcessQueuedMouseEvents();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v63);
}
