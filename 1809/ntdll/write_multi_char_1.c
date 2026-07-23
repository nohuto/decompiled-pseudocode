/*
 * XREFs of write_multi_char_1 @ 0x18009C748
 * Callers:
 *     _output_s @ 0x18009BCA0 (_output_s.c)
 * Callees:
 *     write_char_1 @ 0x18009C6F0 (write_char_1.c)
 */

int __fastcall write_multi_char_1(char a1, int a2, FILE *a3, _DWORD *a4)
{
  int v6; // ebx
  int result; // eax

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      result = write_char_1(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
  return result;
}
