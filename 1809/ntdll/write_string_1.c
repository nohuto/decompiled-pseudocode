/*
 * XREFs of write_string_1 @ 0x18009C7A0
 * Callers:
 *     _output_s @ 0x18009BCA0 (_output_s.c)
 * Callees:
 *     write_char_1 @ 0x18009C6F0 (write_char_1.c)
 */

int __fastcall write_string_1(char *a1, int a2, FILE *a3, _DWORD *a4)
{
  int result; // eax
  int v7; // ebx

  result = a3->_flag;
  v7 = a2;
  if ( (result & 0x40) == 0 || a3->_base )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v7;
        result = write_char_1(*a1++, a3, a4);
      }
      while ( *a4 != -1 && v7 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
