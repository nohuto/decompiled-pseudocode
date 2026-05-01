/*
 * XREFs of ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032C9D8
 * Callers:
 *     _lambda_6f5f86943447a9eee0358fb4a1366934_::operator() @ 0x1800AAA78 (_lambda_6f5f86943447a9eee0358fb4a1366934_--operator().c)
 *     __lambda_6f5f86943447a9eee0358fb4a1366934_::operator()_::_1_::dtor$3 @ 0x1800AAE3F (__lambda_6f5f86943447a9eee0358fb4a1366934_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18032DA04 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated(
        TouchKeyboardExperienceTelemetryLogger::OnViewCreated *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
