/*
 * XREFs of _get_fpsr @ 0x1401C7250
 * Callers:
 *     _clrfp @ 0x14019A210 (_clrfp.c)
 *     _ctrlfp @ 0x14019A234 (_ctrlfp.c)
 *     _set_statfp @ 0x14019A2B8 (_set_statfp.c)
 *     _statfp @ 0x14019A2E0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
