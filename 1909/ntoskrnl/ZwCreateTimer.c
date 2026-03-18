/*
 * XREFs of ZwCreateTimer @ 0x1401C2410
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14084BE68 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
