/*
 * XREFs of ??$ControllerHapticsStatistics@AEAKAEAJAEAJAEAN@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAKAEAJ1AEAN@Z @ 0x180161DA8
 * Callers:
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180163290 (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8690 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?ControllerHapticsStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKJJN@Z @ 0x180164B84 (-ControllerHapticsStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKJJN@Z.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerHapticsStatistics<unsigned long &,long &,long &,double &>(
        unsigned int *a1,
        int *a2,
        int *a3,
        double *a4)
{
  __int64 v8; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v9; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v8,
      (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::ControllerHapticsStatistics_(v9, *a1, *a2, *a3, *a4);
  }
}
