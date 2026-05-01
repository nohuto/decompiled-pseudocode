/*
 * XREFs of ??$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA?AV01@AEA_KAEAPEAUHWND__@@@Z @ 0x18008F004
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180029C10 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180055E44 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180055E44.c)
 *     ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x18008F9D0 (-StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z.c)
 */

IamTraceLogging::OnShellHookMessage *__fastcall IamTraceLogging::OnShellHookMessage::Start<unsigned __int64 &,HWND__ * &>(
        IamTraceLogging::OnShellHookMessage *this,
        unsigned __int64 *a2,
        HWND *a3)
{
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"OnShellHookMessage");
  *(_QWORD *)this = &IamTraceLogging::OnShellHookMessage::`vftable';
  IamTraceLogging::OnShellHookMessage::StartActivity(this, *a2, *a3);
  return this;
}
