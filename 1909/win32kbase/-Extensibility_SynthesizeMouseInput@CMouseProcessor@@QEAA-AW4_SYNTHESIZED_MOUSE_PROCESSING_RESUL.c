/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C018EA90
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1C0112F20 (NtMITSynthesizeMouseInput.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00313C0 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0086668 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C0093420 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     UpconvertTime @ 0x1C009A280 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  CInputThread *v4; // rsi
  unsigned int CurrentThreadId; // eax
  int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ecx
  int v16; // edx
  __int16 v17; // ax
  __int16 v18; // ax
  __int16 v19; // cx
  bool v20; // zf
  __int16 v21; // ax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // edi
  unsigned int v27; // ecx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v33; // rax
  struct tagTHREADINFO *v34; // rbx
  struct tagTHREADINFO **v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  PVOID CurrentProcess; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // r9d
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  PERESOURCE *v57; // rdi
  __int64 v58; // r8
  __int64 *v59; // rsi
  int v61; // [rsp+38h] [rbp-D0h] BYREF
  int v62; // [rsp+3Ch] [rbp-CCh] BYREF
  int v63; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v64; // [rsp+48h] [rbp-C0h]
  __int64 v65; // [rsp+58h] [rbp-B0h]
  __int64 v66; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+68h] [rbp-A0h]
  _QWORD v68[5]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v69; // [rsp+98h] [rbp-70h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-60h]
  __int64 v71; // [rsp+B8h] [rbp-50h]
  unsigned __int8 v72; // [rsp+C0h] [rbp-48h]
  GUID ActivityId; // [rsp+C4h] [rbp-44h] BYREF
  struct tagPOINT v74; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+138h] [rbp+30h] BYREF
  int *v76; // [rsp+158h] [rbp+50h]
  __int64 v77; // [rsp+160h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR v78; // [rsp+168h] [rbp+60h] BYREF
  int *v79; // [rsp+188h] [rbp+80h]
  __int64 v80; // [rsp+190h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v81; // [rsp+198h] [rbp+90h] BYREF
  int *v82; // [rsp+1B8h] [rbp+B0h]
  __int64 v83; // [rsp+1C0h] [rbp+B8h]

  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v10 = *((_DWORD *)v4 + 10);
  v11 = CurrentThreadId;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 != v10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  if ( (dword_1C02169F4 & 1) == 0 )
    dword_1C02169F4 |= 1u;
  v15 = *(_DWORD *)(a2 + 32);
  v66 = 0LL;
  v67 = 0LL;
  v16 = 256;
  v68[0] = 0LL;
  if ( v15 || *(_DWORD *)(a2 + 36) )
  {
    v17 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v67) = v15;
    WORD1(v66) = v17;
    LODWORD(v68[0]) = *(_DWORD *)(a2 + 36);
    if ( (a3 & 4) != 0 )
      v16 = 258;
  }
  else
  {
    v16 = 264;
  }
  v18 = *(_WORD *)(a2 + 26) & 0xFFF;
  v19 = *(_WORD *)(a2 + 28);
  WORD2(v66) = v18;
  if ( v19 )
  {
    v20 = (v18 & 0xC00) == 0;
    v21 = HIWORD(v66);
    if ( !v20 )
      v21 = v19;
    HIWORD(v66) = v21;
  }
  v22 = v16 | 0x800;
  if ( (a3 & 2) == 0 )
    v22 = v16;
  v23 = v22 | 0x200;
  if ( (a3 & 8) != 0 )
    v23 = v22;
  v24 = v23 | 0x400;
  if ( (a3 & 1) == 0 )
    v24 = v23;
  v25 = v24 | 0x2000;
  if ( (a3 & 0x20) == 0 )
    v25 = v24;
  v26 = v25 | 0x10000;
  if ( (a3 & 0x80) == 0 )
    v26 = v25;
  if ( (a3 & 0x10) != 0 )
    v26 = v26 & 0xFFFFFFF3 | 4;
  v27 = *(_DWORD *)(a2 + 8);
  v28 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)&v64 + 1) = *(_QWORD *)a2;
  *(_QWORD *)&v64 = 1LL;
  *(_OWORD *)&v68[1] = v64;
  v68[3] = 0LL;
  *(_QWORD *)&v64 = UpconvertTime(v27);
  *((_QWORD *)&v64 + 1) = v28;
  v65 = v28;
  v69 = v64;
  v70 = v28;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx(
    (__int64)&v74,
    (__int64)&v66,
    &v69,
    v26 | 0x40,
    (__int64)&v68[1],
    a4);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v29);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v74, 0LL);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v30);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v72 = 1;
    v33 = PsGetCurrentThreadWin32Thread(v31);
    v71 = v33;
    if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v71 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v61 = v72;
          v76 = &v61;
          v77 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v71 = 0LL;
  }
  v34 = 0LL;
  while ( 1 )
  {
    v35 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v35 )
      v34 = *v35;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v37, v36);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v40, v39) == gpepCSRSS && v34 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v34 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v71 && (*(_DWORD *)(v71 + 48) || *(int *)(v71 + 24) > 0) )
  {
    *(_DWORD *)(v71 + 44) = 1;
    *(GUID *)(v71 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v62 = v72;
        v79 = &v62;
        v80 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v78);
        v41 = dword_1C020CB50;
      }
      if ( v41 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v63 = v72;
        v82 = &v63;
        v83 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v81);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v34;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v42, v43);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v47);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    while ( 1 )
    {
      v59 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v54 = *v59;
      v59[2] = 0LL;
      if ( !*(_DWORD *)(v54 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53);
      v57 = (PERESOURCE *)GetDomainLockRef(12LL, v51, v53);
      if ( v57 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v56, v55, v58);
      ExReleaseResourceAndLeaveCriticalRegion(*v57);
      HMUnlockObject(*v59);
      tagDomLock::LockExclusive(v57);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  return (unsigned int)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)&v74, 2LL) + 1;
}
