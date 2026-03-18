/*
 * XREFs of _get_fpsr @ 0x1401CD840
 * Callers:
 *     _clrfp @ 0x1401A4A9C (_clrfp.c)
 *     _ctrlfp @ 0x1401A4AC0 (_ctrlfp.c)
 *     _set_statfp @ 0x1401A4B44 (_set_statfp.c)
 *     _statfp @ 0x1401A4B6C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
