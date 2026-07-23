/*
 * XREFs of _ungetwc_nolock @ 0x18009EEE4
 * Callers:
 *     ReadString_1 @ 0x18009E00C (ReadString_1.c)
 *     _winput_s @ 0x18009E4C4 (_winput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 */

wint_t __cdecl ungetwc_nolock(wint_t Character, FILE *Stream)
{
  int flag; // r9d
  char *ptr; // rax
  char *v5; // r10
  char *v6; // rax
  int v7; // eax

  if ( !Stream )
  {
    invalid_parameter();
    return -1;
  }
  if ( Character == 0xFFFF )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  ptr = Stream->_ptr;
  v5 = Stream->_base + 2;
  if ( Stream->_ptr < v5 )
  {
    if ( Stream->_cnt || Stream->_bufsiz < 2u )
      return -1;
    Stream->_ptr = v5;
    ptr = v5;
  }
  v6 = ptr - 2;
  Stream->_ptr = v6;
  if ( (flag & 0x40) != 0 )
  {
    if ( *(_WORD *)v6 != Character )
    {
      Stream->_ptr = v6 + 2;
      return -1;
    }
  }
  else
  {
    *(_WORD *)v6 = Character;
  }
  v7 = Stream->_flag;
  Stream->_cnt += 2;
  Stream->_flag = v7 & 0xFFFFFFEE | 1;
  return Character;
}
