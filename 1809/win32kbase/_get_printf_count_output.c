/*
 * XREFs of _get_printf_count_output @ 0x1C00A7F84
 * Callers:
 *     _woutput_l @ 0x1C00A6BA8 (_woutput_l.c)
 *     _output_l @ 0x1C00A75FC (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C01CB7E0 == (_security_cookie | 1);
}
