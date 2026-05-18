/*
 * XREFs of sub_18009B968 @ 0x18009B968
 * Callers:
 *     sub_1800C62FC @ 0x1800C62FC (sub_1800C62FC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18009B968(unsigned __int64 a1, char a2)
{
  int v2; // eax

  if ( a1 < 0x20 )
  {
    v2 = 1 << a1;
    if ( a2 )
      dword_18025C764 |= v2;
    else
      dword_18025C764 &= ~v2;
  }
}
