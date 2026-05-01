/*
 * XREFs of ?TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA?AV12@XZ @ 0x180128A44
 * Callers:
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x180128194 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180040E90 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 */

_QWORD *__fastcall CFramePresentationTelemetry::SplashScreenSuppressed::TransferToCurrentThread(__int64 a1, _QWORD *a2)
{
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)a2,
    a1,
    **(_DWORD **)(a1 + 48) == 1);
  *a2 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  return a2;
}
