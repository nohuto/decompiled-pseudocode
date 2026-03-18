/*
 * XREFs of KeIsAttachedProcess @ 0x1400B6B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return KeGetCurrentThread()->ApcStateIndex == 1;
}
