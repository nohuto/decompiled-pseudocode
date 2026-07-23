/*
 * XREFs of CmpProtectPool @ 0x14013B48C
 * Callers:
 *     HvpFreeBin @ 0x1406D1230 (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14000DED8 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4u);
}
