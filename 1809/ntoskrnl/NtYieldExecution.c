/*
 * XREFs of NtYieldExecution @ 0x1400D65B0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x1400D65D0 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0LL);
}
