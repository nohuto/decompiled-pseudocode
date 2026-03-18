/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x140117750
 * Callers:
 *     MiShareExistingControlArea @ 0x1405D5654 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x140645C84 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
