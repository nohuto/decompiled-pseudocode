/*
 * XREFs of ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180064EC8
 * Callers:
 *     ?GetPenEventsDispatcher@BamoInputSystemProxy@@UEAAPEAVBamoPenEventsDispatcherProxy@@XZ @ 0x18002E450 (-GetPenEventsDispatcher@BamoInputSystemProxy@@UEAAPEAVBamoPenEventsDispatcherProxy@@XZ.c)
 *     ?GetSystemButtonEventController@BamoInputSiteElementProxy@@UEAAPEAVBamoSystemButtonEventControllerProxy@@XZ @ 0x18002F430 (-GetSystemButtonEventController@BamoInputSiteElementProxy@@UEAAPEAVBamoSystemButtonEventControll.c)
 *     ?GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x18005D540 (-GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetControllerNavigationManager@BamoInputSystemProxy@@UEAAPEAVBamoControllerNavigationManagerProxy@@XZ @ 0x18005D570 (-GetControllerNavigationManager@BamoInputSystemProxy@@UEAAPEAVBamoControllerNavigationManagerPro.c)
 *     ?GetDragNDropContextualProcessor@BamoInputSystemProxy@@UEAAPEAVBamoDragNDropContextualProcessorProxy@@XZ @ 0x18005D5A0 (-GetDragNDropContextualProcessor@BamoInputSystemProxy@@UEAAPEAVBamoDragNDropContextualProcessorP.c)
 *     ?GetEdgyControllerServer@BamoInputSystemProxy@@UEAAPEAVBamoEdgyControllerServerProxy@@XZ @ 0x18005D5D0 (-GetEdgyControllerServer@BamoInputSystemProxy@@UEAAPEAVBamoEdgyControllerServerProxy@@XZ.c)
 *     ?GetMagnifierServer@BamoInputSystemProxy@@UEAAPEAVBamoMagnifierServerProxy@@XZ @ 0x18005D680 (-GetMagnifierServer@BamoInputSystemProxy@@UEAAPEAVBamoMagnifierServerProxy@@XZ.c)
 *     ?GetHeatGripService@BamoInputSystemProxy@@UEAAPEAVBamoHeatGripServiceProxy@@XZ @ 0x18005D6B0 (-GetHeatGripService@BamoInputSystemProxy@@UEAAPEAVBamoHeatGripServiceProxy@@XZ.c)
 *     ?GetInputDeliveryServer@BamoInputSystemProxy@@UEAAPEAVBamoInputDeliveryServerProxy@@XZ @ 0x18005D760 (-GetInputDeliveryServer@BamoInputSystemProxy@@UEAAPEAVBamoInputDeliveryServerProxy@@XZ.c)
 *     ?GetInputObserverManager@BamoInputSystemProxy@@UEAAPEAVBamoInputObserverManagerProxy@@XZ @ 0x18005D790 (-GetInputObserverManager@BamoInputSystemProxy@@UEAAPEAVBamoInputObserverManagerProxy@@XZ.c)
 *     ?GetInputSiteManager@BamoInputSystemProxy@@UEAAPEAVBamoInputSiteManagerProxy@@XZ @ 0x18005D7C0 (-GetInputSiteManager@BamoInputSystemProxy@@UEAAPEAVBamoInputSiteManagerProxy@@XZ.c)
 *     ?GetPenDeviceManager@BamoInputSystemProxy@@UEAAPEAVBamoPenDeviceManagerProxy@@XZ @ 0x18005D8F0 (-GetPenDeviceManager@BamoInputSystemProxy@@UEAAPEAVBamoPenDeviceManagerProxy@@XZ.c)
 *     ?GetSystemCursorController@BamoInputSystemProxy@@UEAAPEAVBamoSystemCursorControllerProxy@@XZ @ 0x18005D970 (-GetSystemCursorController@BamoInputSystemProxy@@UEAAPEAVBamoSystemCursorControllerProxy@@XZ.c)
 *     ?GetTestCommands@BamoInputSystemProxy@@UEAAPEAVBamoTestCommandsProxy@@XZ @ 0x18005D9A0 (-GetTestCommands@BamoInputSystemProxy@@UEAAPEAVBamoTestCommandsProxy@@XZ.c)
 *     ?GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ @ 0x18005D9D0 (-GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ.c)
 *     ?GetUIAHitTest@BamoInputSystemProxy@@UEAAPEAVBamoUIAHitTestProxy@@XZ @ 0x18005DA00 (-GetUIAHitTest@BamoInputSystemProxy@@UEAAPEAVBamoUIAHitTestProxy@@XZ.c)
 *     ?GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x18006EA80 (-GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetResumePosition@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagPOINT@@XZ @ 0x180070FE0 (-GetResumePosition@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagPOINT@@XZ.c)
 *     ?GetCallbacks@BamoMPCConstantManagerClientStub@@UEAAPEAVBamoMPCConstantManagerClientCallbacksProxy@@XZ @ 0x180089620 (-GetCallbacks@BamoMPCConstantManagerClientStub@@UEAAPEAVBamoMPCConstantManagerClientCallbacksPro.c)
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x1800CFA60 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x1800CFCC0 (-GetBamoDataSourceStub@AnimationDataProvider@@UEBA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180128F44 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
