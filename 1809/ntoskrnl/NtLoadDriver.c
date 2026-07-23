/*
 * XREFs of NtLoadDriver @ 0x1406C79D0
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140135570 (IopLoadDriverImage.c)
 */

NTSTATUS __stdcall NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
