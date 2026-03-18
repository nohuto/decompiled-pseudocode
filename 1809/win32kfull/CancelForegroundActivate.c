/*
 * XREFs of CancelForegroundActivate @ 0x1C00D50DC
 * Callers:
 *     WakeSomeone @ 0x1C00D435C (WakeSomeone.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 CancelForegroundActivate()
{
  __int64 result; // rax
  __int64 i; // rbx

  result = gdwPUDFlags;
  if ( (gdwPUDFlags & 0x8000000) != 0 )
  {
    for ( i = gppiStarting; i; i = *(_QWORD *)(i + 376) )
    {
      if ( !PsGetProcessDebugPort(*(_QWORD *)i) )
        *(_DWORD *)(i + 12) &= ~0x100u;
    }
    result = gdwPUDFlags;
    gdwPUDFlags &= ~0x8000000u;
  }
  return result;
}
