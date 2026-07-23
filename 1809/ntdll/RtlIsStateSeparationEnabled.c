/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x18007D190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return (MEMORY[0x7FFE02F0] & 0x400) != 0;
}
