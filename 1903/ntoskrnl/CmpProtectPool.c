/*
 * XREFs of CmpProtectPool @ 0x14012492C
 * Callers:
 *     HvpFreeBin @ 0x1406CD9CC (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14012496C (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(__int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4LL);
}
