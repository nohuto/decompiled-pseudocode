/*
 * XREFs of ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C016E674
 * Callers:
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0163C70 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C016E420 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0163DC8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C016D0FC (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 */

void __fastcall CTouchProcessor::ProcessInputPostDelayZonePalmRejection(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct RIMCOMPLETEFRAME *a3)
{
  struct CPointerInputFrame *v3; // rbx
  __int64 v5; // rax
  struct RIMCOMPLETEFRAME *v6; // r9
  __int64 v7; // r8
  const struct CPointerInputFrame *v8; // rax
  const struct RIMCOMPLETEFRAME *v9; // rdx
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      40,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  v5 = HMValidateHandleNoSecure(*((_QWORD *)v3 + 8), 19);
  if ( v5 )
    v7 = *(unsigned int *)(v5 + 1324);
  else
    v7 = 0LL;
  v8 = CTouchProcessor::PopulateReferencedInputFrame(this, v3, v7, v6);
  if ( v8 )
  {
    CTouchProcessor::DoContactVisualizationAndGenerateMessages(
      (CTouchProcessor *)this,
      v9,
      v8,
      *((_QWORD *)v8 + 8),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v8 + 18) + 312LL), 4),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v8 + 18) + 312LL), 5),
      0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 43;
        goto LABEL_15;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)v9, 7, 41, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 42;
LABEL_15:
        LOBYTE(v10) = 5;
        WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      }
    }
  }
}
