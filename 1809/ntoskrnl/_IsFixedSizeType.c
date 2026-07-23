/*
 * XREFs of _IsFixedSizeType @ 0x14011CB14
 * Callers:
 *     _PnpValidatePropertyData @ 0x1406A4464 (_PnpValidatePropertyData.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsFixedSizeType(__int16 a1)
{
  unsigned int v1; // ecx

  v1 = a1 & 0xFFF;
  return v1 < 0x12 || v1 > 0x14 && v1 != 25;
}
