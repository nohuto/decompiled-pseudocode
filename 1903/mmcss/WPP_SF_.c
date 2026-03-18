/*
 * XREFs of WPP_SF_ @ 0x1C0004360
 * Callers:
 *     CiSchedulerWait @ 0x1C0001160 (CiSchedulerWait.c)
 *     CiSchedulerDeepSleep @ 0x1C0002BF0 (CiSchedulerDeepSleep.c)
 *     CiSchedulerThreadFunction @ 0x1C0002C80 (CiSchedulerThreadFunction.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A210 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000A690 (CiDispatchCreateMmThreadClient.c)
 *     CiThreadCreate @ 0x1C000A7F0 (CiThreadCreate.c)
 *     CiTaskIndexCreate @ 0x1C000ADC0 (CiTaskIndexCreate.c)
 *     CiDriverUnload @ 0x1C000C3A0 (CiDriverUnload.c)
 *     CiConfigInitialize @ 0x1C000D270 (CiConfigInitialize.c)
 *     CiSchedulerInitialize @ 0x1C000DDB0 (CiSchedulerInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003080 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
