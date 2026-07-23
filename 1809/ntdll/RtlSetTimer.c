/*
 * XREFs of RtlSetTimer @ 0x1801113D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlSetTimer(
        HANDLE TimerQueueHandle,
        PHANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG DueTime,
        ULONG Period,
        ULONG Flags)
{
  return RtlCreateTimer(TimerQueueHandle, Handle, Function, Context, DueTime, Period, Flags);
}
