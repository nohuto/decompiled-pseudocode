/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D7B1C
 * Callers:
 *     _SpatialInteractionDevices::GetPoseData_::_1_::dtor$0 @ 0x1800D825D (_SpatialInteractionDevices--GetPoseData_--_1_--dtor$0.c)
 *     _SpatialInteractionDevices::OpenBestMatchingControllerKey_::_1_::dtor$0 @ 0x1800D865C (_SpatialInteractionDevices--OpenBestMatchingControllerKey_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReadHapticsEngineParameters_::_1_::dtor$0 @ 0x180167A44 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--ReadHapticsEnginePa.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(
        HKEY *a1)
{
  HKEY v1; // rcx
  LSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return RegCloseKey(v1);
  return result;
}
