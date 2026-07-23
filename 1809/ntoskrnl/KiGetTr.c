/*
 * XREFs of KiGetTr @ 0x14034B7D0
 * Callers:
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140333010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetTr()
{
  __int16 result; // ax

  __asm { str     ax }
  return result;
}
