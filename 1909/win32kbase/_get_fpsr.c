/*
 * XREFs of _get_fpsr @ 0x1C00BF5F0
 * Callers:
 *     _clrfp @ 0x1C00BF46C (_clrfp.c)
 *     _ctrlfp @ 0x1C00BF490 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00BF514 (_set_statfp.c)
 *     _statfp @ 0x1C00BF53C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
