/*
 * XREFs of write_char_0 @ 0x1C00A7E4C
 * Callers:
 *     _output_l @ 0x1C00A75FC (_output_l.c)
 *     write_multi_char_0 @ 0x1C00A7EA4 (write_multi_char_0.c)
 *     write_string_0 @ 0x1C00A7EFC (write_string_0.c)
 * Callees:
 *     _flsbuf @ 0x1C00A6B98 (_flsbuf.c)
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
