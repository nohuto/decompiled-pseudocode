/*
 * XREFs of _ungetc_nolock @ 0x180099EA0
 * Callers:
 *     ReadString @ 0x180099074 (ReadString.c)
 *     _input_l @ 0x180099400 (_input_l.c)
 *     ReadString_0 @ 0x18009C810 (ReadString_0.c)
 *     _input_s @ 0x18009CB7C (_input_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     _getbuf @ 0x180099F58 (_getbuf.c)
 */

int __cdecl ungetc_nolock(int Character, FILE *Stream)
{
  unsigned __int8 v3; // di
  int result; // eax
  int flag; // eax
  char *base; // rax
  char *ptr; // rcx
  int v8; // edx
  char *v9; // r8

  v3 = Character;
  if ( !Stream )
  {
    invalid_parameter();
    return -1;
  }
  if ( Character == -1 )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  base = Stream->_base;
  if ( !base )
  {
    getbuf(Stream);
    base = Stream->_base;
  }
  ptr = Stream->_ptr;
  if ( Stream->_ptr == base )
  {
    if ( Stream->_cnt )
      return -1;
    Stream->_ptr = ++ptr;
  }
  v8 = Stream->_flag;
  v9 = ptr - 1;
  Stream->_ptr = ptr - 1;
  if ( (v8 & 0x40) != 0 )
  {
    if ( *v9 != v3 )
    {
      Stream->_ptr = ptr;
      return -1;
    }
  }
  else
  {
    *v9 = v3;
    v8 = Stream->_flag;
  }
  ++Stream->_cnt;
  result = v3;
  Stream->_flag = v8 & 0xFFFFFFEE | 1;
  return result;
}
