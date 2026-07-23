/*
 * XREFs of ZwMakeTemporaryObject @ 0x1401C2D90
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D76C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x14073CBB0 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x140755600 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
