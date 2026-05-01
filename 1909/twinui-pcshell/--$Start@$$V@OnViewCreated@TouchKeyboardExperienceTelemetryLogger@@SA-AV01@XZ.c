/*
 * XREFs of ??$Start@$$V@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x18032BBAC
 * Callers:
 *     _lambda_6f5f86943447a9eee0358fb4a1366934_::operator() @ 0x1800AAA78 (_lambda_6f5f86943447a9eee0358fb4a1366934_--operator().c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032BCCC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?StartActivity@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180334AD8 (-StartActivity@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

TouchKeyboardExperienceTelemetryLogger::OnViewCreated *__fastcall TouchKeyboardExperienceTelemetryLogger::OnViewCreated::Start<>(
        TouchKeyboardExperienceTelemetryLogger::OnViewCreated *this)
{
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::StartActivity(this);
  return this;
}
