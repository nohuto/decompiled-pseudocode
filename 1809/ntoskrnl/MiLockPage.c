/*
 * XREFs of MiLockPage @ 0x1402BF8E0
 * Callers:
 *     MiScanPagefileSpace @ 0x140854690 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x140925CC8 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
