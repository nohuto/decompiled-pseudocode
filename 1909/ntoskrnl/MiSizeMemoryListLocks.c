/*
 * XREFs of MiSizeMemoryListLocks @ 0x1406F1DCC
 * Callers:
 *     MmCreatePartition @ 0x14019AC70 (MmCreatePartition.c)
 *     MiInitializeMirroring @ 0x1409F1634 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_1404657B4 + 27);
}
