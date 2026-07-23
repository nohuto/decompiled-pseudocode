/*
 * XREFs of ZwDelayExecution @ 0x1401C12D0
 * Callers:
 *     IovUnloadDrivers @ 0x140963490 (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwDelayExecution(BOOLEAN Alertable, LARGE_INTEGER *Interval)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Alertable);
}
