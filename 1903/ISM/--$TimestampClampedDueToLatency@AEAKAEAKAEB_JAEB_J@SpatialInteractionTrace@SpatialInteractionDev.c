/*
 * XREFs of ??$TimestampClampedDueToLatency@AEAKAEAKAEB_JAEB_J@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEB_J1@Z @ 0x18016248C
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x180166C80 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8690 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?TimestampClampedDueToLatency_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_J0@Z @ 0x180168DF0 (-TimestampClampedDueToLatency_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_J0@Z.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::TimestampClampedDueToLatency<unsigned long &,unsigned long &,__int64 const &,__int64 const &>(
        unsigned int *a1,
        unsigned int *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v8; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v9; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v8,
      (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::TimestampClampedDueToLatency_(v9, *a1, *a2, *a3, *a4);
  }
}
