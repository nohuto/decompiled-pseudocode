/*
 * XREFs of ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C014280C
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0141860 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0141D28 (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4F8 (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0140910 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::ReferenceInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct RIMCOMPLETEFRAME *a3,
        unsigned int a4)
{
  PDEVICE_OBJECT v7; // rcx
  struct RIMCOMPLETEFRAME *v9; // r9
  const struct CPointerInputFrame *v10; // rbx

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v7 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x27u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( !a2 )
    return 0LL;
  CTouchProcessor::ReferenceFrameInt((__int64)v7, (__int64)a2, (__int64)a3);
  v10 = CTouchProcessor::PopulateReferencedInputFrame((CTouchProcessor *)this, a2, a4, v9);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x28u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  return v10;
}
