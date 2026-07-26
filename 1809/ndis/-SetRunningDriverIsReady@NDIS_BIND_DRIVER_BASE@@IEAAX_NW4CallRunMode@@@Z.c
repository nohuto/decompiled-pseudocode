/*
 * XREFs of ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00BF684
 * Callers:
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00CD980 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C00CDEC4 (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00BF620 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00BF6DC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(
        NDIS_BIND_DRIVER_BASE *this,
        bool a2,
        enum CallRunMode a3)
{
  void (*v5)(struct NDIS_BIND_LINK_BASE *); // rdx

  this->DriverReady = a2;
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
  NDIS_BIND_DRIVER_BASE::ForEachLink(
    this,
    (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_f4659669a09bc9ccc8248dde096c32cd_::_lambda_invoker_cdecl_);
  v5 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_adb42f86cf839cbbe3c588eaa9665cd9_::_lambda_invoker_cdecl_;
  if ( a3 )
    v5 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_;
  NDIS_BIND_DRIVER_BASE::ForEachLink(this, v5);
  Ndis::BindEngine::EndBindOperation();
}
