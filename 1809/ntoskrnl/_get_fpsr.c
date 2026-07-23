/*
 * XREFs of _get_fpsr @ 0x1401C73D0
 * Callers:
 *     _clrfp @ 0x14019A370 (_clrfp.c)
 *     _ctrlfp @ 0x14019A394 (_ctrlfp.c)
 *     _set_statfp @ 0x14019A418 (_set_statfp.c)
 *     _statfp @ 0x14019A440 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
