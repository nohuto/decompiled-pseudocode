/*
 * XREFs of CmpProtectPool @ 0x1400EC9C8
 * Callers:
 *     HvpFreeBin @ 0x14068C38C (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x1400ECB9C (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(__int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4LL);
}
