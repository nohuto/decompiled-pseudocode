/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x1800AF8D0
 * Callers:
 *     _CSerialWorkQueue::TimerCallback_::_1_::dtor$0 @ 0x18006A480 (_CSerialWorkQueue--TimerCallback_--_1_--dtor$0.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x18006D170 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x18006D390 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$1.c)
 *     _CPdcActivationClient::ActivatorCallback_::_1_::dtor$0 @ 0x1800EF103 (_CPdcActivationClient--ActivatorCallback_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$2 @ 0x1800EFB9A (_CCaptureNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x1801158C6 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$1.c)
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
