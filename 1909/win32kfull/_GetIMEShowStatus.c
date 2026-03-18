/*
 * XREFs of _GetIMEShowStatus @ 0x1C01025F0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 GetIMEShowStatus()
{
  return LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) != 0;
}
