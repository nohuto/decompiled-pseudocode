/*
 * XREFs of _get_fpsr @ 0x1800A6D80
 * Callers:
 *     _control87 @ 0x180097A14 (_control87.c)
 *     _clrfp @ 0x180098E3C (_clrfp.c)
 *     _ctrlfp @ 0x180098E60 (_ctrlfp.c)
 *     _set_statfp @ 0x180098EE4 (_set_statfp.c)
 *     _statfp @ 0x180098F0C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
