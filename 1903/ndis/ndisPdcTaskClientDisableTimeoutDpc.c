/*
 * XREFs of ndisPdcTaskClientDisableTimeoutDpc @ 0x1C0075150
 * Callers:
 *     <none>
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C001B218 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisPdcTaskClientDisableTimeoutDpc(
        PVOID SystemSpecific1,
        PVOID FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  ndisScheduleWorkItemInternal((__int64)FunctionContext + 5616);
}
