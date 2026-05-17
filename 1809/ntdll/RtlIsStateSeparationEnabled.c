/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x18007D180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsStateSeparationEnabled()
{
  return (MEMORY[0x7FFE02F0] & 0x400) != 0;
}
