/*
 * XREFs of ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01709BC
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C017B000 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00BA72C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0163BE4 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0170B8C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C01716C4 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175400 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
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
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v12, 7, 19, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v18 = 20;
LABEL_21:
        LOBYTE(v16) = 5;
        WPP_RECORDER_SF_(v17->DeviceExtension, v16, 7, v18, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
      }
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v21);
  CInpLockGuard::UnLock(v20);
}
