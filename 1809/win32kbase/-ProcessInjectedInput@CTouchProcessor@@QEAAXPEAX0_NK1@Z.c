/*
 * XREFs of ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0141860
 * Callers:
 *     SynthesizeMitTouchInput @ 0x1C0156248 (SynthesizeMitTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0137CA8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C014280C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessInjectedInput(
        CTouchProcessor *this,
        void *a2,
        struct RIMCOMPLETEFRAME *a3,
        char a4,
        unsigned int a5,
        bool a6)
{
  __int64 *Blink; // rdi
  void *v7; // rbp
  struct CPointerInputFrame *v10; // rax
  struct RIMCOMPLETEFRAME *v11; // r8
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  const struct CPointerInputFrame *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  const struct CPointerInputFrame *v18; // rbx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  CInpLockGuard *v22[6]; // [rsp+40h] [rbp-48h] BYREF

  Blink = (__int64 *)WPP_MAIN_CB.Queue.ListEntry.Blink;
  v7 = TouchExtensibility::ghInjectionDevice;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v22,
    (struct CInpLockGuard *)&WPP_MAIN_CB.Queue.ListEntry.Blink[3].Blink,
    0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x1Au,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v10 = CTouchProcessor::CommitRimCompleteFrame((CTouchProcessor *)Blink, a3, 0, a4);
  if ( v10 )
  {
    v14 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)Blink, v10, v11, a5);
    v18 = v14;
    if ( v14 )
    {
      if ( *((_DWORD *)v14 + 12) <= *((_DWORD *)v14 + 13) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
      if ( !*((_QWORD *)v18 + 13) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
      v19 = (_QWORD *)((char *)v18 + 24);
      v20 = (_QWORD *)((char *)gptiCurrent + 1120);
      v21 = *((_QWORD *)gptiCurrent + 140);
      if ( *(struct tagTHREADINFO **)(v21 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1120) )
        __fastfail(3u);
      *((_QWORD *)v18 + 4) = v20;
      *v19 = v21;
      *(_QWORD *)(v21 + 8) = v19;
      *v20 = v19;
      CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        (CTouchProcessor *)Blink,
        (const struct RIMCOMPLETEFRAME *)v21,
        v18,
        v7,
        1,
        0,
        a6);
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 31;
        goto LABEL_17;
      }
    }
    else
    {
      WPP_RECORDER_SF_(Blink[1], 2u, 0xBu, 0x1Du, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 30;
        goto LABEL_17;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_(Blink[1], 2u, 0xBu, 0x1Bu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 28;
LABEL_17:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v22);
}
