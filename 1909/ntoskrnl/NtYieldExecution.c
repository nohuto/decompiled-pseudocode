/*
 * XREFs of NtYieldExecution @ 0x140108D40
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x140108D60 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0LL);
}
