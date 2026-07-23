/*
 * XREFs of write_char_0 @ 0x140199804
 * Callers:
 *     _output_l @ 0x140198FB4 (_output_l.c)
 *     write_multi_char_0 @ 0x14019985C (write_multi_char_0.c)
 *     write_string_0 @ 0x1401998B4 (write_string_0.c)
 *     _output_s @ 0x14019C1B8 (_output_s.c)
 *     write_string_1 @ 0x14019CBB4 (write_string_1.c)
 * Callees:
 *     _flsbuf @ 0x140198550 (_flsbuf.c)
 */

int __fastcall write_char_0(char a1, FILE *a2, _DWORD *a3)
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
