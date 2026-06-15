/*
 * XREFs of ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x1800490DC
 * Callers:
 *     _dynamic_initializer_for__TheAudioEffectsWatcherFactory__ @ 0x1800011D0 (_dynamic_initializer_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002D550 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

AudioEffectsWatcherFactory *__fastcall AudioEffectsWatcherFactory::AudioEffectsWatcherFactory(
        AudioEffectsWatcherFactory *this)
{
  AudioEffectsWatcherFactory *result; // rax

  ATL::CCriticalSection::CCriticalSection(&TheAudioEffectsWatcherFactory);
  dword_1801B3BD0 = 10;
  qword_1801B3BA8 = 0LL;
  qword_1801B3BB0 = 0LL;
  result = (AudioEffectsWatcherFactory *)&TheAudioEffectsWatcherFactory;
  qword_1801B3BB8 = 0LL;
  xmmword_1801B3BC0 = 0LL;
  return result;
}
