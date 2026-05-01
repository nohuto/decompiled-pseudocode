/*
 * XREFs of ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$00@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18018B8CC
 * Callers:
 *     ?TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z @ 0x18018D0A4 (-TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,1>::Destroy(PTP_TIMER pti)
{
  SetThreadpoolTimer(pti, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(pti, 0);
  CloseThreadpoolTimer(pti);
}
