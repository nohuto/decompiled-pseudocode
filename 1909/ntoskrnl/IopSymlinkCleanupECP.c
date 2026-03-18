/*
 * XREFs of IopSymlinkCleanupECP @ 0x1406CE3A0
 * Callers:
 *     <none>
 * Callees:
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1406CE3B4 (IopSymlinkFreeRelatedMountPointChain.c)
 */

void __fastcall IopSymlinkCleanupECP(PVOID EcpContext, LPCGUID EcpType)
{
  IopSymlinkFreeRelatedMountPointChain(EcpContext);
}
