/*
 * XREFs of ??1?$unique_ptr@V_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@U?$default_delete@V_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@@std@@@std@@QEAA@XZ @ 0x1801E3D90
 * Callers:
 *     _Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::_Callback_::_1_::dtor$0 @ 0x1801EB913 (_Concurrency--details--_DefaultPPLTaskScheduler--_PPLTaskChore--_Callback_--_1_--dtor$0.c)
 * Callees:
 *     ??_G_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@QEAAPEAXI@Z @ 0x1801E4DCC (--_G_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore>::~unique_ptr<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore>(
        Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore **a1,
        unsigned int a2)
{
  Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::`scalar deleting destructor'(v2, a2);
  return result;
}
