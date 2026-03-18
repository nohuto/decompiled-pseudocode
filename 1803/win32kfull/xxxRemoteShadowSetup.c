/*
 * XREFs of xxxRemoteShadowSetup @ 0x1C01D7900
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C00BB5A8 (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowSetup(__int64 a1, __int64 a2)
{
  if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    return 3221225506LL;
  if ( gnShadowers || gbConnected )
    xxxRemoteStopScreenUpdates();
  ++gnShadowers;
  return 0LL;
}
