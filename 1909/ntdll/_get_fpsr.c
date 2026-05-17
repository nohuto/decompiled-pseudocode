/*
 * XREFs of _get_fpsr @ 0x1800A3A50
 * Callers:
 *     _control87 @ 0x18009495C (_control87.c)
 *     _clrfp @ 0x180095D80 (_clrfp.c)
 *     _ctrlfp @ 0x180095DA4 (_ctrlfp.c)
 *     _set_statfp @ 0x180095E28 (_set_statfp.c)
 *     _statfp @ 0x180095E50 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
