/*
 * XREFs of ?SetQueueLength@SchedulerProxy@details@Concurrency@@QEAAXI@Z @ 0x1800B0F54
 * Callers:
 *     sub_1800C62FC @ 0x1800C62FC (sub_1800C62FC.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::SchedulerProxy::SetQueueLength(
        Concurrency::details::SchedulerProxy *this,
        int a2)
{
  *((_DWORD *)this + 42) = a2;
}
