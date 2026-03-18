/*
 * XREFs of xxxRemoteShadowSetup @ 0x1C0213BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C013383C (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowSetup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // dx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, a2, 9, 21, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
  }
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    return 3221225506LL;
  if ( gnShadowers || gbConnected )
    xxxRemoteStopScreenUpdates(gpepCSRSS, v4);
  ++gnShadowers;
  return 0LL;
}
