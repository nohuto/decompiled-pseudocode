/*
 * XREFs of NtLoadDriver @ 0x140708740
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x1401538AC (IopLoadDriverImage.c)
 */

NTSTATUS __stdcall NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
