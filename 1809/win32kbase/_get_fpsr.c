/*
 * XREFs of _get_fpsr @ 0x1C00AF750
 * Callers:
 *     _clrfp @ 0x1C00AF5D0 (_clrfp.c)
 *     _ctrlfp @ 0x1C00AF5F4 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00AF678 (_set_statfp.c)
 *     _statfp @ 0x1C00AF6A0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
