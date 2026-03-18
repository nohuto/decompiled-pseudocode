/*
 * XREFs of MiSizeMemoryListLocks @ 0x1406F032C
 * Callers:
 *     MmCreatePartition @ 0x14019A610 (MmCreatePartition.c)
 *     MiInitializeMirroring @ 0x1409F1724 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140465AB4 + 27);
}
