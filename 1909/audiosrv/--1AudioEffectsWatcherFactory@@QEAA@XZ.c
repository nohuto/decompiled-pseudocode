/*
 * XREFs of ??1AudioEffectsWatcherFactory@@QEAA@XZ @ 0x1800644D4
 * Callers:
 *     _dynamic_atexit_destructor_for__TheAudioEffectsWatcherFactory__ @ 0x180074A80 (_dynamic_atexit_destructor_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800C2E98 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 */

void __fastcall AudioEffectsWatcherFactory::~AudioEffectsWatcherFactory(AudioEffectsWatcherFactory *this)
{
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll(&qword_1801B7C48);
  DeleteCriticalSection(&TheAudioEffectsWatcherFactory);
}
