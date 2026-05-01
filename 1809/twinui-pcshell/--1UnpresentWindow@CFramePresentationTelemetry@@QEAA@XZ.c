/*
 * XREFs of ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180127010
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c95d809369eb2a01accf8ae73ccd45ab___ @ 0x180126AC8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c95d809369eb2a01accf8ae73ccd45ab___.c)
 *     ??_E?$CTaskWrapper@V_lambda_5ce05ca81319de189dd08790f978f8a8_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801273D0 (--_E-$CTaskWrapper@V_lambda_5ce05ca81319de189dd08790f978f8a8_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180128A80 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow(
        CFramePresentationTelemetry::UnpresentWindow *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
