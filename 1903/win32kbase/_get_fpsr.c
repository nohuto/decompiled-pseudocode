/*
 * XREFs of _get_fpsr @ 0x1C00C1410
 * Callers:
 *     _clrfp @ 0x1C00C128C (_clrfp.c)
 *     _ctrlfp @ 0x1C00C12B0 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00C1334 (_set_statfp.c)
 *     _statfp @ 0x1C00C135C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
