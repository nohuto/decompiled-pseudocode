/*
 * XREFs of MiLockPage @ 0x1402D8D04
 * Callers:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiGatherPagefilePages @ 0x14014B04C (MiGatherPagefilePages.c)
 *     MiScanPagefileSpace @ 0x14088C940 (MiScanPagefileSpace.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 *     MmAreMdlPagesLocked @ 0x140963E58 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
