/*
 * XREFs of ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0141D28
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C014B060 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0135CE0 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0141FD8 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C014280C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessInputWithoutHitTest(
        LPCWSTR *this,
        struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v8; // r8
  struct RIMCOMPLETEFRAME *v9; // r8
  const struct CPointerInputFrame *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  PDEVICE_OBJECT v15; // rcx
  unsigned __int16 v16; // r9
  _DWORD *v17; // rcx
  __int64 v18; // r8
  CInpLockGuard *v19[6]; // [rsp+30h] [rbp-48h] BYREF
  LPCWSTR *v20; // [rsp+80h] [rbp+8h] BYREF

  v20 = this;
  Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v19,
    (struct CInpLockGuard *)&WPP_MAIN_CB.Queue.ListEntry.Blink[3].Blink,
    0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x10u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v20, L"ProcessTouchpadGesture", 0LL);
  CTouchProcessor::CommitInputFrame((struct _KTHREAD **)Blink, a2, v8);
  v10 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)Blink, a2, v9, 0);
  v14 = (__int64)v10;
  if ( v10 )
  {
    if ( *((_DWORD *)v10 + 12) <= *((_DWORD *)v10 + 13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( !*(_QWORD *)(v14 + 104) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( *(_DWORD *)(v14 + 48) == 1 && (*(_DWORD *)(v14 + 92) & 8) != 0 )
    {
      v17 = *(_DWORD **)(v14 + 104);
      if ( (*v17 & 0x400) != 0 && (v17[61] & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave(
          (CTouchProcessor *)Blink,
          (const struct CPointerInputFrame *)v14,
          v13);
    }
    CTouchProcessor::GenerateMessagesCore((struct _KTHREAD **)Blink, a3, a4, 0, (const struct CPointerInputFrame *)v14);
    CTouchProcessor::UnreferenceFrame((__int64)Blink, v14, v18);
    v15 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v16 = 19;
      goto LABEL_17;
    }
  }
  else
  {
    WPP_RECORDER_SF_((__int64)Blink->Blink, 2u, 0xBu, 0x11u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v15 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v16 = 18;
LABEL_17:
      WPP_RECORDER_SF_(
        (__int64)v15->DeviceExtension,
        5u,
        0xBu,
        v16,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v20);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v19);
}
