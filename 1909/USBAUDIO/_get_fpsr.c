/*
 * XREFs of _get_fpsr @ 0x1C00124C0
 * Callers:
 *     _clrfp @ 0x1C001176C (_clrfp.c)
 *     _ctrlfp @ 0x1C0011790 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0011814 (_set_statfp.c)
 *     _statfp @ 0x1C001183C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
