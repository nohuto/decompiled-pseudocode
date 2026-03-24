/*
 * XREFs of KiGetTr @ 0x14034A7D0
 * Callers:
 *     sub_1401A1740 @ 0x1401A1740 (sub_1401A1740.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140332010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetTr()
{
  __int16 result; // ax

  __asm { str     ax }
  return result;
}
