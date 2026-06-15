/*
 * XREFs of ??0AudioJournal@@QEAA@XZ @ 0x180050064
 * Callers:
 *     _dynamic_initializer_for__g_AudioJournal__ @ 0x1800012C0 (_dynamic_initializer_for__g_AudioJournal__.c)
 * Callees:
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x18004FCC0 (-Initialize@AudioJournal@@AEAAJXZ.c)
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x1800500D4 (--0CSerialWorkQueue@@QEAA@XZ.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
AudioJournal *__fastcall AudioJournal::AudioJournal(AudioJournal *this)
{
  AudioJournal *v1; // rcx

  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  CSerialWorkQueue::CSerialWorkQueue((CSerialWorkQueue *)&unk_1801B7CE0);
  qword_1801B7D88 = 0LL;
  memset_0(&word_1801B8248, 0, 0x208uLL);
  AudioJournal::Initialize(v1);
  return (AudioJournal *)&g_AudioJournal;
}
