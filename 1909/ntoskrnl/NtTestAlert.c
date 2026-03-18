/*
 * XREFs of NtTestAlert @ 0x1406D9C40
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x14001BF90 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
