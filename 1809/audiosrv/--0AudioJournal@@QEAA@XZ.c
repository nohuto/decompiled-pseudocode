/*
 * XREFs of ??0AudioJournal@@QEAA@XZ @ 0x180049AA4
 * Callers:
 *     _dynamic_initializer_for__g_AudioJournal__ @ 0x180001280 (_dynamic_initializer_for__g_AudioJournal__.c)
 * Callees:
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x180049700 (-Initialize@AudioJournal@@AEAAJXZ.c)
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x180049B14 (--0CSerialWorkQueue@@QEAA@XZ.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
AudioJournal *__fastcall AudioJournal::AudioJournal(AudioJournal *this)
{
  AudioJournal *v1; // rcx

  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  CSerialWorkQueue::CSerialWorkQueue((CSerialWorkQueue *)&unk_1801B3C40);
  qword_1801B3CE8 = 0LL;
  memset_0(&word_1801B41A8, 0, 0x208uLL);
  AudioJournal::Initialize(v1);
  return (AudioJournal *)&g_AudioJournal;
}
