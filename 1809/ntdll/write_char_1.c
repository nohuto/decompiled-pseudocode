/*
 * XREFs of write_char_1 @ 0x18009C6F0
 * Callers:
 *     _output_s @ 0x18009BCA0 (_output_s.c)
 *     write_multi_char_1 @ 0x18009C748 (write_multi_char_1.c)
 *     write_string_1 @ 0x18009C7A0 (write_string_1.c)
 * Callees:
 *     _flsbuf @ 0x180096490 (_flsbuf.c)
 */

int __fastcall write_char_1(char a1, FILE *a2, _DWORD *a3)
{
  int result; // eax
  int cnt; // ecx

  result = a2->_flag;
  if ( ((result & 0x40) == 0 || a2->_base)
    && ((cnt = a2->_cnt, a2->_cnt = cnt - 1, cnt <= 0)
      ? (result = flsbuf(a1, a2))
      : (*a2->_ptr = a1, ++a2->_ptr, result = (unsigned __int8)a1),
        result == -1) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
  return result;
}
