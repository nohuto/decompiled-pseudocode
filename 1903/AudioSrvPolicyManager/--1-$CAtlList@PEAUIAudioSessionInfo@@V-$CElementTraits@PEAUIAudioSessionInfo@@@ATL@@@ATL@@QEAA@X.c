/*
 * XREFs of ??1?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C960
 * Callers:
 *     _CDuckingManager::NotifyFilteredClientsAutoDuck_::_1_::dtor$0 @ 0x180036016 (_CDuckingManager--NotifyFilteredClientsAutoDuck_--_1_--dtor$0.c)
 *     _CProcess::CProcess_::_1_::dtor$2 @ 0x180036773 (_CProcess--CProcess_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::~CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>(
        __int64 a1)
{
  return ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(a1);
}
