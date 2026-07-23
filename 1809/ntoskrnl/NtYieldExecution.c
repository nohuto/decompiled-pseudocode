/*
 * XREFs of NtYieldExecution @ 0x1400D6630
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x1400D6650 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0LL);
}
