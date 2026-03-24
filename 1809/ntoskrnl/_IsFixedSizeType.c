/*
 * XREFs of _IsFixedSizeType @ 0x14011CAA4
 * Callers:
 *     _PnpValidatePropertyData @ 0x1406A31C4 (_PnpValidatePropertyData.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsFixedSizeType(__int16 a1)
{
  unsigned int v1; // ecx

  v1 = a1 & 0xFFF;
  return v1 < 0x12 || v1 > 0x14 && v1 != 25;
}
