/*
 * XREFs of ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180065128
 * Callers:
 *     ?GetPenEventsDispatcher@BamoInputSystemProxy@@UEAAPEAVBamoPenEventsDispatcherProxy@@XZ @ 0x18002E770 (-GetPenEventsDispatcher@BamoInputSystemProxy@@UEAAPEAVBamoPenEventsDispatcherProxy@@XZ.c)
 *     ?GetSystemButtonEventController@BamoInputSiteElementProxy@@UEAAPEAVBamoSystemButtonEventControllerProxy@@XZ @ 0x18002F750 (-GetSystemButtonEventController@BamoInputSiteElementProxy@@UEAAPEAVBamoSystemButtonEventControll.c)
 *     ?GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x18005D7A0 (-GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetControllerNavigationManager@BamoInputSystemProxy@@UEAAPEAVBamoControllerNavigationManagerProxy@@XZ @ 0x18005D7D0 (-GetControllerNavigationManager@BamoInputSystemProxy@@UEAAPEAVBamoControllerNavigationManagerPro.c)
 *     ?GetDragNDropContextualProcessor@BamoInputSystemProxy@@UEAAPEAVBamoDragNDropContextualProcessorProxy@@XZ @ 0x18005D800 (-GetDragNDropContextualProcessor@BamoInputSystemProxy@@UEAAPEAVBamoDragNDropContextualProcessorP.c)
 *     ?GetEdgyControllerServer@BamoInputSystemProxy@@UEAAPEAVBamoEdgyControllerServerProxy@@XZ @ 0x18005D830 (-GetEdgyControllerServer@BamoInputSystemProxy@@UEAAPEAVBamoEdgyControllerServerProxy@@XZ.c)
 *     ?GetMagnifierServer@BamoInputSystemProxy@@UEAAPEAVBamoMagnifierServerProxy@@XZ @ 0x18005D8E0 (-GetMagnifierServer@BamoInputSystemProxy@@UEAAPEAVBamoMagnifierServerProxy@@XZ.c)
 *     ?GetHeatGripService@BamoInputSystemProxy@@UEAAPEAVBamoHeatGripServiceProxy@@XZ @ 0x18005D910 (-GetHeatGripService@BamoInputSystemProxy@@UEAAPEAVBamoHeatGripServiceProxy@@XZ.c)
 *     ?GetInputDeliveryServer@BamoInputSystemProxy@@UEAAPEAVBamoInputDeliveryServerProxy@@XZ @ 0x18005D9C0 (-GetInputDeliveryServer@BamoInputSystemProxy@@UEAAPEAVBamoInputDeliveryServerProxy@@XZ.c)
 *     ?GetInputObserverManager@BamoInputSystemProxy@@UEAAPEAVBamoInputObserverManagerProxy@@XZ @ 0x18005D9F0 (-GetInputObserverManager@BamoInputSystemProxy@@UEAAPEAVBamoInputObserverManagerProxy@@XZ.c)
 *     ?GetInputSiteManager@BamoInputSystemProxy@@UEAAPEAVBamoInputSiteManagerProxy@@XZ @ 0x18005DA20 (-GetInputSiteManager@BamoInputSystemProxy@@UEAAPEAVBamoInputSiteManagerProxy@@XZ.c)
 *     ?GetPenDeviceManager@BamoInputSystemProxy@@UEAAPEAVBamoPenDeviceManagerProxy@@XZ @ 0x18005DB50 (-GetPenDeviceManager@BamoInputSystemProxy@@UEAAPEAVBamoPenDeviceManagerProxy@@XZ.c)
 *     ?GetSystemCursorController@BamoInputSystemProxy@@UEAAPEAVBamoSystemCursorControllerProxy@@XZ @ 0x18005DBD0 (-GetSystemCursorController@BamoInputSystemProxy@@UEAAPEAVBamoSystemCursorControllerProxy@@XZ.c)
 *     ?GetTestCommands@BamoInputSystemProxy@@UEAAPEAVBamoTestCommandsProxy@@XZ @ 0x18005DC00 (-GetTestCommands@BamoInputSystemProxy@@UEAAPEAVBamoTestCommandsProxy@@XZ.c)
 *     ?GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ @ 0x18005DC30 (-GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ.c)
 *     ?GetUIAHitTest@BamoInputSystemProxy@@UEAAPEAVBamoUIAHitTestProxy@@XZ @ 0x18005DC60 (-GetUIAHitTest@BamoInputSystemProxy@@UEAAPEAVBamoUIAHitTestProxy@@XZ.c)
 *     ?GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x18006ECC0 (-GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetResumePosition@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagPOINT@@XZ @ 0x180071220 (-GetResumePosition@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagPOINT@@XZ.c)
 *     ?GetCallbacks@BamoMPCConstantManagerClientStub@@UEAAPEAVBamoMPCConstantManagerClientCallbacksProxy@@XZ @ 0x180089860 (-GetCallbacks@BamoMPCConstantManagerClientStub@@UEAAPEAVBamoMPCConstantManagerClientCallbacksPro.c)
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x1800CFCA0 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x1800CFF00 (-GetBamoDataSourceStub@AnimationDataProvider@@UEBA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180128F44 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  DWORD CurrentThreadId; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CurrentThreadId = GetCurrentThreadId();
  if ( *((_DWORD *)this + 34) != CurrentThreadId && *((_DWORD *)this + 6) != CurrentThreadId )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1426LL,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v3);
    __debugbreak();
  }
}
