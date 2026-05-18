/*
 * XREFs of sub_18009BA78 @ 0x18009BA78
 * Callers:
 *     sub_1800C640C @ 0x1800C640C (sub_1800C640C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18009BA78(unsigned __int64 a1, char a2)
{
  int v2; // eax

  if ( a1 < 0x20 )
  {
    v2 = 1 << a1;
    if ( a2 )
      dword_18025D764 |= v2;
    else
      dword_18025D764 &= ~v2;
  }
}
