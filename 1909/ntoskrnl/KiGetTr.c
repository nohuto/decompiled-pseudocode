/*
 * XREFs of KiGetTr @ 0x14036CF70
 * Callers:
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140354010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetTr()
{
  __int16 result; // ax

  __asm { str     ax }
  return result;
}
