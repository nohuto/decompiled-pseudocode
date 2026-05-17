/*
 * XREFs of sub_18010A234 @ 0x18010A234
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 * Callees:
 *     sub_180102250 @ 0x180102250 (sub_180102250.c)
 *     sub_18010A328 @ 0x18010A328 (sub_18010A328.c)
 */

char __fastcall sub_18010A234(unsigned int a1, int a2)
{
  int v4; // r8d
  char result; // al
  int v6; // ecx

  sub_18010A328();
  v4 = dword_180166070;
  if ( (a1 & 8) != 0 )
  {
    v4 = dword_180166070 | 0x10;
    dword_180166070 |= 0x10u;
  }
  if ( (a1 & 4) != 0 )
  {
    v4 |= 8u;
    dword_180166070 = v4;
  }
  if ( (a2 & 0x100000) != 0 || (a1 & 2) != 0 )
  {
    v4 |= 2u;
    dword_180166070 = v4;
  }
  if ( (v4 & 2) != 0 || (a1 & 1) != 0 )
    dword_180166070 = v4 | 4;
  if ( (a1 & 0xFF00) != 0 )
    dword_1801627A8 = BYTE1(a1);
  if ( (a1 & 0xFFF0000) != 0 )
    dword_180163534 = HIWORD(a1) & 0xFFF;
  if ( (a1 & 0x10) != 0 )
    sub_180102250();
  result = byte_180166058;
  if ( (a1 & 0x20) != 0 )
  {
    result = byte_180166058 | 4;
    byte_180166058 |= 4u;
  }
  v6 = dword_18016273C;
  if ( (a1 & 0x40) != 0 )
    v6 = 0;
  dword_18016273C = v6;
  if ( (a1 & 0x80u) != 0 )
  {
    result |= 8u;
    byte_180166058 = result;
  }
  return result;
}
