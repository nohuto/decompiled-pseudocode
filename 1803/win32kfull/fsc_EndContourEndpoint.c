/*
 * XREFs of fsc_EndContourEndpoint @ 0x1C02C3E68
 * Callers:
 *     fsc_FillGlyph @ 0x1C02B6618 (fsc_FillGlyph.c)
 * Callees:
 *     CheckHorizTopology @ 0x1C02C3C08 (CheckHorizTopology.c)
 *     CheckVertTopology @ 0x1C02C3CCC (CheckVertTopology.c)
 */

__int64 __fastcall fsc_EndContourEndpoint(char a1)
{
  __int64 result; // rax

  if ( (dword_1C032FE1C & 0x3F) != 0x20
    || (result = CheckHorizTopology(dword_1C032FE20, dword_1C032FE24, a1), !(_DWORD)result) )
  {
    if ( (a1 & 2) != 0 )
      return 0LL;
    if ( (dword_1C032FE18 & 0x3F) != 0x20 )
      return 0LL;
    result = CheckVertTopology(dword_1C032FE20, dword_1C032FE24, a1);
    if ( !(_DWORD)result )
      return 0LL;
  }
  return result;
}
