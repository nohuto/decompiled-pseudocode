/*
 * XREFs of ?ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180167B44
 * Callers:
 *     ?CreateNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphDriverClient@Holographic@34@@Z @ 0x180164FC0 (-CreateNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Interna.c)
 *     ?ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x180167AE8 (-ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Intern.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?UnregisterCallback@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@QEAAXXZ @ 0x18016910C (-UnregisterCallback@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandlerUnderLock(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  __int64 *v2; // rbx
  Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *v3; // rcx

  v2 = (__int64 *)((char *)this + 736);
  v3 = (Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *)*((_QWORD *)this + 92);
  if ( v3 )
  {
    Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::UnregisterCallback(v3);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v2);
  }
}
