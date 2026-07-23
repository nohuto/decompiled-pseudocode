/*
 * XREFs of ZwWaitForMultipleObjects @ 0x1401C17B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwWaitForMultipleObjects(
        ULONG Count,
        HANDLE Object[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Time)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Count);
}
