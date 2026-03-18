/*
 * XREFs of MiLockPage @ 0x1402D8FA4
 * Callers:
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 *     MiScanPagefileSpace @ 0x14088D120 (MiScanPagefileSpace.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 *     MmAreMdlPagesLocked @ 0x140963E58 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
