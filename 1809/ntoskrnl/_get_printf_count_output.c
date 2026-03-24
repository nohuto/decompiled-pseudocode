/*
 * XREFs of _get_printf_count_output @ 0x140199E0C
 * Callers:
 *     _woutput_l @ 0x140198420 (_woutput_l.c)
 *     _output_l @ 0x140198E74 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140405600 == (_security_cookie | 1);
}
