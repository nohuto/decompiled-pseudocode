/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0157C00
 * Callers:
 *     SynthesizeMouseInputData @ 0x1C01516D8 (SynthesizeMouseInputData.c)
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
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0030628 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0074A9C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C0080968 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     UpconvertTime @ 0x1C0087D10 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  CInputThread *v4; // rdi
  bool v9; // bl
  int v10; // edx
  int v11; // ecx
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // dx
  bool v15; // zf
  __int16 v16; // ax
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // edi
  unsigned int v22; // ecx
  tagObjLock *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v36; // r8
  __int64 *v37; // rdi
  tagObjLock *v39[2]; // [rsp+38h] [rbp-69h] BYREF
  __int128 v40; // [rsp+48h] [rbp-59h] BYREF
  __int64 v41; // [rsp+58h] [rbp-49h] BYREF
  __int64 v42; // [rsp+60h] [rbp-41h]
  __int64 v43; // [rsp+68h] [rbp-39h]
  struct tagPOINT v44; // [rsp+78h] [rbp-29h] BYREF

  v4 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  v9 = CInputThread::_CalledOnInputThread(v4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredMsgKM("This API exposed only to Extensibility, how come it is called on non-Input thread?");
  if ( (dword_1C01D1F14 & 1) == 0 )
    dword_1C01D1F14 |= 1u;
  v10 = *(_DWORD *)(a2 + 32);
  v41 = 0LL;
  v11 = 256;
  v42 = 0LL;
  v43 = 0LL;
  if ( v10 || *(_DWORD *)(a2 + 36) )
  {
    v12 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v42) = v10;
    WORD1(v41) = v12;
    LODWORD(v43) = *(_DWORD *)(a2 + 36);
    if ( (a3 & 4) != 0 )
      v11 = 258;
  }
  else
  {
    v11 = 264;
  }
  v13 = *(_WORD *)(a2 + 26) & 0xFFF;
  v14 = *(_WORD *)(a2 + 28);
  WORD2(v41) = v13;
  if ( v14 )
  {
    v15 = (v13 & 0xC00) == 0;
    v16 = HIWORD(v41);
    if ( !v15 )
      v16 = v14;
    HIWORD(v41) = v16;
  }
  v17 = v11 | 0x800;
  if ( (a3 & 2) == 0 )
    v17 = v11;
  v18 = v17 | 0x200;
  if ( (a3 & 8) != 0 )
    v18 = v17;
  v19 = v18 | 0x400;
  if ( (a3 & 1) == 0 )
    v19 = v18;
  v20 = v19 | 0x2000;
  if ( (a3 & 0x20) == 0 )
    v20 = v19;
  v21 = v20 | 0x20000;
  if ( (a3 & 0x80) == 0 )
    v21 = v20;
  if ( (a3 & 0x10) != 0 )
    v21 = v21 & 0xFFFFFFF3 | 4;
  v22 = *(_DWORD *)(a2 + 8);
  v23 = *(tagObjLock **)(a2 + 16);
  v39[1] = *(tagObjLock **)a2;
  LODWORD(v39[0]) = 1;
  v40 = *(_OWORD *)v39;
  v39[0] = (tagObjLock *)UpconvertTime(v22);
  v39[1] = v23;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v44, (__int64)&v41, v39, v21 | 0x40, &v40, a4);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v44, 0LL);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v25, v24, v26);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v41, 1);
  v28 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v41);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v28;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)v39);
  while ( 1 )
  {
    v37 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v32 = *v37;
    v37[2] = 0LL;
    if ( !*(_DWORD *)(v32 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v37);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v39[0]);
  return (unsigned int)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)&v44, 2) + 1;
}
