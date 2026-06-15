/*
 * XREFs of ??0AudioJournal@@QEAA@XZ @ 0x18004F1A4
 * Callers:
 *     _dynamic_initializer_for__g_AudioJournal__ @ 0x1800012C0 (_dynamic_initializer_for__g_AudioJournal__.c)
 * Callees:
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x18004EE00 (-Initialize@AudioJournal@@AEAAJXZ.c)
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x18004F214 (--0CSerialWorkQueue@@QEAA@XZ.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
AudioJournal *__fastcall AudioJournal::AudioJournal(AudioJournal *this)
{
  AudioJournal *v1; // rcx

  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  CSerialWorkQueue::CSerialWorkQueue((CSerialWorkQueue *)&unk_1801B8CE0);
  qword_1801B8D88 = 0LL;
  memset_0(&word_1801B9248, 0, 0x208uLL);
  AudioJournal::Initialize(v1);
  return (AudioJournal *)&g_AudioJournal;
}
