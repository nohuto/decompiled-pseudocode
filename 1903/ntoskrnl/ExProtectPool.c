/*
 * XREFs of ExProtectPool @ 0x14012494C
 * Callers:
 *     HvpProtectBin @ 0x1406CDA14 (HvpProtectBin.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14012496C (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
