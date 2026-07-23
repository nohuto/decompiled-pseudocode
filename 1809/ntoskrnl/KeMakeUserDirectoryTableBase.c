/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x14013D0A0
 * Callers:
 *     MiDeleteProcessShadow @ 0x1400686C0 (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x14015DF84 (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406D2D8C (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
