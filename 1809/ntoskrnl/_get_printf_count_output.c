/*
 * XREFs of _get_printf_count_output @ 0x140199DEC
 * Callers:
 *     _woutput_l @ 0x140198400 (_woutput_l.c)
 *     _output_l @ 0x140198E54 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140405600 == (_security_cookie | 1);
}
