/*
 * XREFs of NtTestAlert @ 0x1406247C0
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x1400A2610 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8

  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode, v0, v1) != 0 ? 0x101 : 0;
}
