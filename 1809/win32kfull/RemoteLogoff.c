/*
 * XREFs of RemoteLogoff @ 0x1C01FB8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RemoteLogoff(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x40u;
  PostWinlogonMessage(3LL, 4LL);
  return 0LL;
}
