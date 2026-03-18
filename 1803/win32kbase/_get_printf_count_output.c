/*
 * XREFs of _get_printf_count_output @ 0x1C0075970
 * Callers:
 *     _woutput_l @ 0x1C0074588 (_woutput_l.c)
 *     _output_l @ 0x1C0074FF4 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C01A0020 == (_security_cookie | 1);
}
