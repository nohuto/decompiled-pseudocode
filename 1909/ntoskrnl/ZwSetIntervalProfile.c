/*
 * XREFs of ZwSetIntervalProfile @ 0x1401C3F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE ClockSource)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Interval);
}
