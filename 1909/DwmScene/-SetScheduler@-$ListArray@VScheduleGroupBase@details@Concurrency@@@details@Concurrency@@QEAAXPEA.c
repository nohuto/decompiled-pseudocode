/*
 * XREFs of ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x180064564
 * Callers:
 *     sub_18007636C @ 0x18007636C (sub_18007636C.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a1 + 72) = a2;
}
