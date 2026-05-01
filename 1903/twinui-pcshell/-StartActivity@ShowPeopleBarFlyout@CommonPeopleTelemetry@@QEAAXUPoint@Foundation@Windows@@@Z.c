/*
 * XREFs of ?StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z @ 0x180190F7C
 * Callers:
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x180190BB0 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x180191B44 (-get@-$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLog.c)
 *     ?zInternalStart@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180191C40 (-zInternalStart@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl.c)
 */

void __fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::StartActivity(__int64 a1, __int64 a2)
{
  float v3; // xmm6_4
  float v4; // xmm7_4
  __int64 v5; // rcx
  __int64 v6; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  __int64 v10; // [rsp+38h] [rbp-49h] BYREF
  DWORD v11; // [rsp+40h] [rbp-41h] BYREF
  int v12; // [rsp+44h] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v14; // [rsp+68h] [rbp-19h]
  int v15; // [rsp+70h] [rbp-11h]
  int v16; // [rsp+74h] [rbp-Dh]
  DWORD *v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+84h] [rbp+3h]
  int *v20; // [rsp+88h] [rbp+7h]
  int v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+94h] [rbp+13h]
  __int64 *v23; // [rsp+98h] [rbp+17h]
  int v24; // [rsp+A0h] [rbp+1Fh]
  int v25; // [rsp+A4h] [rbp+23h]

  v10 = a2;
  v3 = *(float *)&a2;
  v4 = *((float *)&a2 + 1);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v6 = wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(
         v5,
         lambda_d2dfcefe90c696f2f984ba2092e12d6b_::_lambda_invoker_cdecl_);
  v7 = *(const struct _TlgProvider_t **)(v6 + 8);
  if ( *(_DWORD *)v7 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0x400000000000uLL) )
  {
    v16 = 0;
    v14 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v15 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v11 = CurrentThreadId;
    v17 = &v11;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    v12 = (int)v3;
    v20 = &v12;
    LODWORD(v10) = (int)v4;
    v23 = &v10;
    v9 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v7, &unk_1804C0562, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v9, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
