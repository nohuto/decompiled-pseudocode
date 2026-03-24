/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x1406E2790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN NtIsSystemResumeAutomatic(void)
{
  return (PopFullWake & 3) == 0;
}
