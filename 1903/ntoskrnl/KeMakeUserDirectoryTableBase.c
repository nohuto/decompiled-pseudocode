/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x1400E31E0
 * Callers:
 *     MiDeleteProcessShadow @ 0x1400AD220 (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x14018EB24 (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x14068D5F8 (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
