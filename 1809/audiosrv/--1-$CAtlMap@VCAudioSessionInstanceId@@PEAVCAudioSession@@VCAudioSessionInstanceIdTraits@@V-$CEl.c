/*
 * XREFs of ??1?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x1800C6FB8
 * Callers:
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$2 @ 0x18006BF78 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$2.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$2 @ 0x1800C7481 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::~CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>(
        __int64 a1)
{
  return ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAll(a1);
}
