/*
 * XREFs of _get_fpsr @ 0x1C0079B60
 * Callers:
 *     _clrfp @ 0x1C00799F0 (_clrfp.c)
 *     _ctrlfp @ 0x1C0079A14 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0079A98 (_set_statfp.c)
 *     _statfp @ 0x1C0079AC0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
