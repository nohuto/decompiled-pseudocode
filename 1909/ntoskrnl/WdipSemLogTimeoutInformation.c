/*
 * XREFs of WdipSemLogTimeoutInformation @ 0x1408EE2C0
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406BCD90 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     WdipSemWriteTimeoutEvent @ 0x1408EE64C (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmEnabled @ 0x1408EE9E4 (WdipSemSqmEnabled.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x1408EEAD4 (WdipSemSqmLogTimeoutDataPoints.c)
 */

__int64 __fastcall WdipSemLogTimeoutInformation(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  int v6; // ebx

  v6 = 0;
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_TIMEOUT) )
  {
    v6 = WdipSemWriteTimeoutEvent(a1, a2, a3);
    if ( v6 < 0 )
      v6 = 0;
  }
  if ( (unsigned __int8)WdipSemSqmEnabled() )
  {
    v6 = WdipSemSqmLogTimeoutDataPoints(a1, a2);
    if ( v6 < 0 )
      return 0;
  }
  return (unsigned int)v6;
}
