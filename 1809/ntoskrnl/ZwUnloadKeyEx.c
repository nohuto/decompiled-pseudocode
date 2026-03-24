/*
 * XREFs of ZwUnloadKeyEx @ 0x1401BB9D0
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140683760 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey, Event, v2);
}
