/*
 * XREFs of ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x1800BD470
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x1800BD4E8 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800BDDD4 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x1800BD360 (--1AudioEffectsWatcher@@QEAA@XZ.c)
 */

AudioEffectsWatcher *__fastcall AudioEffectsWatcher::`scalar deleting destructor'(AudioEffectsWatcher *this)
{
  AudioEffectsWatcher::~AudioEffectsWatcher(this);
  operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
