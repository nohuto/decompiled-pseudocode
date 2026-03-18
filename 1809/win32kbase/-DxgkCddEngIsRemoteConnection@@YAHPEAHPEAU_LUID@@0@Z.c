/*
 * XREFs of ?DxgkCddEngIsRemoteConnection@@YAHPEAHPEAU_LUID@@0@Z @ 0x1C0068E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddEngIsRemoteConnection(int *a1, struct _LUID *a2, int *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 )
    *a1 = gbConnected;
  if ( a2 )
    *a2 = (struct _LUID)gRemoteTerminalLuid;
  if ( a3 )
    *a3 = gRemoteSessionUseWddm;
  LOBYTE(v3) = gProtocolType != 0;
  return v3;
}
