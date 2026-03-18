/*
 * XREFs of ZwUnloadKeyEx @ 0x1401C44B0
 * Callers:
 *     PiDrvDbUnloadHive @ 0x1406F2268 (PiDrvDbUnloadHive.c)
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
