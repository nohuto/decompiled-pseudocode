/*
 * XREFs of _get_printf_count_output @ 0x180099CD4
 * Callers:
 *     _output_l @ 0x1800964A0 (_output_l.c)
 *     _woutput_l @ 0x180096E30 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_180163450 == (_security_cookie | 1);
}
