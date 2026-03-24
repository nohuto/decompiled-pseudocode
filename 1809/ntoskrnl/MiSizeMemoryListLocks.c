/*
 * XREFs of MiSizeMemoryListLocks @ 0x1406D0D20
 * Callers:
 *     MmCreatePartition @ 0x140190970 (MmCreatePartition.c)
 *     MiInitializeMirroring @ 0x1409BCF88 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_14043A08C + 27);
}
