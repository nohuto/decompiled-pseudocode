/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x14008F460
 * Callers:
 *     MiDeleteProcessShadow @ 0x14008EB30 (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x14018F434 (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x14064495C (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
