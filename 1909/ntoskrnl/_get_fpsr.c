/*
 * XREFs of _get_fpsr @ 0x1401CE3C0
 * Callers:
 *     _clrfp @ 0x1401A51BC (_clrfp.c)
 *     _ctrlfp @ 0x1401A51E0 (_ctrlfp.c)
 *     _set_statfp @ 0x1401A5264 (_set_statfp.c)
 *     _statfp @ 0x1401A528C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
