/*
 * XREFs of DxgkCddEngIsRemoteConnection @ 0x1C00772A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddEngIsRemoteConnection(_DWORD *a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 )
    *a1 = gbConnected;
  if ( a2 )
    *a2 = gRemoteTerminalLuid;
  if ( a3 )
    *a3 = gRemoteSessionUseWddm;
  LOBYTE(v3) = gProtocolType != 0;
  return v3;
}
