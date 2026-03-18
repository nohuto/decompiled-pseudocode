/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x1401160C0
 * Callers:
 *     MiShareExistingControlArea @ 0x1405D4E94 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
