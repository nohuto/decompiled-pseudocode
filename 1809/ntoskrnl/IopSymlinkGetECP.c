/*
 * XREFs of IopSymlinkGetECP @ 0x140125858
 * Callers:
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406ABCD0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE78 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406AC230 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406AC28C (IopGraftName.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140639830 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
