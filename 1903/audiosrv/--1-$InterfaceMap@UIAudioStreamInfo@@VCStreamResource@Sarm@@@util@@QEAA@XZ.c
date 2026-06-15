/*
 * XREFs of ??1?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAA@XZ @ 0x18011F23C
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$5 @ 0x18006CD2F (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::~InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>(
        __int64 a1)
{
  return ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAll(a1);
}
