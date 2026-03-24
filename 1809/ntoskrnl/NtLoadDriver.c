/*
 * XREFs of NtLoadDriver @ 0x1406C6730
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x1401354A0 (IopLoadDriverImage.c)
 */

NTSTATUS __stdcall NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
