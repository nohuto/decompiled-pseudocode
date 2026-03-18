/*
 * XREFs of ZwMakeTemporaryObject @ 0x1401BA290
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38EC (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x14070EBE0 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x14073A0B0 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Handle, v1, v2);
}
