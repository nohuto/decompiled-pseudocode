/*
 * XREFs of ??1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ @ 0x18029A004
 * Callers:
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18029E8E0 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _XamlLauncher::UnsubscribeFromServices_::_1_::dtor$0 @ 0x18029EAD6 (_XamlLauncher--UnsubscribeFromServices_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041EAC (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall StartWindowTelemetry::UnsubscribeFromServices::~UnsubscribeFromServices(
        StartWindowTelemetry::UnsubscribeFromServices *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::UnsubscribeFromServices::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
