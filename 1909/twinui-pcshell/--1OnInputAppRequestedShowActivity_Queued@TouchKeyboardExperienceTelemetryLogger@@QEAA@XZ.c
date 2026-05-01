/*
 * XREFs of ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032C928
 * Callers:
 *     _lambda_4728da50fba771f61f09ce8410cf9c38_::operator() @ 0x1800AA730 (_lambda_4728da50fba771f61f09ce8410cf9c38_--operator().c)
 *     __lambda_4728da50fba771f61f09ce8410cf9c38_::operator()_::_1_::dtor$1 @ 0x1800AAA4B (__lambda_4728da50fba771f61f09ce8410cf9c38_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18032DA04 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::~OnInputAppRequestedShowActivity_Queued(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
