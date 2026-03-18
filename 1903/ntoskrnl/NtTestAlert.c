/*
 * XREFs of NtTestAlert @ 0x1406D9B50
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x14001BBA0 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
