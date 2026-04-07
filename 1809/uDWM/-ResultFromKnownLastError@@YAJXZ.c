/*
 * XREFs of ?ResultFromKnownLastError@@YAJXZ @ 0x1800AEC94
 * Callers:
 *     ?_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z @ 0x18002E828 (-_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z.c)
 *     ??0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z @ 0x180037D28 (--0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     <none>
 */

signed int ResultFromKnownLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    result = (unsigned __int16)result | 0x80070000;
  if ( result >= 0 )
    return -2147467259;
  return result;
}
