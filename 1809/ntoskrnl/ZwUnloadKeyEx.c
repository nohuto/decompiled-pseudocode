/*
 * XREFs of ZwUnloadKeyEx @ 0x1401BBB30
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140684920 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
