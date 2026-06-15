/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x1800BE274
 * Callers:
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x18006FA90 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$1.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x18006FC00 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CSerialWorkQueue::TimerCallback_::_1_::dtor$0 @ 0x180072CA0 (_CSerialWorkQueue--TimerCallback_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$2 @ 0x1800FBC0C (_CCaptureNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x18012205F (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = _Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
