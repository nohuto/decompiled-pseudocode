/*
 * XREFs of ??$SpatialInputController_Added@KPEB_WGGG@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAK$$QEAPEB_W$$QEAG22@Z @ 0x1800DF9BC
 * Callers:
 *     ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800E22E4 (-FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8450 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?SpatialInputController_Added_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_WGGG@Z @ 0x1800E4878 (-SpatialInputController_Added_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_WGGG.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Added<unsigned long,wchar_t const *,unsigned short,unsigned short,unsigned short>(
        unsigned int *a1,
        const wchar_t *const *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5)
{
  __int64 v9; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v10; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v9,
      (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Added_(v10, *a1, *a2, *a3, *a4, *a5);
  }
}
