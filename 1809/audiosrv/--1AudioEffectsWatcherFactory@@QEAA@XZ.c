/*
 * XREFs of ??1AudioEffectsWatcherFactory@@QEAA@XZ @ 0x18005FEB8
 * Callers:
 *     _dynamic_atexit_destructor_for__TheAudioEffectsWatcherFactory__ @ 0x180070580 (_dynamic_atexit_destructor_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B46A4 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 */

void __fastcall AudioEffectsWatcherFactory::~AudioEffectsWatcherFactory(AudioEffectsWatcherFactory *this)
{
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll(&qword_1801B3BA8);
  DeleteCriticalSection(&TheAudioEffectsWatcherFactory);
}
