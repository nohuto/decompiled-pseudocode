/*
 * XREFs of ??1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18039E77C
 * Callers:
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x18039FC98 (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003B6E4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall MultitaskingViewTelemetry::ExternalDragDetected::~ExternalDragDetected(
        MultitaskingViewTelemetry::ExternalDragDetected *this)
{
  *(_QWORD *)this = &MultitaskingViewTelemetry::ExternalDragDetected::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
