/*
 * XREFs of NtLoadDriver @ 0x1406C6750
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140135480 (IopLoadDriverImage.c)
 */

NTSTATUS __stdcall NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
