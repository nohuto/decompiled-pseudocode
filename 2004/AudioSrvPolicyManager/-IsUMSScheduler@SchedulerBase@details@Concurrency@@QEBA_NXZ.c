/*
 * XREFs of ?IsUMSScheduler@SchedulerBase@details@Concurrency@@QEBA_NXZ @ 0x18002FEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Concurrency::details::SchedulerBase::IsUMSScheduler(Concurrency::details::SchedulerBase *this)
{
  return *((_DWORD *)this + 4) == 1;
}
