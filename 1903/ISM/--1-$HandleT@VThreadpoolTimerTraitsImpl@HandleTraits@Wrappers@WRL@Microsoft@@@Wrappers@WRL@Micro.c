/*
 * XREFs of ??1?$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180163130
 * Callers:
 *     _ThreadpoolTimerHelpers::KeepAliveTimer::KeepAliveTimer_::_1_::dtor$1 @ 0x180162BA5 (_ThreadpoolTimerHelpers--KeepAliveTimer--KeepAliveTimer_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::~HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>(
        _QWORD *a1)
{
  *a1 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  return Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::Close(a1);
}
