/*
 * XREFs of ??1AudioJournal@@QEAA@XZ @ 0x1800645CC
 * Callers:
 *     _dynamic_atexit_destructor_for__g_AudioJournal__ @ 0x180074B30 (_dynamic_atexit_destructor_for__g_AudioJournal__.c)
 * Callees:
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800BDFC8 (--1CSerialWorkQueue@@QEAA@XZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800C102C (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800F5BC8 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

void __fastcall AudioJournal::~AudioJournal(AudioJournal *this)
{
  unsigned int v1; // edx

  CSerialWorkQueue::Shutdown((CSerialWorkQueue *)&unk_1801B7CE0);
  if ( qword_1801B7D88 )
    _RecurringTask::`scalar deleting destructor'(qword_1801B7D88, v1);
  CSerialWorkQueue::~CSerialWorkQueue((CSerialWorkQueue *)&unk_1801B7CE0);
  DeleteCriticalSection(&CriticalSection);
}
