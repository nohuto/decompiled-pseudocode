/*
 * XREFs of ?OnPeerDisconnected@MPCManagerClientConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z @ 0x1801227F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ @ 0x180112D38 (-OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ.c)
 */

__int64 __fastcall MPCManagerClientConnection::OnPeerDisconnected(
        MPCManagerClient **this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2)
{
  MPCManagerClient::OnServerConnectionChanged(this[20]);
  return 0LL;
}
