/*
 * XREFs of ??1AudioJournal@@QEAA@XZ @ 0x18005FFB0
 * Callers:
 *     _dynamic_atexit_destructor_for__g_AudioJournal__ @ 0x180070630 (_dynamic_atexit_destructor_for__g_AudioJournal__.c)
 * Callees:
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800AFA90 (--1CSerialWorkQueue@@QEAA@XZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800B2CBC (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800EA274 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

void __fastcall AudioJournal::~AudioJournal(AudioJournal *this)
{
  unsigned int v1; // edx

  CSerialWorkQueue::Shutdown((CSerialWorkQueue *)&unk_1801B3C40);
  if ( qword_1801B3CE8 )
    _RecurringTask::`scalar deleting destructor'(qword_1801B3CE8, v1);
  CSerialWorkQueue::~CSerialWorkQueue((CSerialWorkQueue *)&unk_1801B3C40);
  DeleteCriticalSection(&CriticalSection);
}
