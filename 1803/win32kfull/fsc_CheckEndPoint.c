/*
 * XREFs of fsc_CheckEndPoint @ 0x1C02C3D80
 * Callers:
 *     EvaluateSpline @ 0x1C02B5C4C (EvaluateSpline.c)
 *     fsc_FillGlyph @ 0x1C02B6618 (fsc_FillGlyph.c)
 * Callees:
 *     CheckHorizTopology @ 0x1C02C3C08 (CheckHorizTopology.c)
 *     CheckVertTopology @ 0x1C02C3CCC (CheckVertTopology.c)
 */

__int64 __fastcall fsc_CheckEndPoint(int a1, int a2, char a3)
{
  __int64 result; // rax

  if ( (dword_1C032FE1C & 0x3F) == 0x20 )
  {
    if ( dword_1C032FE18 == a1 && dword_1C032FE1C == a2 )
      return 0LL;
    if ( State[0] == 0x7FFFFFFF )
    {
      dword_1C032FE20 = a1;
      dword_1C032FE24 = a2;
    }
    else
    {
      result = CheckHorizTopology(a1, a2, a3);
      if ( (_DWORD)result )
        return result;
    }
  }
  if ( (a3 & 2) == 0 && (dword_1C032FE18 & 0x3F) == 0x20 )
  {
    if ( dword_1C032FE18 == a1 && dword_1C032FE1C == a2 )
      return 0LL;
    if ( State[0] == 0x7FFFFFFF )
    {
      dword_1C032FE20 = a1;
      dword_1C032FE24 = a2;
    }
    else
    {
      result = CheckVertTopology(a1, a2, a3);
      if ( (_DWORD)result )
        return result;
    }
  }
  State[0] = dword_1C032FE18;
  dword_1C032FE14 = dword_1C032FE1C;
  dword_1C032FE1C = a2;
  dword_1C032FE18 = a1;
  return 0LL;
}
