/*
 * XREFs of ??1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18007F5A4
 * Callers:
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180081D40 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007F920 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StopWindowCapture::~StopWindowCapture(
        WindowFrameLoggingTelemetry::StopWindowCapture *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::StopWindowCapture::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
