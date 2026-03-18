/*
 * XREFs of _get_printf_count_output @ 0x1C00B9B18
 * Callers:
 *     _output_l @ 0x1C00B8758 (_output_l.c)
 *     _woutput_l @ 0x1C00B90B0 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C02104E0 == (_security_cookie | 1);
}
