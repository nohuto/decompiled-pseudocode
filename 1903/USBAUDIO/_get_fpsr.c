/*
 * XREFs of _get_fpsr @ 0x1C0012380
 * Callers:
 *     _clrfp @ 0x1C001162C (_clrfp.c)
 *     _ctrlfp @ 0x1C0011650 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00116D4 (_set_statfp.c)
 *     _statfp @ 0x1C00116FC (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
