/*
 * XREFs of ??1TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18027DEAC
 * Callers:
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$5 @ 0x18027F99A (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$5.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18024DAEC (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_CloakView::~TabViewManager_CloakView(
        TabViewManagerTraceLogging::TabViewManager_CloakView *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_CloakView::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
