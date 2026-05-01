/*
 * XREFs of ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x18016F804
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c33ccc33460f714f139ac7c6d94dc43a___ @ 0x18016F2AC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c33ccc33460f714f139ac7c6d94dc43a___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be511633a1c3fc9433c6a1507838a6b9___::_scalar_deleting_destructor_ @ 0x18016FBC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_be511633a1c3fc9433c6a1507838a6b9___--_scala.c)
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801713D0 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180034628 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow(
        CFramePresentationTelemetry::UnpresentWindow *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
