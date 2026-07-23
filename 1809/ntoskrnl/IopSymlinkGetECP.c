/*
 * XREFs of IopSymlinkGetECP @ 0x140125948
 * Callers:
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406ACF50 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406AD0F8 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406AD4B0 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406AD50C (IopGraftName.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x14063A850 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
