/*
 * XREFs of ZwUnloadKeyEx @ 0x1401C44B0
 * Callers:
 *     PiDrvDbUnloadHive @ 0x1406F2268 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
