/*
 * XREFs of _dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__ @ 0x180037F60
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18000CEFC (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 */

void dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__()
{
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)&qword_18004DC48);
  DeleteCriticalSection(&stru_18004DC20);
}
