/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x14013CF80
 * Callers:
 *     MiDeleteProcessShadow @ 0x1400686D0 (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x14015DE64 (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406D1B0C (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
