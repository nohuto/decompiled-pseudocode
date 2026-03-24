/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x140893EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsMultiUsersInSessionSku()
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
