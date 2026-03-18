/*
 * XREFs of ExProtectPool @ 0x14000DEB8
 * Callers:
 *     HvpProtectBin @ 0x1405A2584 (HvpProtectBin.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14000DED8 (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
