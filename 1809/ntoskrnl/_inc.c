/*
 * XREFs of _inc @ 0x14019DA14
 * Callers:
 *     ReadString @ 0x14019D6DC (ReadString.c)
 *     _input_s @ 0x14019DA48 (_input_s.c)
 * Callees:
 *     _filbuf_s @ 0x14019F2B0 (_filbuf_s.c)
 */

__int64 __fastcall inc(FILE *a1)
{
  int cnt; // edx

  cnt = a1->_cnt;
  a1->_cnt = cnt - 1;
  if ( cnt <= 0 )
    return (unsigned int)filbuf_s(a1);
  else
    return *(unsigned __int8 *)a1->_ptr++;
}
