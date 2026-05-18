/*
 * XREFs of ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x180064454
 * Callers:
 *     sub_18007625C @ 0x18007625C (sub_18007625C.c)
 *     sub_18007632C @ 0x18007632C (sub_18007632C.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a1 + 72) = a2;
}
