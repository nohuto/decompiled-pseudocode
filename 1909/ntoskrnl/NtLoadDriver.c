/*
 * XREFs of NtLoadDriver @ 0x14070A520
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140153F4C (IopLoadDriverImage.c)
 */

NTSTATUS __stdcall NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
