/*
 * XREFs of ??1DeferredRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18033D6B0
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18033F534 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     _KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest_::_1_::dtor$0 @ 0x18033F8AD (_KeyboardHosting--TabTipAdapter--ExecuteDeferredRequest_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18032DAA8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_T.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::DeferredRequestExecuted::~DeferredRequestExecuted(
        TouchKeyboardExperienceTelemetryLogger::DeferredRequestExecuted *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::DeferredRequestExecuted::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
