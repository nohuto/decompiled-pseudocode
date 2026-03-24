/*
 * XREFs of IopSymlinkGetECP @ 0x140125878
 * Callers:
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406ABCB0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE58 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406AC210 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406AC26C (IopGraftName.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140639830 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
