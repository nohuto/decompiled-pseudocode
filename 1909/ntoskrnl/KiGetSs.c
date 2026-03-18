/*
 * XREFs of KiGetSs @ 0x14036CF60
 * Callers:
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140354010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetSs()
{
  return __SS__;
}
