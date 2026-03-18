/*
 * XREFs of _GetIMEShowStatus @ 0x1C0126EC0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 GetIMEShowStatus()
{
  return LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) != 0;
}
