/*
 * XREFs of KiGetLdtr @ 0x14034A7C0
 * Callers:
 *     sub_1401A1740 @ 0x1401A1740 (sub_1401A1740.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140332010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetLdtr()
{
  __int16 result; // ax

  __asm { sldt    ax }
  return result;
}
