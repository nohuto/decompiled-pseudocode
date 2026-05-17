/*
 * XREFs of _fgetwc_nolock @ 0x18009BE84
 * Callers:
 *     ReadString_1 @ 0x18009AFB8 (ReadString_1.c)
 *     _whiteout @ 0x18009B454 (_whiteout.c)
 *     _winput_s @ 0x18009B4AC (_winput_s.c)
 * Callees:
 *     _filwbuf_s @ 0x180084260 (_filwbuf_s.c)
 *     _invalid_parameter @ 0x18008CD78 (_invalid_parameter.c)
 */

wint_t __cdecl fgetwc_nolock(FILE *Stream)
{
  wint_t result; // ax
  bool v3; // sf
  char *ptr; // rcx

  if ( Stream )
  {
    v3 = Stream->_cnt - 2 < 0;
    Stream->_cnt -= 2;
    if ( v3 )
    {
      return filwbuf_s();
    }
    else
    {
      ptr = Stream->_ptr;
      result = *(_WORD *)ptr;
      Stream->_ptr = ptr + 2;
    }
  }
  else
  {
    invalid_parameter();
    return -1;
  }
  return result;
}
