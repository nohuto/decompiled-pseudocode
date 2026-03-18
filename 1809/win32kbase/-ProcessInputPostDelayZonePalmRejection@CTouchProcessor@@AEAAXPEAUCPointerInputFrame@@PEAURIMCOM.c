/*
 * XREFs of ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0141C10
 * Callers:
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0137B70 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0141A34 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0137CA8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0140910 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 */

void __fastcall CTouchProcessor::ProcessInputPostDelayZonePalmRejection(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct RIMCOMPLETEFRAME *a3)
{
  __int64 v5; // rax
  struct RIMCOMPLETEFRAME *v6; // r9
  __int64 v7; // r8
  const struct CPointerInputFrame *v8; // rax
  const struct RIMCOMPLETEFRAME *v9; // rdx
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x23u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v5 = HMValidateHandleNoSecure(*((_QWORD *)a2 + 8), 19);
  if ( v5 )
    v7 = *(unsigned int *)(v5 + 1180);
  else
    v7 = 0LL;
  v8 = CTouchProcessor::PopulateReferencedInputFrame(this, a2, v7, v6);
  if ( v8 )
  {
    CTouchProcessor::DoContactVisualizationAndGenerateMessages(
      this,
      v9,
      v8,
      *((void **)v8 + 8),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v8 + 15) + 308LL), 6),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v8 + 15) + 308LL), 7),
      0);
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return;
    v11 = 38;
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0x24u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return;
    v11 = 37;
  }
  WPP_RECORDER_SF_(
    (__int64)v10->DeviceExtension,
    5u,
    0xBu,
    v11,
    (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
}
