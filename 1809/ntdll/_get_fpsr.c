/*
 * XREFs of _get_fpsr @ 0x1800A6DA0
 * Callers:
 *     _control87 @ 0x180097A24 (_control87.c)
 *     _clrfp @ 0x180098E4C (_clrfp.c)
 *     _ctrlfp @ 0x180098E70 (_ctrlfp.c)
 *     _set_statfp @ 0x180098EF4 (_set_statfp.c)
 *     _statfp @ 0x180098F1C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
