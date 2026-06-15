/*
 * XREFs of ??1AudioJournal@@QEAA@XZ @ 0x1800635DC
 * Callers:
 *     _dynamic_atexit_destructor_for__g_AudioJournal__ @ 0x180073AF0 (_dynamic_atexit_destructor_for__g_AudioJournal__.c)
 * Callees:
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800BE498 (--1CSerialWorkQueue@@QEAA@XZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800C14DC (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800F6078 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

void __fastcall AudioJournal::~AudioJournal(AudioJournal *this)
{
  unsigned int v1; // edx

  CSerialWorkQueue::Shutdown((CSerialWorkQueue *)&unk_1801B8CE0);
  if ( qword_1801B8D88 )
    _RecurringTask::`scalar deleting destructor'(qword_1801B8D88, v1);
  CSerialWorkQueue::~CSerialWorkQueue((CSerialWorkQueue *)&unk_1801B8CE0);
  DeleteCriticalSection(&CriticalSection);
}
