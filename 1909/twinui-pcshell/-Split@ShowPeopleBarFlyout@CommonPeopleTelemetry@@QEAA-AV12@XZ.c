/*
 * XREFs of ?Split@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x1801AFEE8
 * Callers:
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x1801AFCA0 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1801239E0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801AD2FC (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl_ea_1801AD2FC.c)
 *     ?IncrementExpectedStopCount@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801AE88C (-IncrementExpectedStopCount@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$.c)
 */

struct wil::details::IFailureCallback *__fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::Split(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  const struct wil::FailureInfo *v4; // rdx
  _BYTE v6[152]; // [rsp+20h] [rbp-98h] BYREF

  if ( **(_DWORD **)(a1 + 48) != 1 )
  {
    memset_0(v6, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v6, v4);
  }
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::IncrementExpectedStopCount(a1);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1);
  *(_QWORD *)a2 = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  return a2;
}
