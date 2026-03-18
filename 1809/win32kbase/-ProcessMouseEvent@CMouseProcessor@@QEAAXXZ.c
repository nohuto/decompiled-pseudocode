/*
 * XREFs of ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0030058
 * Callers:
 *     ProcessMouseEvent @ 0x1C002F6A0 (ProcessMouseEvent.c)
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
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C003032C (-Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C00304DC (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00313C0 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C003140C (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1C0031AE0 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0031B00 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1C0031B90 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0035C80 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  bool v2; // al
  bool v3; // bl
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rsi
  CMouseProcessor *v10; // rcx
  _BYTE *v11; // rdx
  int v12; // edx
  int v13; // r8d
  unsigned int v14; // esi
  bool (__fastcall **v15)(const struct CMouseProcessor::CMouseEvent *); // rbx
  void (*v16)(void); // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v24; // r8
  _BYTE *v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  _BYTE v30[8]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  tagObjLock *v33; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+80h] [rbp-88h]
  _BYTE v36[16]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 v37; // [rsp+98h] [rbp-70h]
  unsigned __int16 v38; // [rsp+9Ah] [rbp-6Eh]
  int v39; // [rsp+B8h] [rbp-50h]
  int v40; // [rsp+BCh] [rbp-4Ch]
  __int64 v41; // [rsp+D0h] [rbp-38h]
  int v42; // [rsp+DCh] [rbp-2Ch]
  char v43; // [rsp+E0h] [rbp-28h]
  __int64 v44; // [rsp+F4h] [rbp-14h]
  int v45; // [rsp+FCh] [rbp-Ch]
  __int64 v46; // [rsp+110h] [rbp+8h]
  _BYTE v47[32]; // [rsp+118h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v49; // [rsp+158h] [rbp+50h]
  int v50; // [rsp+160h] [rbp+58h]
  int v51; // [rsp+164h] [rbp+5Ch]
  int *v52; // [rsp+168h] [rbp+60h]
  int v53; // [rsp+170h] [rbp+68h]
  int v54; // [rsp+174h] [rbp+6Ch]
  int *v55; // [rsp+178h] [rbp+70h]
  int v56; // [rsp+180h] [rbp+78h]
  int v57; // [rsp+184h] [rbp+7Ch]
  int *v58; // [rsp+188h] [rbp+80h]
  int v59; // [rsp+190h] [rbp+88h]
  int v60; // [rsp+194h] [rbp+8Ch]
  int *v61; // [rsp+198h] [rbp+90h]
  int v62; // [rsp+1A0h] [rbp+98h]
  int v63; // [rsp+1A4h] [rbp+9Ch]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v31,
    L"ProcessMouse",
    0LL);
  EtwTraceStartProcessQueuedMouseEvents();
  CMouseProcessor::RawMouseEvent::RawMouseEvent((CMouseProcessor::RawMouseEvent *)v36);
  while ( 1 )
  {
    RIMLockExclusive((char *)this + 2408);
    v2 = CMouseProcessor::CMouseQueue::Dequeue(
           (CMouseProcessor *)((char *)this + 96),
           (struct CMouseProcessor::RawMouseEvent *)v36);
    *((_QWORD *)this + 302) = 0LL;
    v3 = v2;
    ExReleasePushLockExclusiveEx((char *)this + 2408, 0LL);
    KeLeaveCriticalRegion();
    if ( !v3 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v30,
      L"ProcessMouseEvent",
      (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v31);
    if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
    {
      v51 = 0;
      v54 = 0;
      v57 = 0;
      v60 = 0;
      v63 = 0;
      v32 = v41;
      v49 = &v32;
      v26 = v39;
      v52 = &v26;
      v27 = v40;
      v55 = &v27;
      v28 = v37;
      v58 = &v28;
      v29 = v38;
      v61 = &v29;
      v50 = 8;
      v53 = 4;
      v56 = 4;
      v59 = 4;
      v62 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A1BE3, 0LL, 0LL, 7u, &pData);
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v47, 1);
    v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v47);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v33);
    while ( 1 )
    {
      v9 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v20 = *v9;
      v9[2] = 0LL;
      if ( !*(_DWORD *)(v20 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v9);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v33);
    CMouseProcessor::ComputeUIPIForMouseEvent(v10, (struct CMouseProcessor::RawMouseEvent *)v36);
    v11 = v36;
    v25 = v36;
    if ( (v43 & 1) == 0 && v42 != 1 )
    {
      v34 = v44;
      v35 = v45;
      if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v34, v36, v46 != 0) )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_(*((_QWORD *)this + 1), v12, 10, 14, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
        goto LABEL_19;
      }
      v11 = v25;
    }
    v13 = *((_DWORD *)v11 + 22);
    if ( (v13 & 0x1000) == 0 )
    {
      v17 = *((unsigned __int16 *)v11 + 8);
      v18 = *((_QWORD *)v11 + 8);
      v19 = ((v13 & 0x40) != 0 ? 16 : 32) | 8;
      if ( (v13 & 0x80u) == 0 )
        v19 = (v13 & 0x40) != 0 ? 16 : 32;
      CInputGlobals::UpdateInputGlobals(gpInputGlobals, v18, 2LL, v17, 0, v19);
    }
    CMouseProcessor::CMouseRawInput::Initialize(
      (CMouseProcessor *)((char *)this + 2456),
      (const struct CMouseProcessor::CMouseEvent *)&v25);
    v14 = 0;
    v15 = &off_1C01882D0;
    do
    {
      if ( !*v15 || (*v15)((const struct CMouseProcessor::CMouseEvent *)&v25) )
        ((void (__fastcall *)(CMouseProcessor *, _BYTE **))v15[1])(this, &v25);
      ++v14;
      v15 += 2;
    }
    while ( v14 < 3 );
    v16 = (void (*)(void))*((_QWORD *)v25 + 17);
    if ( v16 )
      v16();
LABEL_19:
    UserSessionSwitchLeaveCrit();
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v30);
  }
  EtwTraceStopProcessQueuedMouseEvents();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v31);
}
