/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x140119040
 * Callers:
 *     MiShareExistingControlArea @ 0x1405DEC94 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
