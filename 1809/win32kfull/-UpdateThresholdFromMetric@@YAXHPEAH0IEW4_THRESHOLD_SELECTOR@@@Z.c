/*
 * XREFs of ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C00C0944
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     UpdateDesktopThresholds @ 0x1C00C09B0 (UpdateDesktopThresholds.c)
 *     UpdateWinIniInt @ 0x1C01C7398 (UpdateWinIniInt.c)
 */

__int64 __fastcall UpdateThresholdFromMetric(
        int a1,
        _DWORD *a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned __int8 a5,
        int a6)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = UpdateWinIniInt(0LL, 12LL, a4, a5);
    *a2 = result;
    *a3 = result;
  }
  else
  {
    result = (unsigned int)*a3;
  }
  if ( (_DWORD)result )
  {
    gWinArrGlobal[a6] = a5;
    result = UpdateDesktopThresholds();
    if ( !(_DWORD)result )
      gWinArrGlobal[a6] = a5;
  }
  return result;
}
