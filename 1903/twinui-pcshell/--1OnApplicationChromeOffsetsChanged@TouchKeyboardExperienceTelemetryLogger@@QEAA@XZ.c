/*
 * XREFs of ??1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18030D3FC
 * Callers:
 *     _lambda_531262642ad094c3078a9cb1af58219e_::operator() @ 0x18009CCB0 (_lambda_531262642ad094c3078a9cb1af58219e_--operator().c)
 *     __lambda_531262642ad094c3078a9cb1af58219e_::operator()_::_1_::dtor$1 @ 0x18009CE09 (__lambda_531262642ad094c3078a9cb1af58219e_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18030E544 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::~OnApplicationChromeOffsetsChanged(
        TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
