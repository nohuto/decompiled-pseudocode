/*
 * XREFs of ??1?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAA@XZ @ 0x18011EDAC
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$4 @ 0x180072A80 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::~InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>(
        __int64 a1)
{
  return ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAll(a1);
}
