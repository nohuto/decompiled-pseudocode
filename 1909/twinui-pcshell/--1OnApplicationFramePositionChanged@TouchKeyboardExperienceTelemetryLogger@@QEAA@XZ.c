/*
 * XREFs of ??1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032C8A4
 * Callers:
 *     _lambda_75fd98ac14c9b18bffd1e748aa36b6a5_::operator() @ 0x1800AAE84 (_lambda_75fd98ac14c9b18bffd1e748aa36b6a5_--operator().c)
 *     __lambda_75fd98ac14c9b18bffd1e748aa36b6a5_::operator()_::_1_::dtor$1 @ 0x1800AAFDD (__lambda_75fd98ac14c9b18bffd1e748aa36b6a5_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18032DA04 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::~OnApplicationFramePositionChanged(
        TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
