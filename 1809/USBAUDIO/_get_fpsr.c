/*
 * XREFs of _get_fpsr @ 0x1C0011060
 * Callers:
 *     _clrfp @ 0x1C0010300 (_clrfp.c)
 *     _ctrlfp @ 0x1C0010324 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00103A8 (_set_statfp.c)
 *     _statfp @ 0x1C00103D0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
