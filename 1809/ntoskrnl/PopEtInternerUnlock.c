/*
 * XREFs of PopEtInternerUnlock @ 0x1406C8CC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 */

void PopEtInternerUnlock()
{
  PopReleaseRwLock(PopEtGlobals + 40);
}
