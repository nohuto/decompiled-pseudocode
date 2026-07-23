/*
 * XREFs of ZwMakeTemporaryObject @ 0x1401BA410
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x14070FE60 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x14073B280 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
