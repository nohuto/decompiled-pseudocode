/*
 * XREFs of IopSymlinkGetECP @ 0x140127230
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406CD628 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406CD7AC (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406CDBFC (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406CDC58 (IopGraftName.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140604790 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
