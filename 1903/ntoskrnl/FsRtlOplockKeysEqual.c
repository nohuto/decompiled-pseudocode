/*
 * XREFs of FsRtlOplockKeysEqual @ 0x1400B7AC0
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400B5CA0 (FsRtlpOplockBreakByCacheFlags.c)
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x1400B6A10 (FsRtlpOplockKeysEqual.c)
 */

BOOLEAN __stdcall FsRtlOplockKeysEqual(PFILE_OBJECT Fo1, PFILE_OBJECT Fo2)
{
  return FsRtlpOplockKeysEqual((__int64)Fo1, (__int64)Fo2, 0);
}
