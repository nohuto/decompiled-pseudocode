/*
 * XREFs of ?DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z @ 0x18014EE60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014C710 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014CFA4 (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014EDAC (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?StartActivity@DragCancel@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@@Z @ 0x1801523A4 (-StartActivity@DragCancel@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801533E8 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180157204 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CAppViewManager::DragCancel(CAppViewManager *this, const struct _GUID *a2)
{
  _QWORD v5[40]; // [rsp+30h] [rbp-158h] BYREF

  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    (__int64)"DragCancel");
  v5[0] = &AppViewManagerTabTelemetry::DragCancel::`vftable';
  AppViewManagerTabTelemetry::DragCancel::StartActivity((AppViewManagerTabTelemetry::DragCancel *)v5, a2);
  CAppViewManager::_ObliterateOperation((CAppViewManager *)((char *)this - 56), a2);
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
  v5[0] = &AppViewManagerTabTelemetry::DragCancel::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
  return 0LL;
}
