/*
 * XREFs of ?SetQueueLength@SchedulerProxy@details@Concurrency@@QEAAXI@Z @ 0x1800B1064
 * Callers:
 *     sub_1800C640C @ 0x1800C640C (sub_1800C640C.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::SchedulerProxy::SetQueueLength(
        Concurrency::details::SchedulerProxy *this,
        int a2)
{
  *((_DWORD *)this + 42) = a2;
}
