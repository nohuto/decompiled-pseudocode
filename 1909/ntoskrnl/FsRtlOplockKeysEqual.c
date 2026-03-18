/*
 * XREFs of FsRtlOplockKeysEqual @ 0x140102760
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x140102780 (FsRtlpOplockBreakByCacheFlags.c)
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x1401034F0 (FsRtlpOplockKeysEqual.c)
 */

BOOLEAN __stdcall FsRtlOplockKeysEqual(PFILE_OBJECT Fo1, PFILE_OBJECT Fo2)
{
  return FsRtlpOplockKeysEqual(Fo1, Fo2, 0LL);
}
