/*
 * XREFs of _get_printf_count_output @ 0x180096C0C
 * Callers:
 *     _output_l @ 0x1800933D0 (_output_l.c)
 *     _woutput_l @ 0x180093D60 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_180163430 == (_security_cookie | 1);
}
