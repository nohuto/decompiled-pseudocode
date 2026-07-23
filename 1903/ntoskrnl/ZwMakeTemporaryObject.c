/*
 * XREFs of ZwMakeTemporaryObject @ 0x1401C2210
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D78E4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x14073AC50 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
