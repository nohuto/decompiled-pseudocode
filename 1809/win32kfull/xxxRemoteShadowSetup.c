/*
 * XREFs of xxxRemoteShadowSetup @ 0x1C01FC6E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C00EA1E8 (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowSetup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    return 3221225506LL;
  if ( gnShadowers || gbConnected )
    xxxRemoteStopScreenUpdates();
  ++gnShadowers;
  return 0LL;
}
