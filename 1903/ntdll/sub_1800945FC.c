/*
 * XREFs of sub_1800945FC @ 0x1800945FC
 * Callers:
 *     sub_1800946BC @ 0x1800946BC (sub_1800946BC.c)
 * Callees:
 *     sub_180095788 @ 0x180095788 (sub_180095788.c)
 */

_BOOL8 __fastcall sub_1800945FC(char a1, __int16 a2)
{
  int v3; // ebx

  v3 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a2 & 0x80u) != 0 )
  {
    sub_180095788(1LL);
    v3 &= ~8u;
  }
  else if ( (a1 & 4) != 0 && (a2 & 0x200) != 0 )
  {
    sub_180095788(4LL);
    v3 &= ~4u;
  }
  else if ( (a1 & 1) != 0 && (a2 & 0x400) != 0 )
  {
    sub_180095788(8LL);
    v3 &= ~1u;
  }
  else if ( (a1 & 2) != 0 && (a2 & 0x800) != 0 )
  {
    if ( (a1 & 0x10) != 0 )
      sub_180095788(16LL);
    v3 &= ~2u;
  }
  if ( (a1 & 0x10) != 0 && (a2 & 0x1000) != 0 )
  {
    sub_180095788(32LL);
    v3 &= ~0x10u;
  }
  return v3 == 0;
}
