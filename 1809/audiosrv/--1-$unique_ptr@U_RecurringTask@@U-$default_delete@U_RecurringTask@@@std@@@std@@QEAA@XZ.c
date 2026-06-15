/*
 * XREFs of ??1?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAA@XZ @ 0x1800EA000
 * Callers:
 *     _CSerialWorkQueue::QueueRecurringItem_::_1_::dtor$2 @ 0x18006F2FB (_CSerialWorkQueue--QueueRecurringItem_--_1_--dtor$2.c)
 *     _AudioJournal::AudioJournal_::_1_::dtor$2 @ 0x18006F35D (_AudioJournal--AudioJournal_--_1_--dtor$2.c)
 * Callees:
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800EA274 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<_RecurringTask>::~unique_ptr<_RecurringTask>(_RecurringTask **a1, unsigned int a2)
{
  _RecurringTask *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return _RecurringTask::`scalar deleting destructor'(v2, a2);
  return result;
}
