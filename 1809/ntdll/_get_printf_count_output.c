/*
 * XREFs of _get_printf_count_output @ 0x180099CC4
 * Callers:
 *     _output_l @ 0x180096490 (_output_l.c)
 *     _woutput_l @ 0x180096E20 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_180163450 == (_security_cookie | 1);
}
