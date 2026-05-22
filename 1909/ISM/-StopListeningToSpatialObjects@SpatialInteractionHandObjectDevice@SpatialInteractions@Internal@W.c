/*
 * XREFs of ?StopListeningToSpatialObjects@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800F7060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAllObjects@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJXZ @ 0x1800ECF7C (-RemoveAllObjects@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJXZ.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::StopListeningToSpatialObjects(
        Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 27);
  v2 = Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RemoveAllObjects((RTL_SRWLOCK *)this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B3,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
