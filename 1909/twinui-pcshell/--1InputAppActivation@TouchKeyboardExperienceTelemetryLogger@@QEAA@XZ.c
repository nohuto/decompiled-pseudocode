/*
 * XREFs of ??1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032C7C8
 * Callers:
 *     _lambda_344d118cde8247a665c09f3d1d41eb56_::operator() @ 0x1800A9F74 (_lambda_344d118cde8247a665c09f3d1d41eb56_--operator().c)
 *     __lambda_344d118cde8247a665c09f3d1d41eb56_::operator()_::_1_::dtor$0 @ 0x1800AA12A (__lambda_344d118cde8247a665c09f3d1d41eb56_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18032DAA8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_T.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivation::~InputAppActivation(
        TouchKeyboardExperienceTelemetryLogger::InputAppActivation *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::InputAppActivation::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
