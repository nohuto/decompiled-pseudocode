/*
 * XREFs of _get_printf_count_output @ 0x1C00BCB78
 * Callers:
 *     _output_l @ 0x1C00BB7B8 (_output_l.c)
 *     _woutput_l @ 0x1C00BC110 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C02134E0 == (_security_cookie | 1);
}
