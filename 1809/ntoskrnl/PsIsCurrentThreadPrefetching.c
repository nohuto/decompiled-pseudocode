/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x1401190D0
 * Callers:
 *     MiShareExistingControlArea @ 0x1405DFC94 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
