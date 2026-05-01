/*
 * XREFs of ?DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x180109FA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180107150 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801079B0 (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180109464 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?StartActivity@DragLeave@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x18010C8CC (-StartActivity@DragLeave@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18010D388 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 */

__int64 __fastcall CAppViewManager::DragLeave(CAppViewManager *this, const struct _GUID *a2, struct tagPOINT a3)
{
  struct tagPOINT v5; // [rsp+20h] [rbp-168h] BYREF
  __int64 v6; // [rsp+28h] [rbp-160h]
  _QWORD v7[40]; // [rsp+30h] [rbp-158h] BYREF

  v6 = -2LL;
  v5 = a3;
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"DragLeave");
  v7[0] = &AppViewManagerTabTelemetry::DragLeave::`vftable';
  AppViewManagerTabTelemetry::DragLeave::StartActivity((AppViewManagerTabTelemetry::DragLeave *)v7, a2, &v5);
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
  v7[0] = &AppViewManagerTabTelemetry::DragLeave::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  return 0LL;
}
