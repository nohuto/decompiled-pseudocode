/*
 * XREFs of ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C016E1FC
 * Callers:
 *     SynthesizeMitTouchInput @ 0x1C018C72C (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C018CA00 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0161A70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0163DC8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C016F4D4 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessInjectedInput(
        CTouchProcessor *this,
        CInpLockGuard *a2,
        struct RIMCOMPLETEFRAME *a3,
        char a4,
        unsigned int a5,
        bool a6)
{
  CTouchProcessor *v6; // rdi
  void *v7; // rbp
  int v10; // edx
  struct CPointerInputFrame *v11; // rax
  int v12; // edx
  struct RIMCOMPLETEFRAME *v13; // r8
  int v14; // edx
  PDEVICE_OBJECT v15; // rcx
  int v16; // r9d
  const struct CPointerInputFrame *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  const struct CPointerInputFrame *v21; // rbx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  CInpLockGuard *v25; // [rsp+78h] [rbp+10h] BYREF

  v25 = a2;
  v6 = gpTouchProcessor;
  v7 = TouchExtensibility::ghInjectionDevice;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)&v25,
    (CTouchProcessor *)((char *)gpTouchProcessor + 48));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      7,
      28,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  v11 = CTouchProcessor::CommitRimCompleteFrame(v6, a3, 0, a4);
  if ( v11 )
  {
    v17 = CTouchProcessor::ReferenceInputFrame(v6, v11, v13, a5);
    v21 = v17;
    if ( v17 )
    {
      if ( *((_DWORD *)v17 + 12) <= *((_DWORD *)v17 + 13) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
      if ( !*((_QWORD *)v21 + 16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
      v22 = (_QWORD *)((char *)v21 + 24);
      v23 = (_QWORD *)((char *)gptiCurrent + 1136);
      v24 = *((_QWORD *)gptiCurrent + 142);
      if ( *(struct tagTHREADINFO **)(v24 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1136) )
        __fastfail(3u);
      *((_QWORD *)v21 + 4) = v23;
      *v22 = v24;
      *(_QWORD *)(v24 + 8) = v22;
      *v23 = v22;
      CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        v6,
        (const struct RIMCOMPLETEFRAME *)v24,
        v21,
        (__int64)v7,
        1,
        0,
        a6);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v16 = 33;
          goto LABEL_23;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v18, 7, 31, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v16 = 32;
          goto LABEL_23;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v12, 7, 29, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = 30;
LABEL_23:
        LOBYTE(v14) = 5;
        WPP_RECORDER_SF_(v15->DeviceExtension, v14, 7, v16, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      }
    }
  }
  CInpLockGuard::UnLock(v25);
}
