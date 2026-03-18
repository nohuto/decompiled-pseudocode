/*
 * XREFs of _get_printf_count_output @ 0x1401A4D74
 * Callers:
 *     _woutput_l @ 0x1401A3390 (_woutput_l.c)
 *     _output_l @ 0x1401A3DF8 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_14042BB40 == (_security_cookie | 1);
}
