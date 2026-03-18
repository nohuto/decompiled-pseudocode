/*
 * XREFs of WPP_SF_ @ 0x1C0004568
 * Callers:
 *     CiSchedulerWait @ 0x1C00020D0 (CiSchedulerWait.c)
 *     CiSchedulerDeepSleep @ 0x1C0002D60 (CiSchedulerDeepSleep.c)
 *     CiSchedulerThreadFunction @ 0x1C0002FB0 (CiSchedulerThreadFunction.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A240 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000AD10 (CiDispatchCreateMmThreadClient.c)
 *     CiThreadCreate @ 0x1C000AE70 (CiThreadCreate.c)
 *     CiTaskIndexCreate @ 0x1C000B590 (CiTaskIndexCreate.c)
 *     CiDriverUnload @ 0x1C000C360 (CiDriverUnload.c)
 *     CiConfigInitialize @ 0x1C000D280 (CiConfigInitialize.c)
 *     CiSchedulerInitialize @ 0x1C000DD70 (CiSchedulerInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00036F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
