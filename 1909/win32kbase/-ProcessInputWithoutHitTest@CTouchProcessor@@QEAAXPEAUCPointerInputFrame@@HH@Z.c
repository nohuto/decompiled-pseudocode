/*
 * XREFs of ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C016E7CC
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0178E10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0031A80 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0031DC0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C01619E4 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0165E1C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C016E99C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C016F4D4 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0173210 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessInputWithoutHitTest(
        LPCWSTR *this,
        struct CPointerInputFrame *a2,
        int a3,
        unsigned int a4)
{
  struct _KTHREAD **v4; // rdi
  int v8; // edx
  __int64 v9; // r8
  struct RIMCOMPLETEFRAME *v10; // r8
  const struct CPointerInputFrame *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  const struct CPointerInputFrame *v15; // rbx
  int v16; // edx
  PDEVICE_OBJECT v17; // rcx
  int v18; // r9d
  _DWORD *v19; // rcx
  CInpLockGuard *v20; // [rsp+30h] [rbp-38h] BYREF
  LPCWSTR *v21; // [rsp+70h] [rbp+8h] BYREF

  v21 = this;
  v4 = (struct _KTHREAD **)gpTouchProcessor;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)&v20,
    (CTouchProcessor *)((char *)gpTouchProcessor + 48));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      7,
      18,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v21, L"ProcessTouchpadGesture", 0LL);
  CTouchProcessor::CommitInputFrame(v4, a2, v9);
  v11 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)v4, a2, v10, 0);
  v15 = v11;
  if ( v11 )
  {
    if ( *((_DWORD *)v11 + 12) <= *((_DWORD *)v11 + 13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    if ( !*((_QWORD *)v15 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    if ( *((_DWORD *)v15 + 12) == 1 && (*((_DWORD *)v15 + 28) & 0x10) != 0 )
    {
      v19 = (_DWORD *)*((_QWORD *)v15 + 16);
      if ( (*v19 & 0x400) != 0 && (v19[47] & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave((CTouchProcessor *)v4, v15, v14);
    }
    CTouchProcessor::GenerateMessagesCore(v4, a3, a4, 0, v15);
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v4, v15);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v18 = 21;
        goto LABEL_21;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v12, 7, 19, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v18 = 20;
LABEL_21:
        LOBYTE(v16) = 5;
        WPP_RECORDER_SF_(v17->DeviceExtension, v16, 7, v18, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      }
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v21);
  CInpLockGuard::UnLock(v20);
}
