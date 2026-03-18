/*
 * XREFs of write_string @ 0x1C00BC088
 * Callers:
 *     _output_l @ 0x1C00BB7B8 (_output_l.c)
 * Callees:
 *     write_char @ 0x1C00BBFD8 (write_char.c)
 */

int __fastcall write_string(char *a1, int a2, FILE *a3, _DWORD *a4)
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
        result = write_char(*a1++, a3, a4);
        if ( *a4 == -1 )
        {
          if ( gbl_errno != 42 )
            return result;
          result = write_char(63, a3, a4);
        }
      }
      while ( v7 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
