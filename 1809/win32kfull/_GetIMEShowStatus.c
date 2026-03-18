/*
 * XREFs of _GetIMEShowStatus @ 0x1C011D650
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 GetIMEShowStatus()
{
  return gfIMEShowStatus != 0;
}
