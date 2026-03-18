/*
 * XREFs of PopEtInternerUnlock @ 0x1406E7FB0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 */

void PopEtInternerUnlock()
{
  PopReleaseRwLock(PopEtGlobals + 40);
}
