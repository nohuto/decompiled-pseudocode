/*
 * XREFs of write_char @ 0x1C00BBFD8
 * Callers:
 *     _output_l @ 0x1C00BB7B8 (_output_l.c)
 *     write_multi_char @ 0x1C00BC030 (write_multi_char.c)
 *     write_string @ 0x1C00BC088 (write_string.c)
 * Callees:
 *     _flsbuf @ 0x1C00BB7A8 (_flsbuf.c)
 */

int __fastcall write_char(char a1, FILE *a2, _DWORD *a3)
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
