/*
 * XREFs of KeIsAttachedProcess @ 0x14005A570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return KeGetCurrentThread()->ApcStateIndex == 1;
}
