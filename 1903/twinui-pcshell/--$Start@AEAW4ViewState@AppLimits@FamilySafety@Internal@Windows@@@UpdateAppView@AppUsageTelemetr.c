/*
 * XREFs of ??$Start@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@UpdateAppView@AppUsageTelemetry@@SA?AV01@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800A6D68
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x1800A8EB0 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800AD89C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??0?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800A7874 (--0-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ?StartActivity@UpdateAppView@AppUsageTelemetry@@QEAAXI@Z @ 0x1800A8650 (-StartActivity@UpdateAppView@AppUsageTelemetry@@QEAAXI@Z.c)
 */

AppUsageTelemetry::UpdateAppView *__fastcall AppUsageTelemetry::UpdateAppView::Start<enum Windows::Internal::FamilySafety::AppLimits::ViewState &>(
        AppUsageTelemetry::UpdateAppView *this,
        unsigned int *a2)
{
  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &AppUsageTelemetry::UpdateAppView::`vftable';
  AppUsageTelemetry::UpdateAppView::StartActivity(this, *a2);
  return this;
}
