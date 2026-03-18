/*
 * XREFs of RemoteLogoff @ 0x1C0212BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RemoteLogoff(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, a2, 9, 18, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
  }
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x40u;
  PostWinlogonMessage(3LL, 4LL);
  return 0LL;
}
