/*
 * XREFs of CancelForegroundActivate @ 0x1C0022E84
 * Callers:
 *     WakeSomeone @ 0x1C0023FC4 (WakeSomeone.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CancelForegroundActivate(int a1)
{
  __int64 result; // rax
  __int64 i; // rbx
  int v3; // edx

  result = gdwPUDFlags;
  if ( (gdwPUDFlags & 0x8000000) != 0 )
  {
    for ( i = gppiStarting; i; i = *(_QWORD *)(i + 368) )
    {
      if ( !PsGetProcessDebugPort(*(_QWORD *)i) )
      {
        *(_DWORD *)(i + 12) &= ~0x100u;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(a1, v3, 2, 18, (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids, i);
      }
    }
    result = gdwPUDFlags;
    gdwPUDFlags &= ~0x8000000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_(a1, 4, 2, 19, (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids);
  }
  return result;
}
