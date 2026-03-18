/*
 * XREFs of ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C00AA358
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C001CF20 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001D520 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 */

__int64 __fastcall XEPALOBJ::DecShareRefCountAndInvalidatePalette(struct OBJECT **this)
{
  __int64 result; // rax

  result = DEC_SHARE_REF_CNT(*this);
  *this = 0LL;
  return result;
}
