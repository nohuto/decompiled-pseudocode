/*
 * XREFs of ?SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXI@Z @ 0x1801250E8
 * Callers:
 *     ?OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@634@@Z @ 0x180124660 (-OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Win.c)
 *     ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x1801248BC (--0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@.c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x180127588 (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z @ 0x180122724 (-HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsOutputReportPeriodMicroseconds(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        int a2)
{
  _DWORD *v4; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v5; // rcx

  *((_DWORD *)this + 200) = a2;
  v4 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v4 )
  {
    if ( *v4 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::HapticsOutputReportPeriodMicrosecondsSet_(
        v5,
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3),
        a2);
    }
  }
}
