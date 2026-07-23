/*
 * XREFs of _fputwc_nolock @ 0x180099DC8
 * Callers:
 *     write_char_0 @ 0x180097748 (write_char_0.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 */

wint_t __cdecl fputwc_nolock(wchar_t Character, FILE *Stream)
{
  wint_t result; // ax
  bool v3; // sf

  if ( Stream )
  {
    v3 = Stream->_cnt - 2 < 0;
    Stream->_cnt -= 2;
    if ( v3 )
    {
      return flswbuf(Character);
    }
    else
    {
      *(_WORD *)Stream->_ptr = Character;
      result = Character;
      Stream->_ptr += 2;
    }
  }
  else
  {
    invalid_parameter();
    return -1;
  }
  return result;
}
