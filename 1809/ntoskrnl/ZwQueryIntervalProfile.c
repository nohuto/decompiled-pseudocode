/*
 * XREFs of ZwQueryIntervalProfile @ 0x1401BAAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryIntervalProfile(KPROFILE_SOURCE ProfileSource, PULONG Interval)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ProfileSource, Interval, v2);
}
