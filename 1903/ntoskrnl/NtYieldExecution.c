/*
 * XREFs of NtYieldExecution @ 0x140109BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x140109BD0 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0LL);
}
