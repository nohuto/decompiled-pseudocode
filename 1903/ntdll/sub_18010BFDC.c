/*
 * XREFs of sub_18010BFDC @ 0x18010BFDC
 * Callers:
 *     sub_18009BF80 @ 0x18009BF80 (sub_18009BF80.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall sub_18010BFDC(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int16 v4; // dx
  __int16 result; // ax
  __int16 v6; // dx

  v3 = a2;
  *(_BYTE *)(a2 + a1 - 1) = 0;
  v4 = *(_WORD *)(a2 + a1 - 2);
  if ( a3 == 1 )
  {
    result = 0x8000;
    v6 = v4 | 0x8000;
  }
  else
  {
    result = (a3 ^ v4) & 0x1FFF;
    v6 = result ^ v4;
  }
  *(_WORD *)(v3 + a1 - 2) = v6;
  return result;
}
