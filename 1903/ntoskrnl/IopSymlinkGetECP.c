/*
 * XREFs of IopSymlinkGetECP @ 0x140126730
 * Callers:
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406CE888 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406CEA0C (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406CEE5C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406CEEB8 (IopGraftName.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140602C80 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
